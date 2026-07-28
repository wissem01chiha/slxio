<!-- omit in toc -->
# Development Kit for Slxio

- [1.0 Introduction](#10-introduction)
  - [2.3 Coverage Tools](#23-coverage-tools)
  - [2.4 Perl](#24-perl)
  - [2.5 Profiling Tools](#25-profiling-tools)
  - [2.6 Fuzzing Tools](#26-fuzzing-tools)
- [3.0 Build System](#30-build-system)
- [4.0 Build Automation](#40-build-automation)
- [5.0 Code Style](#50-code-style)
  - [5.1 Clang-Format](#51-clang-format)
  - [5.2 cmake-format](#52-cmake-format)
- [6.0 Static Check](#60-static-check)
  - [6.1 Cppcheck](#61-cppcheck)
- [7.0 Dependency Management](#70-dependency-management)
  - [7.1 External Dependencies](#71-external-dependencies)
  - [7.2 Internal Modules](#72-internal-modules)
  - [7.3 Dependency Graph](#73-dependency-graph)
- [8.0 Update Vendored ThirdParty](#80-update-vendored-thirdparty)
- [9.0 Documentation](#90-documentation)
- [10.0 Miscellaneous](#100-miscellaneous)

---

## 1.0 Introduction

This guide documents the automation utilities in the [Development](/Development/) folder.Some scripts require additional packages or third‑party tools to run correctly.

### 2.3 Coverage Tools
- GCC: `gcov`, `lcov`
- Clang/LLVM: `llvm-cov`
- Reports can be exported to HTML for visualization.

### 2.4 Perl

Install via system package manager.

### 2.5 Profiling Tools

### 2.6 Fuzzing Tools



## 3.0 Build System

Slxio uses a **module‑based build system** inspired by [VTK](https://vtk.org).

- Each module is declared in a `Module.txt` metadata file.
- Modules build as **static libraries** (shared libraries not yet supported).
- Each module includes:
  - Source and header files
  - Unit tests
  - Bindings
  - Documentation pages

See the [Module.txt](/Development/ModuleTemplate.txt) for configuration details.

## 4.0 Build Automation

## 5.0 Code Style

Running Slxio Style Format Tool

```bash
python slxio-format.py
```
This will format all source files, header files, and CMake files in one step.

### 5.1 Clang-Format

Code formatting based on [.clang-format](/clang-format)
```bash
clang-format -i Common/Core/*.cxx
```
to run the formatter tool :

```bash
dos2unix clang-format.sh
C:\cygwin64\bin\bash.exe -l -c "/cygdrive/c/.../Development/clang-format.sh"
```

### 5.2 cmake-format

Formatter for CMakeLists.txt and .cmake files.
```bash
cmake-format -i CMakeLists.txt
```

## 6.0 Static Check

### 6.1 Cppcheck

Static analysis tool for detecting bugs and undefined behavior.
Run via:
```bash
cppcheck --enable=all src/
```

## 7.0 Dependency Management

### 7.1 External Dependencies
### 7.2 Internal Modules
### 7.3 Dependency Graph

Generated using cinclude2dot.pl script:

## 8.0 Update Vendored ThirdParty

## 9.0 Documentation

## 10.0 Miscellaneous

- Scan a directory looking for sources and headers
```bash
  ./scan_sources_headers.sh ./src
  ```
- Generate Module.txt pre‑input file for the build system
```bash
   ./generate_module_file.sh ExampleModule ./src ./include
  ```
- Flatten a directory with non‑empty subdirectories into one level directory
 ```bash
   ./flatten_directory.sh ./modules ./flattened
  ```
- Generate single include header per module
```bash
   ./generate_module_header.sh ./include/module1 ./module1_all.h
  ```
- Generate project‑wide single include header
```bash
   ./generate_project_header.sh ./modules ./project_all.h
  ```
