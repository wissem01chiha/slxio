<p align="center">
  <img src="Documentation/Doxygen/logo/logo.png" alt="Project Logo" style="width:70%; height:auto;">
</p>

[![Windows](https://github.com/wissem01chiha/slxio/actions/workflows/windows.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/windows.yml)
[![MinGW](https://github.com/wissem01chiha/slxio/actions/workflows/mingw.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/mingw.yml)
[![Ubuntu](https://github.com/wissem01chiha/slxio/actions/workflows/ubuntu.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/ubuntu.yml)
[![MacOS](https://github.com/wissem01chiha/slxio/actions/workflows/macos.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/macos.yml)
[![Docs](https://github.com/wissem01chiha/slxio/actions/workflows/doc.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/doc.yml)
[![CodeQL](https://github.com/wissem01chiha/slxio/actions/workflows/codeql.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/codeql.yml)
[![Release](https://github.com/wissem01chiha/slxio/actions/workflows/release.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/release.yml)

<!-- omit in toc -->
## Table of Contents
- [1.0 Overview](#10-overview)
  - [1.1 Features](#11-features)
  - [1.2 Supported MATLAB](#12-supported-matlab)
    - [1.2.1 Supported Simulink Blocks](#121-supported-simulink-blocks)
    - [1.2.2 Supported MATLAB Releases](#122-supported-matlab-releases)
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
  - [3.1 Running Tests](#31-running-tests)
  - [3.2 Debugging Test Failures](#32-debugging-test-failures)
- [4.0 Examples](#40-examples)
  - [4.1 Integrating in CMake Projects](#41-integrating-in-cmake-projects)
    - [4.1.1 Using CPM](#411-using-cpm)
  - [4.1.2 Integrate using vcpckg](#412-integrate-using-vcpckg)
  - [4.1.2 Integrate using Conan](#412-integrate-using-conan)
  - [4.2 Manipulating SLX Files](#42-manipulating-slx-files)
    - [4.2.1 Reading Simulink Model MetaData](#421-reading-simulink-model-metadata)
    - [4.2.2 Access Model Block data](#422-access-model-block-data)
- [5.0 License](#50-license)

## 1.0 Overview

**slxio** is an open-source C++11 library for reading and writing [Simulink](https://www.mathworks.com/products/simulink.html) `.slx` model files.

This library is designed for use in projects that either lack access to MATLAB's libraries/runtime or prefer not to rely on them, as well as in automation workflows. It aims to provide a lightweight alternative for manipulating Simulink models using modern scripting languages such as Python, Lua, etc., via C++ bindings.

The project was originally derived from the Java-based Simulink parser of the [ConQAT]() Project. Find the original source code here:  [SimulinkLibraryForJava](https://github.com/harmanpa/SimulinkLibraryForJava).It has since been ported to C++ and refactored into a highly modular architecture.

**slxio** does not aim to support all Simulink features, but rather focuses on the most commonly used ones. The library provides a simple and intuitive API for accessing and modifying Simulink model components such as blocks, lines, parameters, and Stateflow charts, via a mimic of the MATLAB Simulink API. This makes it easy for users familiar with MATLAB to get started.

To install the prebuilt binary of the library, refer to the [Installation](installation) page and check out the latest release from the official GitHub release [page](https://github.com/wissem01chiha/slxio/releases),for building the library from source, see the same page for detailed instructions.

Examples and tutorials for beginners are hosted with the project and can be found on the [Tutorials](Tutorials) page, along with their source code. Many of the features are not yet implemented or tested. For a detailed list of features and their support status, see the [feature](#11-features) section.

The project is actively under development, and contributions are very welcome. See the [CONTRIBUTING](.github/CONTRIBUTING.md) page for more information.

>> **Note:** This project is still in an experimental phase. It is not yet ready for production use, and no stable release has been published.

### 1.1 Features


### 1.2 Supported MATLAB  

The primary supported MATLAB version is **R2019a**. Other versions later than R2019a may also be compatible, provided the Simulink XML schema has not changed significantly between releases.  

Currently, there is no official documentation from MathWorks regarding the SLX data format or XML schema rules. As a result, this project relies on reverse engineering and interpretation of actual SLX files.

To ensure compatibility when using **slxio** with other unsupported Simulink versions, we recommend exporting models to one of the supported versions before reading them. This process may require a valid MATLAB license. 
For more information, see: [Simulink Export to Version](https://www.mathworks.com/help/simulink/slref/simulink.exporttoversion.html).

#### 1.2.1 Supported Simulink Blocks

The following table lists the Simulink blocks that are currently supported for reading by **slxio**.  

> **Note:** Reading or Writing block parameter support is currently not implemented for any blocks.

| Block Name          | Supported Since | Read | Write |
|---------------------|-----------------|------|-------|
| Gain                |    0.1.0        | ✅   | ❌   |


#### 1.2.2 Supported MATLAB Releases

| MATLAB Release | Supported Since | Read | Write | C++ | Python |
|----------------|-----------------|------|-------|-----|--------|
| R2019a         | 0.1.0           | ✅   | ❌    | ✅  | ❌   |


### 1.3 Contact

You can contact the maintainer through email at [mail](mailto:chihawissem08@gmail.com)

### 1.4 Contributing

If you are interested in collaborations, see the [CONTRIBUTING](.github/CONTRIBUTING.md) guide here or contact the maintainer via email (see section [1.2](#12-contact)).


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


| Option                          | Description                                                       | Default | Supported Since |
|---------------------------------|-------------------------------------------------------------------|---------|-----------------|
| ENABLE_DOCUMENTATION            | Enable documentation generation                                   | OFF     | [0.1.0](https://github.com/wissem01chiha/slxio/releases) |
| TOP_LEVEL_BUILD                 | Enable top-level build                                            | auto    |                 |
| ENABLE_PYTHON_BINDING           | Enable building Python interface                                  | ON      |                 |
| ENABLE_CLANG_TIDY               | Enable static analysis with clang-tidy                            | OFF     |                 |
| ENABLE_CPPCHECK                 | Enable static analysis with cppcheck                              | OFF     |                 |
| ENABLE_LOGGING                  | Enable logging                                                    | ON      |                 |
| ENABLE_SANITIZER                | Enable sanitizers (ASan/UBSan/etc.)                               | OFF     |                 |
| ENABLE_FUZZING                  | Enable fuzzing support                                            | OFF     |                 |
| BUILD_SHARED_LIBS               | Build as shared libraries                                         | OFF     |                 |
| ENABLE_PKGCONFIG                | Generate pkg-config file                                          | ON      |                 |
| ENABLE_AVX                      | Enable AVX/AVX2 optimizations where available                     | ON      |                 |
| ENABLE_HDF5                     | Enable HDF5 support                                               | ON      | [0.1.0](https://github.com/wissem01chiha/slxio/releases) |
| ENABLE_OPENMP                   | Enable compiling with OpenMP support                              | ON      | [0.1.0](https://github.com/wissem01chiha/slxio/releases) |
| BUILD_EXAMPLES                  | Build example applications                                        | OFF     | [0.1.0](https://github.com/wissem01chiha/slxio/releases) |
| SLXIO_ENABLE_TESTING            | Build C++ unit tests                                              | ON      | [0.1.0](https://github.com/wissem01chiha/slxio/releases) |
| SLXIO_ENABLE_COVERAGE           | Enable code coverage reporting (GCC/Clang)                        | OFF     |                 |
| SLXIO_ENABLE_BINDING_TEST       | Build binding interface tests                                     | ON      |                 |
| ENABLE_NAMESPACE                | Enable global namespace                                           | TRUE    |                 |
| CMAKE_INSTALL_PREFIX            | Default install path                                              | `${CMAKE_BINARY_DIR}/install` | [0.1.0](https://github.com/wissem01chiha/slxio/releases) |


### 2.3 Platform & Compiler Support

| **OS**                | **Compiler** | **Version(s)**                          | **Status**             |
|------------------------|--------------|-----------------------------------------|------------------------|
| Windows 11             | MSVC         | 19.43 (Visual Studio 2022 v17.13)       | [![Windows](https://github.com/wissem01chiha/slxio/actions/workflows/windows.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/windows.yml)           |
| Windows 11             | MinGW-w64    | GCC 11.2.0 , 15.2.0                             | [![MinGW](https://github.com/wissem01chiha/slxio/actions/workflows/mingw.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/mingw.yml)        |
| Ubuntu 22.04 LTS       | GNU GCC      | 11.2.0, 13.3.0                          | [![Ubuntu](https://github.com/wissem01chiha/slxio/actions/workflows/ubuntu.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/ubuntu.yml)           |
| Ubuntu 22.04 LTS       | Clang        | 14.0, 15.0                              | N/A        |
| MacOS | Apple Clang | 14.0, 15.0                              | N/A |



## 3.0 Testing

Project tests are controlled via the CMake option `SLXIO_ENABLE_TESTING`.

### 3.1 Running Tests
To run all unit tests after building, use:

```bash
ctest -C Debug --output-on-failure
```
This will execute all project unit tests by default.


> **Note:** Code coverage is not yet supported.

### 3.2 Debugging Test Failures

If a test fails, check `Testing/Temporary/LastTest.log`,
`test/testSubDir/${testname}/${testname}.vg.out`, and other similar files.

## 4.0 Examples

### 4.1 Integrating in CMake Projects

#### 4.1.1 Using [CPM](https://github.com/cpm-cmake/CPM.cmake)

```cmake
CPMAddPackage(
  NAME slxio
  GITHUB_REPOSITORY wissem01chiha/slxio
  VERSION 0.1.0
)

add_executable(target main.cpp)
target_link_libraries(target PRIVATE SLXIO)
```

### 4.1.2 Integrate using vcpckg

> **Note:** slxio not yet available on vcpkg 

```bash
vcpkg install slxio
```

then in your CMakeLists.txt 

```cmake
find_package(slxio CONFIG REQUIRED)
add_executable(my_app main.cpp)
target_link_libraries(my_app PRIVATE slxio::slxio)
```

### 4.1.2 Integrate using [Conan](https://github.com/conan-io/conan)

> **Note:** slxio not yet available on conan package manager
> 
### 4.2 Manipulating SLX Files

#### 4.2.1 Reading Simulink Model MetaData

```cpp
#include "Slxio.h"

int main() {

    SimulinkModelParser& mdlpptr = new SimulinkModelParser();
    mdlpptr.setsetInputData("../FullBridgeAcDcConv.slx");
    if(mdlpptr.parse()== ErrorCode::Ok){

      SimulinkModel* mdl = mdlpptr.get();
    }else {
      std::throw_exception 
    }

    SimulinkModelType mdl->getModelType();
    uint32  mdlver  =  mdl->getVersion();
    const char* mdlname = mdl->getName();

    return 0;
}
```
#### 4.2.2 Access Model Block data 

```cpp
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
```

## 5.0 License

All material is provided under an Apache LLicense unless otherwise specified.

see the [`LICENSE`](./LICENSE) file.


