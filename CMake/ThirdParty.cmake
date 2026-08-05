# SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
# SPDX-License-Identifier: Apache-2.0

function(add_third_party target)
  add_subdirectory(src)
  get_target_property(target_type ${target} TYPE)
    if(target_type STREQUAL "INTERFACE_LIBRARY")
      target_include_directories(${target}
      INTERFACE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
    )
  else()
    target_include_directories(${target}
      PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
    )
  endif()
endfunction()



# if(SLXIO_BUILD_SHARED)
#   set(LIBUV_BUILD_SHARED TRUE)
# else()
#   set(ZLIB_BUILD_SHARED FALSE)
#   set(LIBUV_BUILD_SHARED FALSE)
# endif()

# if(SLXIO_OPENMP)
#   find_package(OpenMP)
# endif()
# find_package(JSON-C)
# find_package(LibXml2)

# if(SLXIO_BUILD_PYTHON)
#   find_package(Python COMPONENTS Interpreter Development)
# endif()

# if(NOT SLXIO_BUILD_THIRDPARTY_TESTS)
#   set(ZLIB_BUILD_TESTING FALSE)
#   set(LIBXML2_WITH_TESTS FALSE)
#   set(tinyxml2_BUILD_TESTING FALSE)
#   set(CXXOPTS_BUILD_TESTS FALSE)
#   set(DOCTEST_WITH_TESTS FALSE)
# endif()

# if(SLXIO_COVERAGE)
#   find_program(GCOV gcov)
#   find_program(LCOV lcov)
#   find_program(GENHTML genhtml)
# endif()

# message(STATUS "Checking if Doxygen is available")
# find_package(Doxygen)

# if(NOT DOXYGEN_FOUND)
#   message(STATUS "Doxygen not found, documentation will not be generated")
# endif()
# message(STATUS "Doxygen found: ${DOXYGEN_EXECUTABLE}")

# find_program(DOT_EXECUTABLE dot)
# if(DOT_EXECUTABLE)
#   message(STATUS "Graphviz dot found: ${DOT_EXECUTABLE}")
# else()
#   message(WARNING "Graphviz dot not found; Doxygen graphs will be disabled")
# endif()

# cmake_policy(POP)
