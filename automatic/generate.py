from jinja2 import Environment, FileSystemLoader
from itertools import chain
import pickle
import os

templates_folder = 'templates'


def under(s):
    return s.replace('-', '_')


def ack2ck(s):
    return s[1:]


env = Environment(
    loader=FileSystemLoader(templates_folder),
)

env.filters['under'] = under
env.filters['ack2ck'] = ack2ck


with open('dump', 'rb') as f:
    data = pickle.load(f)

for file_name in os.listdir(templates_folder):

    template = env.get_template(file_name)

    calls = data['calls']
    returns = data['returns']
    data['functions'] = calls + returns

    target = 'generated/' + file_name
    print("generating {}".format(target))
    with open(target, 'w') as f:
        f.write(template.render(**data))
