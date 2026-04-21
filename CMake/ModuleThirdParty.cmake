#[=======================================================================[.rst:
ModuleExternal.cmake
----------------
Configure external dependencies for the project build
#]=======================================================================]
include (FindPythonModule)

if (ENABLE_COVERAGE)
  find_program (GCOV gcov)
  find_program (LCOV lcov)
  find_program (GENHTML genhtml)
endif ()

if (ENABLE_OPENMP)
  find_package (OpenMP)
endif ()

if (SLXIO_BUILD_PYTHON)
  find_package (Python COMPONENTS Interpreter Development)
endif ()

find_package (JSON-C)
find_package (LibXml2)
