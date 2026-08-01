---
title:  Installation Guide
nav_order: 5
---

## Installation

### Build from Source

#### CMake

[CMake](https://cmake.org) 3.24 or higher is required.The default
  installation directory is ``/usr/local``.

To specify a different directory, add
  ``-DCMAKE_INSTALL_PREFIX=/path/to/install/dir`` to the CMake
  invocation in step 4.

1. Clone the repository:

```shell
    git clone https://github.com/wissem01chiha/npio
```

2. Configure the build:

```shell
   cmake -B build -DCMAKE_INSTALL_PREFIX=~/build/install
```

3. Build and install:

```shell
   ninja install
```

#### Meson

Meson >= 1.10.0 is required. For more information, refer to
[Quick-guide](https://mesonbuild.com/Quick-guide.html)

```shell
   meson setup builddir 
   cd builddir 
   meson compile 
```

Then install the library using:

```shell
   meson install
```

#### Bazel

   Bazel is not yet supported. Please use [cmake](#cmake) or [meson](menson) instead.

## Testing

### CMake

### Meson

To run project tests:

```shell
   meson test 
```
### Bazel

   Bazel tests are not yet supported. Use [cmake](cmake) or [meson](menson) to run tests