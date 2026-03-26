#!/bin/bash

set -e

name="sol2"
repository="https://github.com/ThePhD/sol2"
subtree="$name/src"
version="3.3.0"
tag=""
files=(
    "include/sol/as_args.hpp"
    "include/sol/as_returns.hpp"
    "LICENSE.txt"
    "README.md"
)