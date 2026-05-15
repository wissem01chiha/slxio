if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU" AND CMAKE_CXX_COMPILER_VERSION VERSION_LESS 8.0)
  message (FATAL_ERROR "GCC 8.0 or later is required.")
endif ()

if (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC" AND CMAKE_CXX_COMPILER_VERSION VERSION_LESS
                                              19.10)
  message (FATAL_ERROR "Microsoft Visual Studio 2017 or later is required.")
endif ()

if (CMAKE_CXX_COMPILER_ID STREQUAL "Clang" AND CMAKE_CXX_COMPILER_VERSION VERSION_LESS
                                               7.0)
  message (FATAL_ERROR "LLVM Clang 7.0 or later is required.")
endif ()


if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 11)
endif()
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_EXTENSIONS OFF)
