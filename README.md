# SLXIO

SLXIO – SIMULINK SLX File I/O Library

## Status

[![Windows](https://github.com/wissem01chiha/SLXIO/actions/workflows/windows.yml/badge.svg?branch=master)](https://github.com/wissem01chiha/SLXIO/actions/workflows/windows.yml)
[![MinGW](https://github.com/wissem01chiha/SLXIO/actions/workflows/mingw.yml/badge.svg)](https://github.com/wissem01chiha/SLXIO/actions/workflows/mingw.yml)
[![Ubuntu](https://github.com/wissem01chiha/SLXIO/actions/workflows/ubuntu.yml/badge.svg)](https://github.com/wissem01chiha/SLXIO/actions/workflows/ubuntu.yml)
[![MacOS](https://github.com/wissem01chiha/SLXIO/actions/workflows/macos.yml/badge.svg)](https://github.com/wissem01chiha/SLXIO/actions/workflows/macos.yml)
[![Documentation](https://github.com/wissem01chiha/SLXIO/actions/workflows/documentation.yml/badge.svg)](https://github.com/wissem01chiha/SLXIO/actions/workflows/documentation.yml)
[![CodeQL](https://github.com/wissem01chiha/SLXIO/actions/workflows/codeql.yml/badge.svg)](https://github.com/wissem01chiha/SLXIO/actions/workflows/codeql.yml)
[![Build status](https://ci.appveyor.com/api/projects/status/40jlbucsjjxehn76?svg=true)](https://ci.appveyor.com/project/wissem01chiha/SLXIO)
[![Sanitizer](https://github.com/wissem01chiha/SLXIO/actions/workflows/sanitizer.yml/badge.svg?branch=develop)](https://github.com/wissem01chiha/SLXIO/actions/workflows/sanitizer.yml)
![GitHub License](https://img.shields.io/github/license/wissem01chiha/SLXIO)
[![Release](https://github.com/wissem01chiha/SLXIO/actions/workflows/release.yml/badge.svg)](https://github.com/wissem01chiha/SLXIO/actions/workflows/release.yml)
[![codecov](https://codecov.io/gh/wissem01chiha/SLXIO/graph/badge.svg?token=EBZSHLWF78)](https://codecov.io/gh/wissem01chiha/SLXIO)
[![CodeFactor](https://www.codefactor.io/repository/github/wissem01chiha/SLXIO/badge/master)](https://www.codefactor.io/repository/github/wissem01chiha/SLXIO/overview/master)
[![Codacy Badge](https://app.codacy.com/project/badge/Grade/e91d3a5f2f39464bb6dcf2d6b582541b)](https://app.codacy.com/gh/wissem01chiha/SLXIO/dashboard?utm_source=gh&utm_medium=referral&utm_content=&utm_campaign=Badge_grade)
[![pre-commit.ci status](https://results.pre-commit.ci/badge/github/wissem01chiha/SLXIO/master.svg)](https://results.pre-commit.ci/latest/github/wissem01chiha/SLXIO/master)
[![SonarQube](https://github.com/wissem01chiha/slxio/actions/workflows/sonar-qube.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/sonar-qube.yml)
[![Bugs](https://sonarcloud.io/api/project_badges/measure?project=wissem01chiha_slxio&metric=bugs)](https://sonarcloud.io/summary/new_code?id=wissem01chiha_slxio)
[![Quality gate status](https://sonarcloud.io/api/project_badges/measure?project=wissem01chiha_slxio&metric=alert_status)](https://sonarcloud.io/summary/new_code?id=wissem01chiha_slxio)

<!-- omit in toc -->
## Table of Contents
- [SLXIO](#SLXIO)
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
    - [3.2 Building SLXIO](#32-building-SLXIO)
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

SLXIO is an open‑source C++14 library for reading, writing, visualizing, and exporting [Simulink](https://www.mathworks.com/products/simulink.html) `.slx` model files.

The project is designed as a lightweight alternative to MATLAB’s proprietary libraries and runtime, similar in spirit to the [matio](https://github.com/tbeu/matio) library for `.mat` files. Its goal is to make Simulink models accessible outside the MATLAB ecosystem, enabling manipulation and integration through modern scripting languages such as Python, Java, and others via C++ bindings.

The project was originally derived from the Java-based Simulink parser of the [ConQAT](https://en.wikipedia.org/wiki/ConQAT) Project. Find the original source code here   [SimulinkLibraryForJava](https://github.com/harmanpa/SimulinkLibraryForJava). It has since been ported to C++ and refactored into a highly modular architecture.

SLXIO does not aim to support all Simulink features, at least at the current time where we are writing these lines, but rather focuses on the most commonly used ones. The library provides a simple and intuitive API for accessing and modifying Simulink model components such as blocks, lines, parameters, and Stateflow charts, via a mimic of the MATLAB Simulink API. This makes it easy for users familiar with MATLAB to get started.

To install the prebuilt binary of the library, refer to the [Installation](#20-building) section and check out the latest release from the official GitHub release [page](https://github.com/wissem01chiha/SLXIO/releases),for building the library from source, see the same page for detailed instructions.

Examples and tutorials for beginners are hosted with the project and can be found on the [Tutorials](Tutorials) page, along with their source code. Many of the features are not yet implemented or tested. For a detailed list of features and their support status, see the [feature](#11-features) section.

The project is under active development, and contributions are highly encouraged. See the [Contributing](.github/CONTRIBUTING.md) guide for basics on Git, CMake, C++, and workflow, and the [Development](/Development/README.md) guide for quick-start instructions and advanced details.

> [!NOTE]
>  This project is still in an experimental phase. It is not yet ready for production use, and no stable release has been published, The API may change frequently. 


### 1.1 Features

- Read [Simulink](https://www.mathworks.com/products/simulink.html) internal block‑diagram files into native C++ data structures.
- Export model hierarchies into [JSON](https://www.json.org/json-en.html), [HDF5](https://www.hdfgroup.org/solutions/hdf5/), or [Graphviz](https://graphviz.org/)‑compatible formats.
- Edit metadata and parameters, then save changes back into `.slx` files. This feature may be delayed because Simulink files follow the [Opc Convention](https://en.wikipedia.org/wiki/Open_Packaging_Conventions) and the archive layout changes between versions. We currently maintain the [libopc](https://github.com/wissem01chiha/libopc) project to provide a portable, cross‑version abstraction for editing.
- Perform static analysis on Simulink models and generate reports in [PDF](https://en.wikipedia.org/wiki/PDF) or [HTML](https://www.geeksforgeeks.org/html/html-web-page-format/).
- Visualize Simulink models interactively. For now, only the [Qt](https://www.qt.io/) backend is supported. Other 2D graphing engines or tools are open for discussion — please feel free to start one [here](https://github.com/wissem01chiha/SLXIO/discussions).

### 1.2 Supported MATLAB

SLXIO aims to support MATLAB releases from R2018a to R2025a. Currently, the primary supported versions are R2019a and R2018a. Additional versions will be progressively supported in future project releases.

> [!NOTE]
> Some new features introduced in the graphical interface (e.g., layout, formatting, annotations) by [MathWorks](https://www.mathworks.com/) may not be available, as the project focuses on core model/library block diagram data.

[*.mdl](https://amazingalgorithms.com/file-extensions/mdl/) files are out of scope, for certain specific releases they may be partially compatible, but no support or fixes are planned for mdl file compatibility.

At present, there is no official documentation from MathWorks regarding the slx data format or XML schema rules. As a result, this project relies on reverse engineering and interpretation of actual compressed slx files.

To ensure compatibility when using SLXIO with unsupported Simulink versions, we recommend exporting models to one of the supported versions before reading them. This process may require a valid MATLAB license.
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

If you are interested in collaborating, please see the [CONTRIBUTING](CONTRIBUTING.md) guide or contact the maintainer via email (see section [1.2](#12-contact)). Due to time constraints, responses and pull request reviews may be delayed. Thank you for your understanding.

### 2.0 Installation

#### 2.1 Binary Release

The easiest way to install is to visit the [Releases page](https://github.com/wissem01chiha/SLXIO/releases) and download the latest release for your platform, 

#### 2.2 vcpkg

> [!NOTE]
> `SLXIO` is not yet available on [vcpkg](https://github.com/microsoft/vcpkg), once it is published, you will be able to install it using:
>
> ```bash
> vcpkg install SLXIO
> ```

#### 2.3 Conan Recipe

See [Conan](https://github.com/conan-io/conan).

> [!NOTE]
> `SLXIO` is not yet available on the Conan package manager, once it is published, you will be able to add it to your project using a Conan recipe.


## 3.0 Building from Source

This section describes how to build SLXIO, see  [2.1](#21-dependencies) describes the dependencies,

### 3.1 Dependencies

Currently, the only supported build system is CMake. Other build systems are not planned at the moment, though they may be considered in future discussions.

All core dependencies are vendored with the source code in the [ThirdParty](./ThirdParty/) directory to maximize platform compatibility and reduce reliance on external build or fetch rules. However, large third-party modules, SDKs, and frameworks are not vendored, as doing so would significantly increase repository size and build times. Instead, these dependencies default to system-wide installations when available. If a required dependency is not found, the corresponding features are automatically disabled or skipped during the build process.


| Library       | Version| Required | Available Since | Depends On | Notes |
|---------------|--------|----------|----------|------|----------|
| json-c        | Latest | Core     | v0.1.0   | -    |          |
| zlib          | Latest | Core     | v0.1.0   | -    |          |
| libzip        | Latest | Core     | v0.1.0   | zlib |          |
| libxml2       | Latest | Core     | v0.1.0   | -    |          |
| cxxopts       | Latest | Optional | v0.3.0   | -    |          |
| doctest       | Latest | Devel    | v0.3.0   | -    |          |
| libuv         | Latest | Optional | v0.3.0   | -    |          |
| expat         | Latest | Optional |       | -    |          |
| fast_float    | Latest | Core     |       | -    |          |
| fmi-library   | Latest | Optional |       | libxml2, zlib | |
| libtex        | Latest | Optional |       | -    |          |
| libxlsxwriter | Latest | Optional |       | zlib |          |
| loguru        | Latest | Optional |       | -    |          |
| matio         | Latest | Optional | v0.3.0   | zlib |          |
| npio          | Latest | Optional |       | -    |          |
| pybind11      | Latest | Optional |       | Python |        |
| rapidcsv      | Latest | Optional |       | -    | |
| spdlog        | Latest | Core     |       | -    | |

#### 3.1.1 zlib

Support for compressed [SLX](), [JSON](), [MAT](), and [h5]() file formats requires the zlib library. Version 1.2.8 of zlib is bundled with the code and will be built automatically if not found by [CMake]() in the system path. Other versions are not officially supported.

#### 3.1.1 HDF5

Support for MATLAB [MAT](https://www.mathworks.com/help/pdf_doc/matlab/matfile_format.pdf) files, used for reading Simulink-related data structures, is provided through [matio](https://github.com/tbeu/matio), which itself requires the HDF5 library. Additionally, for serializing SLX files into standard `.h5` data files, SLXIO depends on the HDF5 library. If the library is not found, it is automatically fetched and built via CPM. However, it is recommended to use a prebuilt binary, as this significantly reduces the build and compilation time.

### 3.2 Building SLXIO

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

| Option                          | Description                                                                 | Default | Supported Since |
|---------------------------------|-----------------------------------------------------------------------------|---------|-----------------|
| SLXIO_BUILD_SHARED_LIBS         | Build SLXIO as shared libraries                                             | OFF     |                 |
| SLXIO_64BIT_IDENTIFIERS         | Enable 64‑bit identifiers (`std::uint64_t`)                                 | ON      |                 |
| SLXIO_BUILD_TESTING             | Enable unit and integration testing                                         | ON      |                 |
| SLXIO_ENABLE_TESTING_COVERAGE   | Enable coverage reports when testing is ON                                  | ON      |                 |
| SLXIO_BUILD_FUZZ_TESTING        |  Enable build fuzzy tests                                                   | OFF     |                 |
| SLXIO_BUILD_EXAMPLES            | Compile example scripts                                                     | OFF     |                 |
| SLXIO_SIMULINK_DEFAULT_VERSION  | Default Simulink version (auto‑detected if installed)                       | R2018b  |                 |
| SLXIO_WITH_INTERACTION          | Build utilities like console applications                                   | ON      |                 |
| SLXIO_BUILD_PYTHON_BINDINGS     | Enable Python bindings                                                      | OFF     |                 |
| SLXIO_BUILD_JAVA_BINDINGS       | Enable Java bindings                                                        | OFF     |                 |
| SLXIO_FORCE_LOCAL_MODULES       | Use only vendored third_party modules                                       | ON      |                 |
| SLXIO_USE_SYSTEM_MODULES        | Use system‑wide installed modules when found                                | OFF     |                 |
| SLXIO_DISABLE_VENDORED_MODULES  | Disable vendored third_party modules                                        | OFF     |                 |
| SLXIO_INTSALL_THIRDPARTY_LISENCES | Install vendored third_party module licenses                              | ON      |                 |
| SLXIO_BUILD_THIRDPARTY_TESTING  | Build third‑party module regression tests (requires testing enabled)        | OFF     |                 |
| SLXIO_BUILD_THIRDPARTY_TOOLS    | Build third‑party module extra tools or scripts                             | OFF     |                 |
| SLXIO_SLDD                      | Enable Simulink Data Dictionary (`*.sldd`) support                          | ON      |                 |
| SLXIO_MAT                       | Enable MATLAB MAT file support                                              | OFF     |                 |
| SLXIO_NPY                       | Enable NumPy NPY file support                                               | OFF     |                 |
| SLXIO_NPZ                       | Enable NumPy NPZ file support                                               | OFF     |                 |
| SLXIO_XLSX                      | Enable Microsoft Excel (`*.xlsx`) file support                              | OFF     |                 |
| SLXIO_WITH_HDF5                 | Enable HDF5 library support                                                 | ON      |                 |
| SLXIO_PIC                       | Enable position‑independent code (PIC)                                      | ON      |                 |
| SLXIO_WITH_VISUALIZATION        | Enable visualization modules (may require extra third‑parties)              | ON      |                 |
| SLXIO_MDL                       | Enable legacy Simulink model (`*.mdl`) support (experimental)               | OFF     |                 |
| SLXIO_INSTALL                   | Enable installation rules on target machine                                 | ON      |                 |
| SLXIO_DEFAULT_BUILD_TYPE        | Override default build type                                                 | Release |                 |
| SLXIO_WITH_PKGCONFIG            | Generate pkg‑config file during build                                       | ON      |                 |
| SLXIO_DOXYGEN_DOCUMENTATION     | Enable Doxygen documentation generation                                     | OFF     |                 |
| SLXIO_ASAN                      | Enable AddressSanitizer (ASan)                                              | OFF     |                 |
| SLXIO_MSAN                      | Enable MemorySanitizer (MSan)                                               | OFF     |                 |
| SLXIO_TSAN                      | Enable ThreadSanitizer (TSan)                                               | OFF     |                 |
| SLXIO_UBSAN                     | Enable UndefinedBehaviorSanitizer (UBSan)                                   | OFF     |                 |
| SLXIO_THIRDPARTY_MSAN           | Enable third‑party MemorySanitizer                                          | OFF     |                 |
| SLXIO_THIRDPARTY_ASAN           | Enable third‑party AddressSanitizer                                         | OFF     |                 |
| SLXIO_THIRDPARTY_UBSAN          | Enable third‑party UndefinedBehaviorSanitizer                               | OFF     |                 |
| SLXIO_WITH_OPENMP               | Enable OpenMP support                                                       | ON      |                 |
| SLXIO_ENABLE_WERROR             | Treat warnings as errors                                                    | OFF     |                 |
| SLXIO_ENABLE_WALL               | Enable all compiler warnings                                                | ON      |                 |
| SLXIO_ENABLE_WALL               | Enable all compiler warnings                                                | ON      |                 |
| SLXIO_ENABLE_BUILD_SUMMARY      | Option to enable/disable build summary logging during cmake configuration   | ON      |                 |

### 3.3 Platform Support

SLXIO supports Windows, Linux, and macOS platforms. It primarily uses widely adopted open-source compilers, with compiler support ported for each platform. Other platforms are not supported. For detailed platform and compiler support information, refer to the table below.

| OS                   | Compiler     | Architecture | Status    |
|----------------------|--------------|--------------|-----------|
| Windows (VS 2022)    | MSVC         | Win32        |[![Build status](https://ci.appveyor.com/api/projects/status/40jlbucsjjxehn76?svg=true)](https://ci.appveyor.com/project/wissem01chiha/slxio)           |
| Windows (VS 2022)    | MSVC         | x64          |[![Build status](https://ci.appveyor.com/api/projects/status/40jlbucsjjxehn76?svg=true)](https://ci.appveyor.com/project/wissem01chiha/slxio)           |
| Windows (VS 2022)    | Clang        | Win32        |[![Build status](https://ci.appveyor.com/api/projects/status/40jlbucsjjxehn76?svg=true)](https://ci.appveyor.com/project/wissem01chiha/slxio)           |
| Windows (VS 2022)    | Clang        | x64          |[![Build status](https://ci.appveyor.com/api/projects/status/40jlbucsjjxehn76?svg=true)](https://ci.appveyor.com/project/wissem01chiha/slxio)           |
| Windows              | MinGW        | x64          |[![MinGW](https://github.com/wissem01chiha/slxio/actions/workflows/mingw.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/mingw.yml)           |
| macOS (latest)       | Apple Clang  | Native*      |[![MacOS](https://github.com/wissem01chiha/slxio/actions/workflows/macos.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/macos.yml)           |
| macOS (latest)       | GCC 13       | Native*      |[![MacOS](https://github.com/wissem01chiha/slxio/actions/workflows/macos.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/macos.yml)           |
| Ubuntu (latest)      | GCC          | x64          |[![Ubuntu](https://github.com/wissem01chiha/slxio/actions/workflows/ubuntu.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/ubuntu.yml)           |
| Ubuntu (latest)      | Clang 15     | x64          |[![Ubuntu](https://github.com/wissem01chiha/slxio/actions/workflows/ubuntu.yml/badge.svg)](https://github.com/wissem01chiha/slxio/actions/workflows/ubuntu.yml)           |

## 4.0 Testing

SLXIO has migrated from [GoogleTest](https://github.com/google/googletest) to the [doctest](https://github.com/doctest/doctest) framework for lightweight andthe early refactoring stages. Although GoogleTest offers significantly more features than doctest, the latter was chosen for its simplicity and reduced compilation overhead.

By default, test builds are disabled. They can be enabled using the CMake option `SLXIO_BUILD_TESTING`. Refer to the #322-configure-options section for more details.

### 4.1 Running Tests

To run all unit tests after building, use:

```bash
ctest -C Debug --output-on-failure
```

This command executes all available unit tests and displays detailed output for any failing tests.

> **Note:** Code coverage is only supported when both `SLXIO_BUILD_TESTING` and `SLXIO_BUILD_TESTING_COVERAGE` are set to `ON`.

### 4.2 Generating Code Coverage Reports 

> **Note:** The following instructions are written for Ubuntu but are generally applicable to any Unix-like platform that supports GCC, gcov, and lcov.

When coverage support is enabled, SLXIO is compiled with coverage instrumentation flags, allowing coverage data to be collected and analyzed during test execution.

#### Using LCOV 

Install the required tools:

```bash
sudo apt update
sudo apt install lcov
```

Run the test suite:

```bash
ctest --output-on-failure
```

Capture coverage data:

```bash
lcov --capture \
     --directory . \
     --output-file coverage.info
```

Optionally remove coverage data from system headers and third-party dependencies:

```bash
lcov --remove coverage.info \
     '/usr/*' \
     '*/_deps/*' \
     --output-file coverage.f*ltered.info
```

Generate an HTML report:

```bash
genhtml coverage.f*ltered.info \
        --output-dir*ctory coverage-report
```

#### Using gcov

Generate coverage information directly with `gcov`:

```bash
find . -name "*.gcda" -exec gcov {} \;
```

This command generates `.gcov` files containing line-by-line coverage statistics for each source file.


### 4.2 Debugging Test Failures

If a test fails, check the following files for diagnostic information:

- `Testing/Temporary/LastTest.log`
- `test/testSubDir/${testname}/${testname}.vg.out`
- Other similar log and output files generated during test execution.

## 5.0 Using  Other Projects

> **Note:** The CMake examples below have not yet been extensively tested, as the development of core libraries is still ongoing. They are intended to provide an overview of how  libraries can be integrated and consumed using native CMake mechanisms. Integration with package managers such as Conan and vcpkg has not yet been established.

Several approaches can be used to integrate SLXIO into your project. The recommended method is to use CMake's built-in `FetchContent` module.

### 5.1 Using FetchContent

The simplest way to consume the project is through CMake's built-in [FetchContent](https://cmake.org/cmake/help/latest/module/FetchContent.html) module. This approach automatically downloads, configures, and builds the library alongside your application.

Add the following script to a CMake module file or directly to a location accessible from your project's CMake configuration:

```cmake
include(FetchContent)

FetchContent_Declare(
  slxio
  GIT_REPOSITORY https://github.com/wissem01chiha/slxio.git
  GIT_TAG master
)

FetchContent_MakeAvailable(slxio)
```

-  Linking Individual Components

Linking against specific SLXIO components can be finely controlled using the CMake alias targets provided by the project. This approach is useful when your application depends only on a subset of the available libraries.

```cmake
add_executable(mytarget main.cpp)

target_link_libraries(mytarget PRIVATE
  CommonCore
  CommonDataModel
  CommonSystem
  SimulinkCore
  SimulinkData
  SimulinkConfiguration
  SimulinkMisc
  SimulinkStateflow
  SimulinkAnnotation
  SimulinkLayout
)
```

-  Linking High-Level Component Groups

Once the project exposes higher-level alias targets, linking against the core SLXIO functionality becomes simpler. For example, if your application only requires the main Common, Simulink, and IO components:

```cmake
add_executable(mytarget main.cpp)

target_link_libraries(mytarget PRIVATE
  Common
  Simulink
  IO
)
```

-  Linking the Complete Framework

If you are unsure about the exact SLXIO dependencies required by your application, you can link against the umbrella target that includes all project libraries.

```cmake
add_executable(mytarget main.cpp)

target_link_libraries(mytarget PRIVATE
  SLXIO::SLXIO
)
```
This is the recommended approach for new users, as it ensures that all required SLXIO components and transitive dependencies are linked automatically.

## 6.0 API Documentation

Since version **0.1.0**, SLXIO documentation has been published through **GitHub Pages** using a Jekyll-based theme.
For detailed API and implementation documentation, we also provides integrated support for **Doxygen**. Documentation generation can be enabled during the CMake configuration step by setting the `SLXIO_DOXYGEN_DOCUMENTATION` option to `ON`.
By default, the Doxygen documentation is generated automatically as part of the build process. The generated HTML documentation can be found at:

```text
build/Utilities/Doxygen/html
```


## 7.0 References

> Shrestha, S. L., Chowdhury, S. A., & Csallner, C. (2022).
> *SLNET: A Redistributable Corpus of 3rd-party Simulink Models (v2.0)*.
> Zenodo. https://doi.org/10.5281/zenodo.5259648


## 8.0 License

All material is provided under an Apache License unless otherwise specified. See the [LICENSE](./LICENSE) file for more details

----
[![SonarQube Cloud](https://sonarcloud.io/images/project_badges/sonarcloud-light.svg)](https://sonarcloud.io/summary/new_code?id=wissem01chiha_slxio)
