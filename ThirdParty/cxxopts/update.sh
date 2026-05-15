#!/bin/bash

set -e

name="cxxopts"
repository="https://github.com/jarro2783/cxxopts"
subtree="$name/src"
version="3.3.1"
tag=""
files=(
    "include/cxxopts.hpp"
    "LICENSE"
    "README.md"
)
