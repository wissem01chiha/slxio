#!/bin/bash

set -e

name="pybind11"
repository="https://github.com/pybind/pybind11"
subtree="$name/src"
version="3.0.2"
tag=""
files=(
    "include/pybind11/attr.h"
    "include/pybind11/buffer_info.h"
    "LICENSE"
    "README.rst"
)
