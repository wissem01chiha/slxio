cmake_minimum_required(VERSION 3.12...3.26 FATAL_ERROR)

project(Slxio)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/CMake")

include(Version)
include(Apple)
include(Windows)

include(CMakeDependentOption)

option(BUILD_SHARED_LIBS "Build as shared libraries" OFF)
option(ENABLE_PYTHON_BINDING "Enable building Python Interface" ON)
option(ENABLE_TESTING "Build tests" ON)
option(ENABLE_BINDING_TEST "Build binding interface tests" ON)
option(ENABLE_NAMESPACE "Enable global namespace" TRUE)
cmake_dependent_option(ENABLE_ABI_NAMESPACE "Enable ABI namespace" ON "ENABLE_NAMESPACE" OFF)
option(USE_LOCAL_LIBS "Enable Using local installed libraries" ON)

option(ENABLE_OPENMP "Enable OpenMP support" ON)
option(ENABLE_AVX "Enable AVX optimizations where available" ON)
option(ENABLE_HDF5 "Enable HDF5 support" ON)
option(ENABLE_PKGCONFIG "Generate pkg-config file" ON)
option(TOP_LEVEL_BUILD "Enable top-level build" ON)

option(ENABLE_SANITIZER "Enable sanitizers" OFF)
option(ENABLE_CLANG_TIDY "Enable Clang-Tidy format" OFF)
option(ENABLE_CPPCHECK "Enable CppCheck static analysis" OFF)
set(USE_CLANG_FORMAT "WANTED" CACHE STRING "Clang-Format support mode")
option(ENABLE_COVERAGE "Enable code coverage" ON)
option(ENABLE_FUZZING "Enable fuzzing support" OFF)

option(ENABLE_DOCUMENTATION "Enable documentation generation" OFF)
option(BUILD_EXAMPLES "Build example applications" OFF)

include(FindPythonModule)
include(CheckCompilerSupport)
include(CompilerFlags)
include(CheckExternalInclude)
include(CompilerWarningFlags)
include(GenerateNamespace)
include(GenerateSingleInclude)
include(ModuleExternal)
include(CheckAvxSupport)
include(CheckClangSupport)
include(CppCheck)
include(ModuleSanitizer)
include(Module)

module_add_cmake_modules(${CMAKE_CURRENT_SOURCE_DIR})
list(APPEND CMAKE_MODULE_PATH ${MODULES_CMAKE_DIRS})

add_submodules(${CMAKE_CURRENT_SOURCE_DIR})

include(Testing)
include(Summery)
include(Install)
