# Introduction


Please not that this project is still very much in early development and is probably not building for you.

I suggest you come back in a little while :)


* http://www.arpa2.net/
* https://github.com/arpa2/multi-pkcs11


# Dependencies

* Cmake
* https://github.com/vanrein/quick-der
* https://cmocka.org/
* https://github.com/opendnssec/SoftHSMv2


# Build

* $ mkdir build
* $ pushd build
* $ cmake ..
* $ make


# Development

To generate the source code from the ASN1 definition:

* Install python3
* `$ pip install -r generate/requirements.txt`
* `$ python3 generate/generate.py`
