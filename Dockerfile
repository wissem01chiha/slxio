FROM ubuntu:22.04

ENV DEBIAN_FRONTEND=noninteractive
ENV CXX=/usr/bin/g++

RUN apt-get update && apt-get install -y \
    cmake \
    git \
    g++

WORKDIR /workdir
COPY . /workdir

RUN rm -rf build && mkdir -p build && cd build && \
    cmake -D CMAKE_C_COMPILER=gcc -D CMAKE_CXX_COMPILER=/usr/bin/g++ ..  && \
    make -j8 && \
    make install
