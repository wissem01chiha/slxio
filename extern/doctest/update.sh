#!/bin/bash

set -e

name="doctest"
repository="https://github.com/doctest/doctest"
subtree="$name/src"
version="2.5.2"
tag=""
files=(
    "doctest/doctest.h"
    "doctest/extensions/doctest_mpi.h"
    "doctest/extensions/doctest_util.h"
    "doctest/extensions/mpi_reporter.h"
    "doctest/extensions/mpi_sub_comm.h"
    "doctest/doctest.cpp"
    "doctest/parts/doctest_fwd.h"
    "LICENSE.txt"
    "README.md"
)
