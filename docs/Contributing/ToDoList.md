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
