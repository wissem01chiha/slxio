include(FindPythonModule)

if(SLXIO_SLOG)
  set(SLXIO_LOGURU 0)
  set(SLXIO_SLOG 1)
else()
  set(SLXIO_LOGURU 1)
  set(SLXIO_SLOG 0)
endif()

if(SLXIO_BUILD_SHARED)
  set(BUILD_SHARED_LIBS TRUE)
else()
  set(BUILD_SHARED_LIBS FALSE)
  set(ZLIB_BUILD_SHARED FALSE)
endif()

if(SLXIO_OPENMP)
  find_package(OpenMP)
endif()
find_package(JSON-C)
find_package(LibXml2)

if(SLXIO_BUILD_PYTHON)
  find_package(Python COMPONENTS Interpreter Development)
endif()

if(NOT SLXIO_BUILD_THIRDPARTY_TESTS)
  set(PNG_TESTS FALSE)
  set(ZLIB_BUILD_TESTING FALSE)
endif()

if(SLXIO_COVERAGE)
  find_program(GCOV gcov)
  find_program(LCOV lcov)
  find_program(GENHTML genhtml)
endif()



