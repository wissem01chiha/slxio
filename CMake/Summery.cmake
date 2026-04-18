#[=======================================================================[.rst:
ModuleSummery
----------------
Provides a summary of the configured modules and options for the project build.
#]=======================================================================]

message ("")
message (
  "***************  ${PROJECT_NAME} Build Configuration Summary *******************")

message (STATUS "Platform            : ${CMAKE_SYSTEM_NAME}")
message (STATUS "Architecture        : ${CMAKE_SYSTEM_PROCESSOR}")
message (STATUS "Compiler            : ${CMAKE_CXX_COMPILER_ID}")
message (STATUS "Compiler Version    : ${CMAKE_CXX_COMPILER_VERSION}")

message (STATUS "Build Type          : ${CMAKE_BUILD_TYPE}")
message (STATUS "Shared Libs         : ${BUILD_SHARED_LIBS}")

message (STATUS "Version             : ${PROJECT_VERSION}")

message (STATUS "Namespace Name      : ${NAMESPACE_NAME}")
message (STATUS "ABI Namespace Name  : ${ABI_NAMESPACE_NAME}")

message (STATUS "Install             : ${ENABLE_INSTALL}")
message (STATUS "Install prefix      : ${CMAKE_INSTALL_PREFIX}")
message (STATUS "Package Config      : ${ENABLE_PKGCONFIG}")

message (STATUS "Testing Enabled     : ${ENABLE_TESTING}")
message (STATUS "Coverage Enabled    : ${ENABLE_COVERAGE}")
message (STATUS "Fuzzing Enabled     : ${ENABLE_FUZZING}")

message (STATUS "Python Found        : ${Python_FOUND}")
message (STATUS "Python Version      : ${Python_VERSION}")
message (STATUS "Python Enabled      : ${ENABLE_PYTHON_BINDING}")

message (STATUS "Binding Tests       : ${ENABLE_BINDING_TEST}")

message (STATUS "Building Examples   : ${BUILD_EXAMPLES}")

message (STATUS "Building Docs       : ${ENABLE_DOCUMENTATION}")

message (STATUS "Clang-tidy          : ${ENABLE_CLANG_TIDY}")
message (STATUS "Clang-format        : ${ENABLE_CLANG_FORMAT}")
message (STATUS "Clang-Version       : ${CLANGFORMAT_EXECUTABLE}")

message (STATUS "Cppcheck            : ${ENABLE_CPPCHECK}")
message (STATUS "Sanitizers          : ${ENABLE_SANITIZER}")
message ("")
