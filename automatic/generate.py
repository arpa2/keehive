from jinja2 import Environment, FileSystemLoader
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

    # CHOICE
    # UTF8String
    # CK_OPAQUE
    """
    <vanrein> zie de .asn1 file [als de roze eenhoorns met regenboogmanen verjaagd zijn van github]
    <vanrein> -- The "void array array" is only useful as a pointer to an array of pointers
    <vanrein> -- whose types are unknown.  We therefore implement it as a `SEQUENCE` of such
    <vanrein> -- pointers.
    <vanrein> zoals altijd, ik hoor het graag als ik wat doms bedacht heb
    <vanrein> en
    <vanrein> -- "Void arrays" are a special form; they are used to point to opaque memory,
    <vanrein> -- which usually means that a size is given elsewhere, so it could also be said
    <vanrein> -- to present a byte memory.  We use the `OCTET STRING` type to represent the
    <vanrein> -- contained information below.  It depends on the application what precisely
    <vanrein> -- is stored in that field; it might be literal data or further typing; indeed,
    <vanrein> -- further typing is advantageous for compatible processing.
        <vanrein> klinkt dat logisch?
    <vanrein> toepassingen:
    <vanrein> 1. calls met een mechanisme, die een parameter kan hebben die afhangt van dat mechanisme
    <vanrein> 2. attributen, die een waarde doorgeven wier interpretatie afhangt van de attribuuttag
    <vanrein> in ASN.1 kun je ook dingen doen met "ANY DEFINED BY [oidveld]" maar dat is tedious, en komt hier uiteindelijk op neer, inlcusief de noodzaak om er alsnog op te testen
    
    over ANY
    [17:52:49] <vanrein> ANY is anders want het kan elke tag hebben; een ACK-OPAQUE is altijd een OCTET STRING
[17:53:14] <vanrein> bovendien, ANY  bevat echt een DER-geval, en wel eentje, terwijl OCTET STRING vanalles kan bevatten, ook een maffe constructie van bytes
[17:53:44] <vanrein> om ANY te skippen, sla je die ene tag/length/value over; om ACK-OPAQUE te skippen skip je de t/l/v van een OCTET STRING [specifieker dus]
[17:53:59] <vanrein> [want binnen die OCTET STRING weet je echt niet wat je vindt]
[17:54:35] <vanrein> is UTF8String een Python type [remember, ik gebruik nog untyped Python]
[17:55:45] <vanrein> nee, dus je bedoelt het ASN.1 type en vraagt je af of dit aliases zijn...
[17:57:35] <gijs> pff
[17:57:37] <gijs> ik ga er vandoor :)
[17:57:39] <gijs> kan niet meer
[17:57:39] <vanrein> quotend onder "Pointers and Arrays":
[17:57:40] <vanrein> -- Instead of sending pointers, in the ASN.1 syntax we will transfer the data
[17:57:41] <vanrein> -- pointed at, but only where it is sensible in the direction in which it is
[17:57:42] <vanrein> -- communicated.  For instance, a pointer to an output value will not be sent
[17:57:43] <vanrein> -- as part of a function call, but it will be included in the returned result.
    
    """
    return s


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
