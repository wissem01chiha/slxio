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
include(CMakeDependentOption)

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
option(ENABLE_PYTHON_BINDING "Enable building Python Interface" ON)

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

#-----------------------------------------------------------------------------
option(ENABLE_HDF5 "Enable HDF5 support" ON)
mark_as_advanced(ENABLE_HDF5)

#-----------------------------------------------------------------------------
option(ENABLE_OPENMP "Enable OpenMP support" ON)
mark_as_advanced(ENABLE_OPENMP)

#-----------------------------------------------------------------------------
option(BUILD_EXAMPLES "Build example applications" OFF)

#-----------------------------------------------------------------------------
option(${PROJECT_NAME}_ENABLE_TESTING "build tests" ON)
mark_as_advanced(${PROJECT_NAME}_ENABLE_TESTING)

option(${PROJECT_NAME}_ENABLE_COVERAGE "enable code coverage" OFF)
mark_as_advanced(${PROJECT_NAME}_ENABLE_COVERAGE)

option(${PROJECT_NAME}_ENABLE_BINDING_TEST "build binding interface tests" ON)
mark_as_advanced(${PROJECT_NAME}_ENABLE_BINDING_TEST)
#-----------------------------------------------------------------------------
option(ENABLE_NAMESPACE "Enable global namespace" TRUE)
mark_as_advanced(ENABLE_NAMESPACE)

cmake_dependent_option(
  ENABLE_ABI_NAMESPACE
  "Enable ABI namespace" ON
  "ENABLE_NAMESPACE" OFF
)
mark_as_advanced(ENABLE_ABI_NAMESPACE)

set(USE_CLANG_FORMAT "WANTED" CACHE STRING "Clang-Format support mode")
set_property(CACHE USE_CLANG_FORMAT PROPERTY STRINGS WANTED REQUIRED DISABLED)
mark_as_advanced(USE_CLANG_FORMAT)


include(FindPythonModule)
include(CheckCompilerSupport)
include(CompilerFlags)
include(CheckExternalInclude)
include(CompilerWarningFlags)
include(Namespace)
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
include(Summery)

if(ENABLE_PKGCONFIG)
    set(PKGCONFIG_INSTALL_DIR lib/pkgconfig)

    install(DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/ DESTINATION ${PKGCONFIG_INSTALL_DIR}
        FILES_MATCHING PATTERN "slxio.pc")
    configure_file(
        ${CMAKE_CURRENT_SOURCE_DIR}/slxio.pc.in
        ${CMAKE_CURRENT_BINARY_DIR}/slxio.pc
        @ONLY
    )
endif()

