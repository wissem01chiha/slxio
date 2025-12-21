#[=======================================================================[.rst:
CheckClangSupport
-----------
Find and configure Clang tools for project build
try to find and defin the foolwing tools and their versions and locations
clang-format, clang-tidy, libclang, clang-tooling etc

This module defines the following cache variables:

``CLANG_FORMAT``
    Enable or disable Clang-Format support
    WANTED, REQUIRED, DISABLED

Import Behavior
^^^^^^^^^^^^^^^^

# for WANTED > try to find and use if found otherwise skip
# for REQUIRED > try to find and use if not found error out
# for DISABLED > skip finding and using
# helper functions and utilties for building with clang and llvm tools
# like libclang, clangg-lib- tooling, check if installed on the system 
# if not skip avoid building components that depend on and avoid downlding them
# or builidng becuse thay are too big to include as part of the repo

#]=======================================================================]
if(ENABLE_CLANG_TIDY)
    message(STATUS "Checking if Clang-Tidy is available")
    find_program(CLANGTIDY clang-tidy)
    if(CLANGTIDY)
        message(STATUS "Checking if Clang-Tidy is available - Success")
        set(CMAKE_CXX_CLANG_TIDY ${CLANGTIDY})
    else()
        message(FATAL_ERROR "Clang-Tidy requested but executable not found")
    endif()
else()
    message(STATUS "Clang-Tidy is disabled")
endif()

if(USE_CLANG_FORMAT STREQUAL "DISABLED")
  message(STATUS "Clang-Format is disabled")
else()
  message(STATUS "Checking if Clang-Format is available")
  find_program(CLANGFORMAT_EXECUTABLE NAMES clang-format)
  if(CLANGFORMAT_EXECUTABLE)
    message(STATUS "Clang-Format found: ${CLANGFORMAT_EXECUTABLE}")
    set(CLANG_FORMAT_EXECUTABLE ${CLANGFORMAT_EXECUTABLE})

    file(GLOB_RECURSE ALL_SRC_CXX_FILES
      "${CMAKE_SOURCE_DIR}/*.cxx"
    )
    file(GLOB_RECURSE ALL_HEADER_FILES
      "${CMAKE_SOURCE_DIR}/*.h"
      "${CMAKE_SOURCE_DIR}/*.hpp"
      "${CMAKE_SOURCE_DIR}/*.hxx"
    )

    list(FILTER ALL_SRC_CXX_FILES EXCLUDE REGEX "${CMAKE_BINARY_DIR}/.*")
    list(FILTER ALL_HEADER_FILES EXCLUDE REGEX "${CMAKE_BINARY_DIR}/.*")
    list(FILTER ALL_SRC_CXX_FILES EXCLUDE REGEX "${CMAKE_SOURCE_DIR}/ThirdParty/.*")
    list(FILTER ALL_HEADER_FILES EXCLUDE REGEX "${CMAKE_SOURCE_DIR}/ThirdParty/.*")

    if(ALL_SRC_CXX_FILES OR ALL_HEADER_FILES)
      add_custom_target(format
      COMMAND ${CLANGFORMAT_EXECUTABLE} -i --style=file
              ${ALL_SRC_CXX_FILES} ${ALL_HEADER_FILES}
      WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
      COMMENT "Formatting source files with clang-format"
    )

    endif()
  elseif(USE_CLANG_FORMAT STREQUAL "REQUIRED")
    message(FATAL_ERROR "Clang-Format requested but executable not found")
  else()
    message(STATUS "Clang-Format not found, skipping")
  endif()
endif()

