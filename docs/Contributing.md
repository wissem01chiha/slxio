@page CodingStandards Coding Standards

# SLXIO Coding Standards

This document describes the coding standards all developers are expected to adhere to when writing code for the SLXIO project.

# Top-level organisation issues

# Portablity

# Contributing Guide

Thanks very much for your interest in the Slxio project. The project is under active development, and contributions are highly encouraged. See the following documentation pages for more details about project setup and conventions.

- @subpage CodingStandards
- @subpage Contact
- @subpage EnvironmentSetup
- @subpage RunningTests
- @subpage RunningStaticChecks
- @subpage To‑Do 
- @subpage MakingNewRelease
- @subpage ExternalDependencySystem

@page Contact

Currently, there is no official mailing list for the project, as there is only one developer/maintainer. Feel free to contact me directly instead. [mail: chihawissem08 [dot] gmail [dot] com](mailto:chihawissem08@gmail.com)

@page MakingNewRelease  Making a New Release

# Checking ABI Compatibility
@page RunningTests Running Tests

# Running SLXIO Tests

Slxio has moved from [GoogleTest](https://github.com/google/googletest) to the [doctest](https://github.com/doctest/doctest) framework for lightweight and efficient testing since version 0.1.0.
Testing is enabled via the CMake option `SLXIO_ENABLE_TESTING`.


To run all unit tests after building, use:

```bash
ctest -C Debug --output-on-failure
```
This will execute all project unit tests by default.


> **Note:** Code coverage is not yet supported.

4.2 Debugging Test Failures

If a test fails, check `Testing/Temporary/LastTest.log`,
`test/testSubDir/${testname}/${testname}.vg.out`, and other similar files.

@page To‑Do Todo List

These are the main features and issues planned to be added or fixed:

- Python bindings for modules
  - All related module bindings should be placed into:
    ```
    /<module-namespace>/<module_name>/Binding/Python
    ```
  - Other language bindings should follow the same pattern, e.g.:
    ```
    /<module-namespace>/<module_name>/Binding/Rust
    ```
  - Each module manages its own bindings.
  - Project‑root bindings should be placed into the main [Binding](https://github.com/wissem01chiha/slxio/tree/master/Binding) folder, named by language.

- JSON serializer module
  - Start implementation in [IO‑Json](https://github.com/wissem01chiha/slxio/tree/master/IO).

- CMake tooling fixes
  - Fix `clang-format` and `cppcheck` CMake target construction in:
    - [CppCheck.cmake](https://github.com/wissem01chiha/slxio/blob/master/CMake/CppCheck.cmake)
    - [CheckClangSupport.cmake](https://github.com/wissem01chiha/slxio/blob/master/CMake/CheckClangSupport.cmake)

- Compiler flag helpers
  - Add a CMake module file providing helper macros for compiler flag support.

- Compile definitions
  - Fix compile definitions in the main `module.cmake` (`PUBLIC_COMPILE_DEFINITIONS`) and private compiler definition functions.
  - Ensure support for module‑specific compile‑time flags.

- Matlab script parsing
  - Add source files for parsing Matlab scripts into an AST (Abstract Syntax Tree) in the [Matlab Utilities module](https://github.com/wissem01chiha/slxio/tree/master/Utilities/Matlab).
  - Support parsing of Matlab function blocks.
  - Tools like ANTLR can be used to assist.

- Test coverage
  - Fix and add coverage generation for tests.

- Fuzzing support
  - Add fuzzing support in the [Fuzzing](https://github.com/wissem01chiha/slxio/tree/master/Fuzzing) module.
