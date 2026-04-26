include (FindPythonModule)

if(SLXIO_SLOG)
  set(SLXIO_LOGURU 0)
  set(SLXIO_SLOG 1)
else()
  set(SLXIO_LOGURU 1)
  set(SLXIO_SLOG 0)
endif()

if(SLXIO_BUILD_PYTHON)
  find_package(Python COMPONENTS Interpreter Development)
endif ()

if(SLXIO_COVERAGE)
  find_program(GCOV gcov)
  find_program(LCOV lcov)
  find_program(GENHTML genhtml)
endif ()

if (SLXIO_OPENMP)
  find_package(OpenMP)
endif ()

find_package(JSON-C)
find_package(LibXml2)
