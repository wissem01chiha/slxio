# SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
# SPDX-License-Identifier: Apache-2.0

FROM ubuntu:22.04

ENV DEBIAN_FRONTEND=noninteractive
ENV CXX=/usr/bin/g++

RUN apt-get update && apt-get install -y --no-install-recommends \
    cmake \
    git \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /workdir
COPY . /workdir

RUN rm -rf build && mkdir -p build && cd build && \
    cmake -D CMAKE_C_COMPILER=gcc -D CMAKE_CXX_COMPILER=/usr/bin/g++ ..  && \
    make -j8 && \
    make install
