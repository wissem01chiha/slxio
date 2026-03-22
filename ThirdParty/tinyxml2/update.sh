#!/bin/bash

# SPDX-FileCopyrightText: Copyright (c) Wissem Chiha
# SPDX-License-Identifier: Apache-2.0

set -e

name="tinyxml2"
repository="https://github.com/leethomason/tinyxml2"
subtree="$name/src"
version=""
tag="11.0.0"
files=(
    "tinyxml2.h"
    "tinyxml2.cpp"
    "LICENSE.txt"
    "readme.md"
)