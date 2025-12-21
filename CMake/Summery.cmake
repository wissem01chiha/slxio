#[=======================================================================[.rst:
Summery
-----------------
#]=======================================================================]
message("")  
message("***************  ${PROJECT_NAME} Build Configuration Summary *******************")

message( STATUS "Platform            : ${CMAKE_SYSTEM_NAME}")
message( STATUS "Architecture        : ${CMAKE_SYSTEM_PROCESSOR}")
message( STATUS "Compiler            : ${CMAKE_CXX_COMPILER_ID}")
message( STATUS "Compiler Version    : ${CMAKE_CXX_COMPILER_VERSION}")

message( STATUS "Build Type          : ${CMAKE_BUILD_TYPE}")
message( STATUS "Shared Libs         : ${BUILD_SHARED_LIBS}")
message( STATUS "Top Level Build     : ${TOP_LEVEL_BUILD}")

message( STATUS "Version             : ${PROJECT_VERSION}")

message( STATUS "Namespace Name      : ${NAMESPACE_NAME}")
message(STATUS  "ABI Namespace Name  : ${ABI_NAMESPACE_NAME}")

message(STATUS  "Install             : ${ENABLE_INSTALL}")
message( STATUS "Install prefix      : ${CMAKE_INSTALL_PREFIX}")
message( STATUS "Package Config      : ${ENABLE_PKGCONFIG}")

message( STATUS "HDF5                : ${ENABLE_HDF5}")

message( STATUS "OpenMP              : ${ENABLE_OPENMP}")
message( STATUS "OpenMP Version      : ${OpenMP_C_VERSION}")
message( STATUS "AVX                 : ${ENABLE_AVX}")

message( STATUS "Testing             : ${${PROJECT_NAME}_ENABLE_TESTING}")
message( STATUS "Coverage            : ${${PROJECT_NAME}_ENABLE_COVERAGE}")
message( STATUS "Fuzzing             : ${ENABLE_FUZZING}")

message(STATUS  "Python Binding      : ${ENABLE_PYTHON_BINDING}")
message(STATUS  "Python Version      : ${Python_VERSION}")
message( STATUS "Binding Tests       : ${${PROJECT_NAME}_ENABLE_BINDING_TEST}")

message( STATUS "Examples            : ${BUILD_EXAMPLES}")

message( STATUS "Building doc        : ${ENABLE_DOCUMENTATION}")

message( STATUS "Clang-tidy          : ${ENABLE_CLANG_TIDY}")
message(STATUS  "Clang-format        : ${USE_CLANG_FORMAT}")
message(STATUS  "Clang-Version       : ${CLANGFORMAT_EXECUTABLE}")
message( STATUS "Cppcheck            : ${ENABLE_CPPCHECK}")
message( STATUS "Sanitizers          : ${ENABLE_SANITIZER}")
message("")  
