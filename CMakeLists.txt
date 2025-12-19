cmake_minimum_required(VERSION 3.12...3.26 FATAL_ERROR)

project(SLXIO)

if(WIN32)
    cmake_policy(SET CMP0135 NEW)
endif()

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/CMake")

if(APPLE)
    # MACOS Realated stuff 
endif()

find_package(Git QUIET) #not used 
include(Version)

set(_is_top_level FALSE)
if(CMAKE_CURRENT_SOURCE_DIR STREQUAL CMAKE_SOURCE_DIR)
    set(_is_top_level TRUE)
endif()

#-----------------------------------------------------------------------------
option(ENABLE_DOCUMENTATION "Enable documentation generation" OFF)

#-----------------------------------------------------------------------------
option(TOP_LEVEL_BUILD "Enable top-level build" ${_is_top_level})
mark_as_advanced(TOP_LEVEL_BUILD)

#-----------------------------------------------------------------------------
option(ENABLE_CLANG_TIDY "Enable Clang-Tidy format" OFF)
mark_as_advanced(ENABLE_CLANG_TIDY)

#-----------------------------------------------------------------------------
option(ENABLE_CPPCHECK "Enable CppCheck static analysis" OFF)
mark_as_advanced(ENABLE_CPPCHECK)

#-----------------------------------------------------------------------------
option(ENABLE_LOGGING "Enable logging" ON)
mark_as_advanced(ENABLE_LOGGING)

#-----------------------------------------------------------------------------
option(ENABLE_SANITIZER "Enable sanitizers" OFF)
mark_as_advanced(ENABLE_SANITIZER)

#-----------------------------------------------------------------------------
option(ENABLE_FUZZING "Enable fuzzing support" OFF)
mark_as_advanced(ENABLE_FUZZING)

#-----------------------------------------------------------------------------
option(BUILD_SHARED_LIBS "Build as shared libraries" OFF)

#-----------------------------------------------------------------------------
option(ENABLE_PKGCONFIG "Generate pkg-config file" ON)
mark_as_advanced(ENABLE_PKGCONFIG)

#-----------------------------------------------------------------------------
option(ENABLE_AVX "Enable AVX optimizations where available" ON)
mark_as_advanced(ENABLE_AVX)

include(FindPythonModule)
include(CheckCompilerSupport)
include(CompilerFlags)
include(CheckIncludes)
include(CompilerWarningFlags)
include(ABINamespace)
include(Binding)
include(ModuleRemote)
include(CheckAvxSupport)
include(CheckClangSupport)
include(CppCheck)
include(Sanitizer)
include(Module)

if(ENABLE_AVX) 
    avx_compile_options(AVX_COMPILE_OPTIONS) #for testing
endif()

module_add_cmake_modules(${CMAKE_CURRENT_SOURCE_DIR})
list(APPEND CMAKE_MODULE_PATH ${MODULES_CMAKE_DIRS})

add_submodules(${CMAKE_CURRENT_SOURCE_DIR})

include(Testing)

if(ENABLE_PKGCONFIG)
    set(PKGCONFIG_INSTALL_DIR lib/pkgconfig)

    string(TOLOWER "${PROJECT_NAME}" LOWERCASE_PROJECT_NAME)
    install(DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/ DESTINATION ${PKGCONFIG_INSTALL_DIR}
        FILES_MATCHING PATTERN "${LOWERCASE_PROJECT_NAME}.pc")
    configure_file(
        ${CMAKE_CURRENT_SOURCE_DIR}/${PROJECT_NAME}.pc.in
        ${CMAKE_CURRENT_BINARY_DIR}/${LOWERCASE_PROJECT_NAME}.pc
        @ONLY
    )
endif()

