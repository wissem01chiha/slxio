#!/bin/bash
set -e  
BUILD_DIR="build"

if [ ! -d "$BUILD_DIR" ]; then
    mkdir -p "$BUILD_DIR"
    cd $BUILD_DIR
fi

CORES=$(nproc)  

cmake -G Ninja -DCMAKE_BUILD_TYPE=Release  ..
ninja -j$CORES
