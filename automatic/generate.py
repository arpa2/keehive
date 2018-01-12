from jinja2 import Environment, FileSystemLoader, StrictUndefined
from itertools import chain
import pickle
import os

templates_folder = 'templates'


def under(s):
    return s.replace('-', '_')


def ack2ck(s):
    if s.startswith('ACK_'):
        s = s[1:]

    if s.endswith('_ARRAY'):
        s = s[:-5] + "PTR"

    return s


def extractargs(fundef):
    def filter_(x):
        return (i for i in x.type_decl.components
                if i.__str__() != "..." and
                i.type_decl.type_name != 'NULL' and
                i.type_decl.type_name != 'ANY'
                )

    for c in filter_(fundef):
        if c.type_decl.type_name == "CHOICE":
            for d in filter_(c.type_decl):
                yield d
        else:
            yield c


def main():
    env = Environment(
        loader=FileSystemLoader(templates_folder),
        undefined=StrictUndefined,
    )

    env.filters['under'] = under
    env.filters['ack2ck'] = ack2ck
    env.filters['extractargs'] = extractargs
    env.globals['extractargs'] = extractargs

    with open('dump', 'rb') as f:
        data = pickle.load(f)

    for root, dirs, files in os.walk(templates_folder):
        path = root.split(os.sep)
        for file_name in files:
            if file_name.endswith('.tmpl'):
                continue
            file_path = os.path.join("/".join(path[1:]), file_name)
            template = env.get_template(file_path)

            calls = data['calls']
            returns = data['returns']
            data['functions'] = calls + returns

            # we need a aligned call and return list in case we need access to both
            data['zipped'] = list(zip(calls, returns))
            for i in data['zipped']:
                assert i[0].type_name[:-4] == i[1].type_name[:-6]

            target = os.path.join('generated/', file_path)
            print("generating {}".format(target))
            with open(target, 'w') as f:
                f.write(template.render(**data))


if __name__ == '__main__':
    main()