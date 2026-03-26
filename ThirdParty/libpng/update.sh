#!/bin/bash

set -e

name="libpng"
repository="https://github.com/pnggroup/libpng"
subtree="$name/src"
version=""
tag="v1.6.56"
files=(
    "pngwutil.c"
    "pngwtran.c"
    "pngwrite.c"
    "pngwio.c"
    "pngtrans.c"
    "pngstruct.h"
    "pngset.c"
    "pngrutil.c"
    "pngrtran.c"
    "pngrio.c"
    "pngread.c"
    "pngpriv.h"
    "pngpread.c"
    "pngmem.c"
    "pnginfo.h"
    "pngget.c"
    "pngerror.c"
    "pngdebug.h"
    "pngconf.h"
    "png.h"
    "png.c"
)



