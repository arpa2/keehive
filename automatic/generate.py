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


def filter_unused(fundef):
    return (i for i in fundef.type_decl.components
            if i.__str__() != "..." and
            i.type_decl.type_name != 'NULL' and
            i.type_decl.type_name != 'ANY'
            )


def extractargs(fundef):
    """ Extracts arguments from a function definition. Filters out optional types. """
    for c in filter_unused(fundef):
        if c.type_decl.type_name == "CHOICE":
            for d in filter_unused(c.type_decl):
                yield d
        else:
            yield c


def combine(funca, funcb):
    """ Extracts, combines and orders the arguments for Return and Call """
    x = {}
    for f in funca, funcb:
        for i in filter_unused(f):
            if hasattr(i.type_decl, "class_number"):
                if i.type_decl.type_name == "CHOICE":
                    for d in filter_unused(i.type_decl):
                        if hasattr(d.type_decl, "class_number"):
                            x[d.type_decl.class_number] = d
                else:
                    x[i.type_decl.class_number] = i
    if not x:
        return []

    len_ = max(int(i) for i in x.keys())
    array = [None] * (len_ + 1)
    for k, v in x.items():
        array[int(k)] = v

    # todo: this should be required, but there are 'gaps' in the spec?
    array = list(filter(None, array))
    return array




def main():
    env = Environment(
        loader=FileSystemLoader(templates_folder),
        undefined=StrictUndefined,
    )

    # enhance the template filter experience
    env.filters['under'] = under
    env.filters['ack2ck'] = ack2ck
    env.filters['extractargs'] = extractargs

    # enhance the template function experience
    env.globals['extractargs'] = extractargs
    env.globals['combine'] = combine

    with open('dump', 'rb') as f:
        data = pickle.load(f)

    returns = data['returns']
    calls = data['calls']
    data['functions'] = calls + returns

    # we need a aligned call and return list in case we need access to both
    data['zipped'] = list(zip(calls, returns))
    for i in data['zipped']:
        assert i[0].type_name[:-4] == i[1].type_name[:-6]

    for root, dirs, files in os.walk(templates_folder):
        path = root.split(os.sep)
        for file_name in files:
            if file_name.endswith('.tmpl'):
                continue
            file_path = os.path.join("/".join(path[1:]), file_name)
            template = env.get_template(file_path)


            target = os.path.join('generated/', file_path)
            print("generating {}".format(target))
            with open(target, 'w') as f:
                f.write(template.render(**data))


if __name__ == '__main__':
    main()