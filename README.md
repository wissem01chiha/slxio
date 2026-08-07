# SLXIO

SLXIO – SIMULINK SLX File I/O Library

## Status

[![Windows](https://github.com/wissem01chiha/slxio/actions/workflows/windows.yml/badge.svg?branch=master)](https://github.com/wissem01chiha/slxio/actions/workflows/windows.yml)
[![MinGW](https://github.com/wissem01chiha/slxio/actions/workflows/mingw.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/mingw.yml)
[![Ubuntu](https://github.com/wissem01chiha/slxio/actions/workflows/ubuntu.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/ubuntu.yml)
[![MacOS](https://github.com/wissem01chiha/slxio/actions/workflows/macos.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/macos.yml)
[![Documentation](https://github.com/wissem01chiha/slxio/actions/workflows/documentation.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/documentation.yml)
[![CodeQL](https://github.com/wissem01chiha/slxio/actions/workflows/codeql.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/codeql.yml)
[![Build status](https://ci.appveyor.com/api/projects/status/40jlbucsjjxehn76?svg=true)](https://ci.appveyor.com/project/wissem01chiha/slxio)
![GitHub License](https://img.shields.io/github/license/wissem01chiha/slxio)
[![Release](https://github.com/wissem01chiha/slxio/actions/workflows/release.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/release.yml)
![Coveralls](https://img.shields.io/coverallsCoverage/github/wissem01/slxio)
[![CodeFactor](https://www.codefactor.io/repository/github/wissem01chiha/slxio/badge/master)](https://www.codefactor.io/repository/github/wissem01chiha/slxio/overview/master)
[![pre-commit.ci status](https://results.pre-commit.ci/badge/github/wissem01chiha/slxio/master.svg)](https://results.pre-commit.ci/latest/github/wissem01chiha/slxio/master)

<!-- omit in toc -->
## Table of Contents
- [SLXIO](#slxio)
  - [Status](#status)
  - [1.0 Overview](#10-overview)
    - [1.1 Features](#11-features)
    - [1.2 Supported MATLAB](#12-supported-matlab)
      - [1.2.1 MATLAB Regression Testing Matrix](#121-matlab-regression-testing-matrix)
    - [1.3 Contact](#13-contact)
    - [1.4 Contributing](#14-contributing)
    - [2.0 Installation](#20-installation)
      - [2.1 Binary Release](#21-binary-release)
      - [2.2 vcpkg](#22-vcpkg)
      - [2.3 Conan Recipe](#23-conan-recipe)
  - [3.0 Building from Source](#30-building-from-source)
    - [3.1 Dependencies](#31-dependencies)
      - [3.1.1 zlib](#311-zlib)
      - [3.1.1 HDF5](#311-hdf5)
    - [3.2 Building Slxio](#32-building-slxio)
      - [3.2.1 Quick Build Guide](#321-quick-build-guide)
      - [3.2.2 Configure Options](#322-configure-options)
    - [3.3 Platform Support](#33-platform-support)
  - [4.0 Testing](#40-testing)
    - [4.1 Running Tests](#41-running-tests)
    - [4.2 Debugging Test Failures](#42-debugging-test-failures)
  - [5.0 Use in Other Projects](#50-use-in-other-projects)
  - [6.0 API Documentation](#60-api-documentation)
  - [7.0 References](#70-references)
  - [8.0 License](#80-license)

## 1.0 Overview

**Slxio** is an open‑source C++14 library for reading, writing, visualizing, and exporting [Simulink](https://www.mathworks.com/products/simulink.html) `.slx` model files.

The project is designed as a lightweight alternative to MATLAB’s proprietary libraries and runtime, similar in spirit to the [matio](https://github.com/tbeu/matio) library for `.mat` files. Its goal is to make Simulink models accessible outside the MATLAB ecosystem, enabling manipulation and integration through modern scripting languages such as Python, Java, and others via C++ bindings.

The project was originally derived from the Java-based Simulink parser of the [ConQAT](https://en.wikipedia.org/wiki/ConQAT) Project. Find the original source code here   [SimulinkLibraryForJava](https://github.com/harmanpa/SimulinkLibraryForJava). It has since been ported to C++ and refactored into a highly modular architecture.

**Slxio** does not aim to support all Simulink features, but rather focuses on the most commonly used ones. The library provides a simple and intuitive API for accessing and modifying Simulink model components such as blocks, lines, parameters, and Stateflow charts, via a mimic of the MATLAB Simulink API. This makes it easy for users familiar with MATLAB to get started.

To install the prebuilt binary of the library, refer to the [Installation](#20-building) section and check out the latest release from the official GitHub release [page](https://github.com/wissem01chiha/slxio/releases),for building the library from source, see the same page for detailed instructions.

Examples and tutorials for beginners are hosted with the project and can be found on the [Tutorials](Tutorials) page, along with their source code. Many of the features are not yet implemented or tested. For a detailed list of features and their support status, see the [feature](#11-features) section.

The project is under active development, and contributions are highly encouraged. See the [Contributing](.github/CONTRIBUTING.md) guide for basics on Git, CMake, C++, and workflow, and the [Development](/Development/README.md) guide for quick-start instructions and advanced details.

> [!NOTE]
>  This project is still in an experimental phase. It is not yet ready for production use, and no stable release has been published.


### 1.1 Features

- Read [Simulink](https://www.mathworks.com/products/simulink.html) internal block‑diagram files into native C++ data structures.
- Export model hierarchies into [JSON](https://www.json.org/json-en.html), [HDF5](https://www.hdfgroup.org/solutions/hdf5/), or [Graphviz](https://graphviz.org/)‑compatible formats.
- Edit metadata and parameters, then save changes back into `.slx` files. This feature may be delayed because Simulink files follow the [Opc Convention]() and the archive layout changes between versions. We currently maintain the [libopc](https://github.com/wissem01chiha/libopc) project to provide a portable, cross‑version abstraction for editing.
- Perform static analysis on Simulink models and generate reports in [PDF](https://en.wikipedia.org/wiki/PDF) or [HTML](https://www.geeksforgeeks.org/html/html-web-page-format/).
- Visualize Simulink models interactively. For now, only the [Qt](https://www.qt.io/) backend is supported. Other 2D graphing engines or tools are open for discussion — please feel free to start one [here](https://github.com/wissem01chiha/slxio/discussions).

### 1.2 Supported MATLAB

**Slxio** aims to support MATLAB releases from R2018a to R2025a. Currently, the primary supported versions are R2019a and R2018a. Additional versions will be progressively supported in future project releases.

> [!NOTE]
> Some new features introduced in the graphical interface (e.g., layout, formatting, annotations) by [MathWorks](https://www.mathworks.com/) may not be available, as the project focuses on core model/library block diagram data.

[*.mdl](https://amazingalgorithms.com/file-extensions/mdl/) files are out of scope, for certain specific releases they may be partially compatible, but no support or fixes are planned for mdl file compatibility.

At present, there is no official documentation from MathWorks regarding the slx data format or XML schema rules. As a result, this project relies on reverse engineering and interpretation of actual compressed slx files.

To ensure compatibility when using slxio with unsupported Simulink versions, we recommend exporting models to one of the supported versions before reading them. This process may require a valid MATLAB license.
For more information, see: [Simulink Export to Version](https://www.mathworks.com/help/simulink/slref/simulink.exporttoversion.html).

#### 1.2.1 MATLAB Regression Testing Matrix

| Release | Status | Comment | Release Notes                                                                                                                             |
|---------|--------|--------|--------------------------------------------------------------------------------------------------------------------------------------------|
| R2018a  |        |        | [Release Notes](https://www.mathworks.com/content/dam/mathworks/mathworks-dot-com/support/updates/r2018a/r2018a-update-2-release-notes.pdf)|
| R2018b  |        |        | [Release Notes](https://www.mathworks.com/content/dam/mathworks/mathworks-dot-com/support/updates/r2018b/r2018b-updates-release-notes.pdf) |
| R2019a  |        |        | [Release Notes](https://www.mathworks.com/content/dam/mathworks/mathworks-dot-com/support/updates/r2019a/r2019a-updates-release-notes.pdf) |
| R2019b  |        |        | [Release Notes](https://www.mathworks.com/content/dam/mathworks/mathworks-dot-com/support/updates/r2019b/r2019b-updates-release-notes.pdf) |
| R2020a  |        |        | [Release Notes](https://www.mathworks.com/content/dam/mathworks/mathworks-dot-com/support/updates/r2020a/r2020a-updates-release-notes.pdf) |
| R2020b  |        |        | [Release Notes](https://www.mathworks.com/content/dam/mathworks/mathworks-dot-com/support/updates/r2020b/r2020b-updates-release-notes.pdf) |
| R2021a  |        |        | [Release Notes](https://www.mathworks.com/content/dam/mathworks/mathworks-dot-com/support/updates/r2021a/r2021a-updates-release-notes.pdf) |
| R2021b  |        |        | [Release Notes](https://www.mathworks.com/content/dam/mathworks/mathworks-dot-com/support/updates/r2021b/r2021b-updates-release-notes.pdf) |
| R2022a  |        |        | [Release Notes](https://www.mathworks.com/content/dam/mathworks/mathworks-dot-com/support/updates/r2022a/r2022a-updates-release-notes.pdf) |
| R2022b  |        |        | [Release Notes](https://www.mathworks.com/content/dam/mathworks/mathworks-dot-com/support/updates/r2022b/r2022b-updates-release-notes.pdf) |
| R2023a  |        |        | [Release Notes](https://www.mathworks.com/content/dam/mathworks/mathworks-dot-com/support/updates/r2023a/r2023a-updates-release-notes.pdf) |
| R2023b  |        |        | [Release Notes](https://www.mathworks.com/content/dam/mathworks/mathworks-dot-com/support/updates/r2023b/r2023b-updates-release-notes.pdf) |
| R2024a  |        |        | [Release Notes](https://www.mathworks.com/content/dam/mathworks/mathworks-dot-com/support/updates/r2024a/r2024a-updates-release-notes.pdf) |
| R2024b  |        |        | [Release Notes](https://www.mathworks.com/matlabcentral/discussions/uploaded_files/35746/Whats_New_In_MATLAB_R2024b%202.pdf)               |
| R2025a  |        |        | [Release Notes](https://www.mathworks.com/help/matlab/release-notes.html?startrelease=R2025a&endrelease=R2025b&rntext=&groupby=release&sortby=descending&searchHighlight=) |
| R2025b  |        |        | [Release Notes](https://www.mathworks.com/help/matlab/release-notes.html?startrelease=R2025a&endrelease=R2025b&rntext=&groupby=release&sortby=descending&searchHighlight=) |

### 1.3 Contact

Feel free to  contact the maintainer through email at [mail](mailto:chihawissem08@gmail.com)

### 1.4 Contributing

If you are interested in collaborating, please see the [CONTRIBUTING](.github/CONTRIBUTING.md) guide or contact the maintainer via email (see section [1.2](#12-contact)).
Due to time constraints, responses and pull request reviews may be delayed. Thank you for your understanding.

### 2.0 Installation

#### 2.1 Binary Release

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



### 3.3 Platform Support

| OS          | Compiler    | Version              | Arch              |  Status |
|-------------|-------------|----------------------|-------------------|--------|
| Windows 11  | MSVC        | 19.1x                | x64, Win32        |  NA     |
| Windows 11  | MSVC        | 19.2x                | x64, Win32, ARM64 |  NA     |
| Windows 11  | MSVC        | 19.43                | x64, Win32, ARM64 |  [![Windows](https://github.com/wissem01chiha/slxio/actions/workflows/windows.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/windows.yml) |
| Windows 11  | MSVC        | 19.50                | x64, ARM64        |  NA     |
| Windows 11  | MinGW‑w64   | GCC 11.2.0, 15.2.0   | x64               |  [![MinGW](https://github.com/wissem01chiha/slxio/actions/workflows/mingw.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/mingw.yml) | NA |
| Ubuntu 22.04| GCC         | 11.2.0, 13.3.0       | x64               |  [![Ubuntu](https://github.com/wissem01chiha/slxio/actions/workflows/ubuntu.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/ubuntu.yml) |
| Ubuntu 22.04| Clang       | 14.0, 15.0           | x64               | NA     |
| macOS 14    | Apple Clang | 14.0, 15.0           | arm64, x64        |  [![MacOS](https://github.com/wissem01chiha/slxio/actions/workflows/macos.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/macos.yml)     |



## 4.0 Testing

Slxio has moved from [GoogleTest](https://github.com/google/googletest) to the [doctest](https://github.com/doctest/doctest) framework for lightweight and efficient testing since version 0.1.0.
Testing is enabled via the CMake option `ENABLE_TESTING`.


### 4.1 Running Tests
To run all unit tests after building, use:

```bash
ctest -C Debug --output-on-failure
```
This will execute all project unit tests by default.


> **Note:** Code coverage is not yet supported.

### 4.2 Debugging Test Failures

If a test fails, check `Testing/Temporary/LastTest.log`,
`test/testSubDir/${testname}/${testname}.vg.out`, and other similar files.

## 5.0 Use in Other Projects

Currently, the only supported build system is CMake. Other build systems are not planned at the moment, though they may be considered in future discussions.
Below are several ways to integrate `slxio` into your project:

- 1. Using FetchContent (built-in CMake module)

The simplest way is to use CMake’s built-in [`FetchContent`](https://cmake.org/cmake/help/latest/module/FetchContent.html) to add `slxio` as an external dependency.
This will automatically download, configure, and build the library alongside your application.

  ```cmake
  include(FetchContent)

  FetchContent_Declare(
    slxio
    GIT_REPOSITORY https://github.com/wissem01chiha/slxio.git
    GIT_TAG master
  )
  FetchContent_MakeAvailable(slxio)

  add_executable(app main.cpp)
  target_link_libraries(app PRIVATE SLXIO::SLXIO)
  ```
- 2. Using CPM.cmake (CMake Package Manager)

  If you prefer a package manager approach, you can use [CPM.cmake]() to fetch and integrate slxio

 ```cmake
  CPMAddPackage(
    NAME slxio
    GITHUB_REPOSITORY wissem01chiha/slxio
    VERSION 0.1.0
  )

  add_executable(app main.cpp)
  target_link_libraries(app PRIVATE SLXIO::SLXIO)
  ```

- 3. Using ExternalProject

For more control, you can use  [ExternalProject](https://cmake.org/cmake/help/latest/module/ExternalProject.html)  to build slxio separately and then link it:

  ```cmake
  include(ExternalProject)

  ExternalProject_Add(
    slxio
    GIT_REPOSITORY https://github.com/wissem01chiha/slxio.git
    GIT_TAG master
    UPDATE_DISCONNECTED 1
    PREFIX ${CMAKE_BINARY_DIR}/slxio
    INSTALL_COMMAND ""
  )

  add_executable(app main.cpp)
  add_dependencies(app slxio)
  target_link_libraries(app PRIVATE SLXIO::SLXIO)
  ```

- 4. Using find_package

Once slxio provides proper CMake configuration files, you’ll be able to integrate it like any other modern CMake package:

  ```cmake
  find_package(slxio CONFIG REQUIRED)

  add_executable(app main.cpp)
  target_link_libraries(app PRIVATE SLXIO::SLXIO)
  ```

## 6.0 API Documentation

Since version 0.1.0, Slxio has used [Sphinx](https://www.sphinx-doc.org/en/master/index.html) for documentation.
However, for detailed implementation documentation, Slxio includes integrated support for [Doxygen](https://www.doxygen.nl/index.html), which can be enabled via the `ENABLE_DOCUMENTATION` cmake option.


## 7.0 References

> Shrestha, S. L., Chowdhury, S. A., & Csallner, C. (2022).
> *SLNET: A Redistributable Corpus of 3rd-party Simulink Models (v2.0)*.
> Zenodo. https://doi.org/10.5281/zenodo.5259648


## 8.0 License

All material is provided under an Apache License unless otherwise specified.

see the [`LICENSE`](./LICENSE) file for more details
