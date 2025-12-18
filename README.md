<p align="center">
  <img src="Documentation/Doxygen/logo/logo.png" alt="Project Logo" style="width:45%; height:auto;">
</p>

<p align="center">
  <a href="https://github.com/wissem01chiha/syslink/actions/workflows/ubuntu.yml">
    <img src="https://github.com/wissem01chiha/syslink/actions/workflows/ubuntu.yml/badge.svg?branch=develop" alt="Ubuntu Build Status"/>
  </a>
  <a href="https://github.com/wissem01chiha/syslink/actions/workflows/windows.yml">
    <img src="https://github.com/wissem01chiha/syslink/actions/workflows/windows.yml/badge.svg?branch=develop" alt="Windows Build Status"/>
  </a>
    <a href="https://github.com/wissem01chiha/syslink/actions/workflows/mingw.yml">
    <img src="https://github.com/wissem01chiha/syslink/actions/workflows/mingw.yml/badge.svg?branch=develop" alt="MinGW Build Status"/>
  </a>
  <a href="https://github.com/wissem01chiha/syslink/actions/workflows/macos.yml">
    <img src="https://github.com/wissem01chiha/syslink/actions/workflows/macos.yml/badge.svg?branch=develop" alt="MacOS Build Status"/>
  </a>
    <a href="https://github.com/wissem01chiha/syslink/actions/workflows/codeql.yml">
    <img src="https://github.com/wissem01chiha/syslink/actions/workflows/codeql.yml/badge.svg" alt="CodeQL Status"/>
  </a>
</p>

