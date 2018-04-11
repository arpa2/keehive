# Introduction


Please not that this project is still very much in early development and is probably not building for you.

I suggest you come back in a little while :)


* http://www.arpa2.net/
* https://github.com/arpa2/multi-pkcs11


# Dependencies

* Cmake
* https://github.com/vanrein/quick-der
* https://github.com/arpa2/arpa2cm

For testing:

* https://cmocka.org/
* https://github.com/opendnssec/SoftHSMv2
* cpp unit

On Debian/Ubuntu these are available as packages:
```
$ sudo apt install libsofthsm2-dev libcmocka-dev libcppunit-dev
```


# Build
```
 $ mkdir build
 $ cd build
 $ cmake ..
 $ make
 $ make install
```

# Testing

```
 $ mkdir build
 $ cd build
 $ cmake .. -DENABLE_TESTING=ON
 $ make
 $ make test
```

# Development

To generate the source code from the ASN1 definition:

* Install python3
* `$ pip install -r generate/requirements.txt`
* `$ python3 generate/generate.py`
