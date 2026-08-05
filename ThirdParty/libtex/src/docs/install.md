---
title:  Installation Guide
---

# Precompiled Binaries

For quick integration, the easiest way is to download the precompiled installation package for your platform, available on the release page.

# Build from Source

libtex uses [cmake](https://cmake.org/) as its main build system, support for other build systems or workflows may be subject to discusssion 
to build libtex from source a version of cmake (version range form 3.12 to 3.31 ) and git 

## Configure Options

| Option                | Description                                               | Default | Supported Since |
|------------------------|-----------------------------------------------------------|---------|-----------------|
| LIBTEX_BUILD_SHARED    | Build libtex as a shared library                          | OFF     |   0.1.0         |
| LIBTEX_BUILD_TOOLS     | Build command-line tools distributed with libtex          | ON      |   0.1.0         |
| LIBTEX_BUILD_TESTS     | Build unit and integration tests                          | ON      |   0.1.0         |
| LIBTEX_BUILD_REGRESS   | Build regression test suite                               | ON      |    0.1.0        |
| LIBTEX_BUILD_DOC       | Generate project documentation                            | ON      |    0.1.0        |
| LIBTEX_INSTALL         | Enable installation targets                               | OFF     |    0.1.0        |
| LIBTEX_COVER           | Enable code coverage reporting (GCC/Clang)                | OFF     |    0.1.0        |
| LIBTEX_ASAN            | Enable AddressSanitizer (ASan) for runtime checks         | ON      |    0.1.0        |

# Platform Support 

libtex support mainly last versions of windows , Ubuntu , MacOS, 