<!-- omit in toc -->
## Table of Contents
- [1.0 Introduction](#10-introduction)
  - [1.1 Features](#11-features)
  - [1.2 MATLAB Support](#12-matlab-support)
  - [1.3 Contact](#13-contact)
  - [1.4 Contributing](#14-contributing)
- [2.0 Building](#20-building)
  - [2.1 Dependencies](#21-dependencies)
    - [2.1.1 zlib](#211-zlib)
    - [2.1.1 HDF5](#211-hdf5)
  - [2.2 Building SLXIO](#22-building-slxio)
    - [2.2.1 Quick Build Guide](#221-quick-build-guide)
    - [2.2.2 Configure Options](#222-configure-options)
  - [2.3 Platform \& Compiler Support](#23-platform--compiler-support)
- [3.0 Testing](#30-testing)
- [4.0 Examples](#40-examples)
  - [4.1 Integrate in Other Porjects](#41-integrate-in-other-porjects)
  - [4.1.1 Integrate using CPM](#411-integrate-using-cpm)
  - [4.1.2 Integrate using vcpckg](#412-integrate-using-vcpckg)
  - [4.2 Reading an slx file](#42-reading-an-slx-file)
- [5.0 Developer-Notes](#50-developer-notes)
- [6.0 License](#60-license)

## 1.0 Introduction
SLXIO is an open-source C++17 library for reading and writing [Simulink](https://www.mathworks.com/products/simulink.html) `.slx` model files. 

This library is designed for use by projects that do not have access or do not want to rely on MATLAB's libraries.

This project is originally derived from the Java-based Simulink parser of the [ConQAT](https://en.wikipedia.org/wiki/ConQAT) Project ([ConQAT site](https://teamscale.com/blog/en/news/blog/conqat-end-of-life)).

### 1.1 Features

- Fast model parsing  
- Full access to read model parameters and configurations  
- Convert model metadata into a structured dataset for optimal storage of large models  
- Integrated command-line interface  
- Construct a graph-based structure from nested models  
- Enable diff and merge operations between models  
- Serialize and deserialize Simulink data to/from JSON files

### 1.2 MATLAB Support

The primary supported MATLAB version is **R2019a**. However, other versions later than R2019a may be compatible, provided the Simulink XML schema has not changed significantly between releases.

Currently, there is no official documentation from MathWorks regarding the SLX data format or XML schema rules. As a result, this project is based on reverse engineering and interpretation of actual SLX files.

To ensure compatibility when using SLXIO with other Simulink versions, we recommend exporting models to R2019a before reading them. This process may require a valid MATLAB license.

### 1.3 Contact

You can contact the maintainer through email at [mail](mailto:chihawissem08@gmail.com)

### 1.4 Contributing

If you are interested in collaborations, contact the maintainer via email (see section [1.2](#12-contact)).

## 2.0 Building

This section describes how to build slxio, see  [2.1](#21-dependencies) describes the dependencies,

### 2.1 Dependencies

SLXIO dependencies are fetched automatically during build time. If not found, 
they will be built from the bundled files included with the project. For external dependencies, SLXIO uses [CPM](https://github.com/cpm-cmake/CPM.cmake) to fetch and install them. Note that developer tools may require additional dependencies.For more information, refer to [Developer Notes](#40-developer-notes).

| Library | Version | Introduced In | Depends On | Notes |
|--------|---------|----------------|------------|-------|
| [slog](https://github.com/kala13x/slog) | Latest | [v0.1.0](https://github.com/wissem01chiha/slxio/releases) |  |  |
| [json-c](https://github.com/json-c/json-c) *(optional)* | Latest | [v0.1.0](https://github.com/wissem01chiha/slxio/releases) |  |  |
| [zlib](https://github.com/madler/zlib) | 1.2.8 | [v0.1.0](https://github.com/wissem01chiha/slxio/releases) |  |  |
| [libzip](https://github.com/nih-at/libzip) | 1.11.4 | [v0.1.0](https://github.com/wissem01chiha/slxio/releases) | [zlib](https://github.com/madler/zlib) |  |
| [libxml2](https://gitlab.gnome.org/GNOME/libxml2) | 2.14.5 | [v0.1.0](https://github.com/wissem01chiha/slxio/releases) | [zlib](https://github.com/madler/zlib) |  |
| [HDF5](https://github.com/HDFGroup/hdf5) *(optional)* | 1.14.1 | [v0.3.0](https://github.com/wissem01chiha/slxio/releases) | [zlib](https://github.com/madler/zlib), pthread |  experimental |
| [matio](https://github.com/tbeu/matio) *(optional)* | 1.5.28 | [v0.3.0](https://github.com/wissem01chiha/slxio/releases) | [zlib](https://github.com/madler/zlib), [HDF5](https://github.com/HDFGroup/hdf5) |  experimental |
| [cxxopts](https://github.com/jarro2783/cxxopts) *(optional)* | 3.3.1 | [v0.3.0](https://github.com/wissem01chiha/slxio/releases) |  | experimental |
| [googletest](https://github.com/google/googletest) *(optional)* | 1.14.0 | [v0.3.0](https://github.com/wissem01chiha/slxio/releases) |  |  |

  
#### 2.1.1 zlib

Support for compressed [SLX](), [JSON](), [MAT](), and [h5]() file formats requires the zlib library. Version 1.2.8 of zlib is bundled with the code and will be built automatically if not found by [CMake]() in the system path. Other versions are not officially supported.

#### 2.1.1 HDF5

Support for MATLAB [MAT](https://www.mathworks.com/help/pdf_doc/matlab/matfile_format.pdf) files, used for reading Simulink-related data structures, is provided through [matio](https://github.com/tbeu/matio), which itself requires the HDF5 library. Additionally, for serializing SLX files into standard `.h5` data files, SLXIO depends on the HDF5 library. If the library is not found, it is automatically fetched and built via CPM. However, it is recommended to use a prebuilt binary, as this significantly reduces the build and compilation time.

### 2.2 Building SLXIO 

Building the library from source can be time‑consuming depending on your system configuration and setup.
For a quicker installation, we recommend using the binary distribution for each platform

#### 2.2.1 Quick Build Guide

```shell
mkdir build && cd build
cmake -G "MinGW Makefiles" ..
cmake --build .
cmake --install .
```
#### 2.2.2 Configure Options

| Option                        | Description                                                       | Default | Supported Since |
|------------------------------|-------------------------------------------------------------------|---------|-----------------|
| SLXIO_OPENMP                 | Enable compiling with OpenMP support                              | TRUE    | [0.1.0](https://github.com/wissem01chiha/slxio/releases)           |
| SLXIO_AVX                 | Enable compiling with AVX/AVX2 support                              | TRUE    |  |
| SLXIO_HDF5                   | Enable HDF5 support                                               | FALSE   | [0.1.0](https://github.com/wissem01chiha/slxio/releases)           |
| SLXIO_BUILD_TESTS            | Enable building C++ unit tests                                    | FALSE   | [0.1.0](https://github.com/wissem01chiha/slxio/releases)           |
| SLXIO_BUILD_DOCS             | Enable documentation generation                                   | FALSE   | [0.1.0](https://github.com/wissem01chiha/slxio/releases)           |
| SLXIO_BUILD_EXAMPLES         | Enable building example programs                                  | FALSE   | [0.1.0](https://github.com/wissem01chiha/slxio/releases)           |
| SLXIO_JSON                   | Enable building C++ tool scripts with JSON support                | FALSE   |       |
| SLXIO_SIMPLE_BUILD           | Build the project as minimally as possible                        | FALSE   |       |
| SLXIO_ONLY_COVERAGE          | Build only tests necessary for coverage                           | FALSE   |       |
| SLXIO_LIBCPP                 | Build with libc++                                                 | FALSE   |       |
| SLXIO_ENABLE_COVERAGE        | Enable coverage reporting for GCC/Clang                           | FALSE   |       |
| SLXIO_ENABLE_ASAN            | Enable address sanitizer                                          | FALSE   |       |
| SLXIO_BUILD_SHARED_LIBS      | Enable compilation of shared libraries                            | FALSE   |       |
| SLXIO_ENABLE_CLANG_TIDY      | Enable static analysis with clang-tidy                            | FALSE   |       |
| SLXIO_ENABLE_CPPCHECK        | Enable static analysis with cppcheck                              | FALSE   |       |
| SLXIO_FORCE_COLORED_OUTPUT   | Always produce ANSI-colored output (GNU/Clang only)               | TRUE    |       |
| SLXIO_DEBUG_LOGGING          | Enable debug logging                                              | TRUE    |       |
| CMAKE_INSTALL_PREFIX         | Default install path                                              | `${CMAKE_BINARY_DIR}/install` | [0.1.0](https://github.com/wissem01chiha/slxio/releases)           |


### 2.3 Platform & Compiler Support


| **OS**     | **Compiler** | **Version**                          |
|--------------------------|--------------|----------------------------------------|
| Windows 11               | MSVC         | 19.43 (Visual Studio 2022 v17.13)      |
| Ubuntu 22.04 LTS         | GNU GCC      | 11.2.0, 13.3.0                          |
| macOS *(unsupported)*    | —            | May encounter build errors             |



## 3.0 Testing 

If a test fails, check `Testing/Temporary/LastTest.log`,
`test/testSubDir/${testname}/${testname}.vg.out`, and other similar files.

## 4.0 Examples

### 4.1 Integrate in Other Porjects 
### 4.1.1 Integrate using CPM 
### 4.1.2 Integrate using vcpckg



### 4.2 Reading an slx file
```cpp
#include "SLXIO.h"

int main() {
    slxio::SLXModel model = slxio::read("example_model.slx");

    std::cout << "Version: " << model.version() << std::endl;
    std::cout << "Name: " << model.name() << std::endl;

    for (const auto& block : model.blocks()) {
        std::cout << block.name() << " [" << block.type() << "] at "
                  << block.position().x() << "," << block.position().y() << std::endl;
    }

    for (const auto& chart : model.stateflow().charts()) {
        std::cout << "Chart: " << chart.name() << std::endl;
        for (const auto& t : chart.transitions()) {
            std::cout << "  " << t.source() << " -> " << t.target()
                      << " if \"" << t.condition() << "\"" << std::endl;
        }
    }

    return 0;
}
```


## 5.0 Developer-Notes

see [dev-notes](docs/_pages/developers.md) for more information.

## 6.0 License

All material is provided under an Apache LLicense unless otherwise specified.

see the [`LICENSE`](./LICENSE) file.


