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