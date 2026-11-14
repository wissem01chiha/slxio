# Contribution Guide

## Coding Conventions

### C++ Naming Conventions

- Avoid usage of old C style macros and prefer constexpr
- Use [NODISCARD](./src/common/core/Compiler.h) on getters and error-returning functions.
- Class names and public/private method names use PascalCase.
- Class field names use camelCase prefixed by `m_`

### File Naming Conventions

- All source code should be hosted inside the `src/` subdirectory of the project source tree
- Files and folder names should follow lowercase naming with no spaces or special characters or numeric values
- These rules apply to subfolders and files with no exception outside the `src`

### Commit message formatting

- Although it is not enforced at the moment, we encourage using [conventionalcommits](https://www.conventionalcommits.org/en/v1.0.0/) for commit message writing and formatting. This helps a lot when generating a changelog summary at releases.

## Developer Tools Support

Project helpful tooling/debugging scripts are hosted among many others in the shared repository [tools](https://github.com/wissem01chiha/tools),

```bash
  git clone https://github.com/wissem01chiha/slxio --recursive
```

or if you already have a local clone, only updating your git submodules is enough

```bash
  git submodule update --remote --recursive
```

## Testing

We use [doctest](https://github.com/doctest/doctest) as a primarily unit testing framework for lightweight and efficiency. Before starting work, we recommend reading the official doctest documentation [here](https://github.com/doctest/doctest/blob/master/doc/markdown/readme.md#reference).

Testing is enabled via the global CMake option `SLXIO_ENABLE_TESTING`; however, for more fine-grained control over tests, `SLXIO_UNIT_TESTS`, `SLXIO_REGRESSION_TESTS`, and `SLXIO_INTEGRATION_TESTS` won't take effect unless `SLXIO_TESTS` is set to `ON`.

To run all unit tests:

```bash
 ctest -C Debug --output-on-failure
```

If a test fails, check `Testing/Temporary/LastTest.log`,
`test/testSubDir/${testname}/${testname}.vg.out`, and other similar files.

### Submit Results to CDash

We use [cdash](https://cmake.org/cmake/help/book/mastering-cmake/chapter/CDash.html) for test results tracking and analytics. Although it is not necessary for newcomers, and this is done by default on Coverage CI, it may be helpful to deploy test reports after adding a new feature/test.

Assuming a test-enabled build run:

```bash
  ctest -D Experimental -V
```

Previous submission results can be found [here](https://my.cdash.org/index.php?project=slxio)

## Todo List

Check our [Issues](https://github.com/wissem01chiha/slxio/issues) list for open working topics.
