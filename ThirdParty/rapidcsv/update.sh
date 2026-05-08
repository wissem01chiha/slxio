#!/bin/bash

set -e

name="rapidcsv"
repository="https://github.com/d99kris/rapidcsv"
subtree="$name/src"
version="8.92"
tag=""
files=(
    "src/rapidcsv.h"
    "LICENSE"
    "README.md"
)