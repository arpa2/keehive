FROM ubuntu:18.04

RUN apt-get update && apt-get install -y \
   cmake \
   build-essential \
   libcmocka-dev \
   libcppunit-dev \
   libsofthsm2-dev \
   python3-jinja2 \
   python-pip \
   python-pip \
   git 

RUN mkdir /build
RUN git clone https://github.com/arpa2/arpa2cm /build/arpa2cm
RUN mkdir /build/arpa2cm/build
WORKDIR /build/arpa2cm/build
RUN cmake /build/arpa2cm
RUN make install

RUN git clone https://github.com/vanrein/quick-der /build/quick-der
WORKDIR /build/quick-der
RUN git checkout keehub
RUN pip install .
RUN apt-get install -y python3-pip
RUN pip3 install .
RUN mkdir /build/quick-der/build
WORKDIR /build/quick-der/build
RUN cmake /build/quick-der
RUN make install

ADD . /code
WORKDIR /code
RUN python3 generate/generate.py
RUN mkdir /code/build
WORKDIR /code/build
RUN cmake .. -DENABLE_TESTING=ON
RUN make -j

#RUN make test
