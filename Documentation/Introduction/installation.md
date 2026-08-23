@page Install Installation Guide

To install the prebuilt binary of the library, refer to the [Installation](#20-building) section and check out the latest release from the official GitHub release [page](https://github.com/wissem01chiha/slxio/releases),for building the library from source, see the same page for detailed instructions.


## Binary Release

The easiest way to install is to visit the [Releases page](https://github.com/wissem01chiha/slxio/releases) and download the latest release for your platform.

#### 2.2 vcpkg

> [!NOTE]
> `slxio` is not yet available on [vcpkg](https://github.com/microsoft/vcpkg), once it is published, you will be able to install it using:
>
> ```bash
> vcpkg install slxio
> ```

#### 2.3 Conan Recipe

See [Conan](https://github.com/conan-io/conan).

> [!NOTE]
> `slxio` is not yet available on the Conan package manager, once it is published, you will be able to add it to your project using a Conan recipe.


## 3.0 Building from Source

This section describes how to build slxio, see  [2.1](#21-dependencies) describes the dependencies,

### 3.1 Dependencies

Slxio has its own modular build wrapper, written on top of CMake, similar to many open‑source projects.
All core dependencies are vendored with the source code in the [ThirdParty](/ThirdParty/) directory to maximize platform compatibility and reduce reliance on external build/fetch rules.
Optional dependencies may either use system‑wide installations or be fetched externally depending on configuration options, via CMake package managers or other internal helpers.


| Library                                            | Version | Introduced In                                             | Depends On                            | Notes                                   |
|----------------------------------------------------|---------|-----------------------------------------------------------|---------------------------------------|-----------------------------------------|
| [slog](https://github.com/kala13x/slog)            | Latest  | [v0.1.0](https://github.com/wissem01chiha/slxio/releases) |                                       |                                         |
| [json-c](https://github.com/json-c/json-c)         | Latest  | [v0.1.0](https://github.com/wissem01chiha/slxio/releases) |                                       |                                         |
| [zlib](https://github.com/madler/zlib)             | 1.2.8   | [v0.1.0](https://github.com/wissem01chiha/slxio/releases) |                                       |                                         |
| [libzip](https://github.com/nih-at/libzip)         | 1.11.4  | [v0.1.0](https://github.com/wissem01chiha/slxio/releases) | [zlib](https://github.com/madler/zlib)|                                         |
| [libxml2](https://gitlab.gnome.org/GNOME/libxml2)  | 2.14.5  | [v0.1.0](https://github.com/wissem01chiha/slxio/releases) |                                       |                                         |
| [TinyXML2](https://github.com/leethomason/tinyxml2)|         | [v0.1.0](https://github.com/wissem01chiha/slxio/releases) |                                       | Not yet used                            |
| [HDF5](https://github.com/HDFGroup/hdf5)           | 1.14.1  | [v0.3.0](https://github.com/wissem01chiha/slxio/releases) | [zlib](https://github.com/madler/zlib)| experimental                            |
| [matio](https://github.com/tbeu/matio)             | 1.5.28  | [v0.3.0](https://github.com/wissem01chiha/slxio/releases) | [zlib](https://github.com/madler/zlib), [HDF5](https://github.com/HDFGroup/hdf5) |  experimental |
| [cxxopts](https://github.com/jarro2783/cxxopts)    | 3.3.1   | [v0.3.0](https://github.com/wissem01chiha/slxio/releases) |                                       | experimental                             |
| [doctest](https://github.com/doctest/doctest)      | 1.14.0  | [v0.3.0](https://github.com/wissem01chiha/slxio/releases) |                                       |                                          |
| [libuv](https://github.com/libuv/libuv)            |         | [v0.3.0](https://github.com/wissem01chiha/slxio/releases) |                                       |                                          |


#### 3.1.1 zlib

Support for compressed [SLX](), [JSON](), [MAT](), and [h5]() file formats requires the zlib library. Version 1.2.8 of zlib is bundled with the code and will be built automatically if not found by [CMake]() in the system path. Other versions are not officially supported.

#### 3.1.1 HDF5

Support for MATLAB [MAT](https://www.mathworks.com/help/pdf_doc/matlab/matfile_format.pdf) files, used for reading Simulink-related data structures, is provided through [matio](https://github.com/tbeu/matio), which itself requires the HDF5 library. Additionally, for serializing SLX files into standard `.h5` data files, SLXIO depends on the HDF5 library. If the library is not found, it is automatically fetched and built via CPM. However, it is recommended to use a prebuilt binary, as this significantly reduces the build and compilation time.

### 3.2 Building Slxio

Building the library from source can be time‑consuming depending on your system configuration and setup.
For a quicker installation, we recommend using the binary distribution for each platform

#### 3.2.1 Quick Build Guide

```shell
mkdir build && cd build
cmake -G "MinGW Makefiles" ..
cmake --build .
cmake --install .
```
#### 3.2.2 Configure Options

| Option               | Description                                                       | Default | Supported Since |
|----------------------|-------------------------------------------------------------------|---------|-----------------|
| BUILD_SHARED_LIBS    | Build as shared libraries                                         | OFF     |                 |
| ENABLE_PYTHON_BINDING| Enable building Python interface                                  | ON      |                 |
| ENABLE_TESTING       | Build C++ unit tests                                              | ON      | [0.1.0](https://github.com/wissem01chiha/slxio/releases) |
| ENABLE_BINDING_TEST  | Build binding interface tests                                     | ON      |                 |
| ENABLE_NAMESPACE     | Enable global namespace                                           | TRUE    |                 |
| ENABLE_ABI_NAMESPACE | Enable ABI namespace (requires ENABLE_NAMESPACE=ON)               | ON      |                 |
| USE_LOCAL_LIBS       | Use locally installed libraries                                   | ON      |                 |
| ENABLE_OPENMP        | Enable compiling with OpenMP support                              | ON      | [0.1.0](https://github.com/wissem01chiha/slxio/releases) |
| ENABLE_AVX           | Enable AVX optimizations where available                          | ON      |                 |
| ENABLE_HDF5          | Enable HDF5 support                                               | ON      | [0.1.0](https://github.com/wissem01chiha/slxio/releases) |
| ENABLE_MATLAB        | Enable MATLAB support                                             | OFF     |                 |
| ENABLE_PKGCONFIG     | Generate pkg-config file                                          | ON      |                 |
| ENABLE_INSTALL       | Enable installation after build                                   | OFF     |                 |
| ENABLE_SANITIZER     | Enable sanitizers (ASan/UBSan/etc.)                               | OFF     |                 |
| ENABLE_CLANG_TIDY    | Enable static analysis with clang-tidy                            | OFF     |                 |
| ENABLE_CPPCHECK      | Enable static analysis with cppcheck                              | ON      |                 |
| ENABLE_CLANG_FORMAT  | Enable Clang-Format support mode                                  | ON      |                 |
| ENABLE_COVERAGE      | Enable code coverage reporting (GCC/Clang)                        | OFF     |                 |
| ENABLE_FUZZING       | Enable fuzzing support                                            | OFF     |                 |
| ENABLE_DOCUMENTATION | Enable documentation generation                                   | OFF     | [0.1.0](https://github.com/wissem01chiha/slxio/releases) |
| BUILD_EXAMPLES       | Build example applications                                        | OFF     | [0.1.0](https://github.com/wissem01chiha/slxio/releases) |
| CMAKE_INSTALL_PREFIX | Default install path                                              | `${CMAKE_BINARY_DIR}/install` | [0.1.0](https://github.com/wissem01chiha/slxio/releases) |

