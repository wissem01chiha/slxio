#[=======================================================================[.rst:
ModuleExternal.cmake
----------------
Configure external dependencies for the project build
#]=======================================================================]
include (ModuleRemote)
include (FindPythonModule)

if (ENABLE_COVERAGE)
  find_program (GCOV gcov)
  find_program (LCOV lcov)
  find_program (GENHTML genhtml)
endif ()
if (ENABLE_MATLAB)
  find_package (Matlab)
endif ()
if (ENABLE_HDF5)
  find_package (HDF5)
endif ()
if (ENABLE_OPENMP)
  find_package (OpenMP)
endif ()
if (ENABLE_CPPCHECK)
  find_package (cppcheck)
  if (CPPCHECK_FOUND)
    set (CMAKE_CXX_CPPCHECK ${CPPCHECK}
                            # --enable=all --inconclusive
    )
  endif ()
endif ()
if (ENABLE_PYTHON_BINDING)
  find_package (Python COMPONENTS Interpreter Development)
endif ()

find_package (JSON-C)
find_package (LibXml2)
find_package (Doctest)
find_package (Loguru)
find_package (Slog)
