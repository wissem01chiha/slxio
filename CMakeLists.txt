cmake_minimum_required (VERSION 3.29 FATAL_ERROR)

project (Slxio)

cmake_policy (SET CMP0048 NEW)
cmake_policy (SET CMP0007 NEW)
cmake_policy (SET CMP0012 NEW)

list (APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/CMake")

include (Version)
include (Apple)
include (Windows)
include (CI)

include (CMakeDependentOption)

option (BUILD_SHARED_LIBS "Build as shared libraries" OFF)
option (ENABLE_PYTHON_BINDING "Enable building Python Interface" ON)
option (ENABLE_TESTING "Build tests" ON)
option (ENABLE_BINDING_TEST "Build binding interface tests" ON)
option (ENABLE_NAMESPACE "Enable global namespace" TRUE)
cmake_dependent_option (ENABLE_ABI_NAMESPACE "Enable ABI namespace" ON "ENABLE_NAMESPACE"
                        OFF)
option (USE_LOCAL_LIBS "Enable Using local installed libraries" ON)

option (ENABLE_OPENMP "Enable OpenMP support" ON)
option (ENABLE_AVX "Enable AVX optimizations where available" ON)
option (ENABLE_HDF5 "Enable HDF5 support" ON)
option (ENABLE_MATLAB "Enable Matlab support" OFF)

option (ENABLE_PKGCONFIG "Generate pkg-config file" ON)
option (ENABLE_INSTALL "Enable installtion after build" OFF)

option (ENABLE_SANITIZER "Enable sanitizers" OFF)
option (ENABLE_CLANG_TIDY "Enable Clang-Tidy format" OFF)
option (ENABLE_CPPCHECK "Enable CppCheck static analysis" ON)
option (ENABLE_CLANG_FORMAT "Clang-Format support mode" ON)
option (ENABLE_COVERAGE "Enable code coverage" OFF)
option (ENABLE_FUZZING "Enable fuzzing support" OFF)

option (ENABLE_DOCUMENTATION "Enable documentation generation" OFF)
option (BUILD_EXAMPLES "Build example applications" OFF)

include (CheckCompilerSupport)
include (CompilerFlags)
include (CheckExternalInclude)
include (CompilerWarningFlags)
include (GenerateNamespace)
include (GenerateSingleInclude)
include (ModuleExternal)
include (CheckAvxSupport)
include (CheckClangSupport)
include (ModuleSanitizer)
include (Module)

module_add_cmake_modules (${CMAKE_CURRENT_SOURCE_DIR})
list (APPEND CMAKE_MODULE_PATH ${MODULES_CMAKE_DIRS})

add_submodules (${CMAKE_CURRENT_SOURCE_DIR})

include (Testing)
include (Coverage)
include (Summery)
include (Install)
