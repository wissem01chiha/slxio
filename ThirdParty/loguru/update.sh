#!/bin/bash

set -e

name="loguru"
repository="https://github.com/emilk/loguru"
subtree="$name/src"
version="2.1.0"
tag=""
files=(
    "loguru.hpp"
    "loguru.cpp"
    "README.md"
)
