import pickle


with open('dump', 'rb') as f:
    data = pickle.load(f)
    for call in data['calls']:
        for c in call.type_decl.components:
            if c.type_decl.type_name == "CHOICE":
                c