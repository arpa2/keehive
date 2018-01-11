from jinja2 import Environment, FileSystemLoader
import pickle
import os

templates_folder = 'templates'

def under(s):
    return s.replace('-', '_')


env = Environment(
    loader=FileSystemLoader(templates_folder),
)

env.filters['under'] = under


with open('dump', 'rb') as f:
    relevant = pickle.load(f)

for file_name in os.listdir(templates_folder):
    template = env.get_template(file_name)

    with open('generated/' + file_name, 'w') as f:
        f.write(template.render(objects=relevant))
