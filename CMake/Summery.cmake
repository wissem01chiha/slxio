message (STATUS "")
message (STATUS "***************  Slxio Build Configuration Summary *******************")
message (STATUS "")
message (STATUS "Platform            : ${CMAKE_SYSTEM_NAME}")
message (STATUS "Architecture        : ${CMAKE_SYSTEM_PROCESSOR}")
message (STATUS "Compiler            : ${CMAKE_CXX_COMPILER_ID}")
message (STATUS "Compiler Version    : ${CMAKE_CXX_COMPILER_VERSION}")

message (STATUS "Build Type          : ${CMAKE_BUILD_TYPE}")
message (STATUS "Shared Libs         : ${SLXIO_BUILD_SHARED}")

message (STATUS "Version             : ${PROJECT_VERSION}")

message (STATUS "Install             : ${SLXIO_INSTALL}")
message (STATUS "Install prefix      : ${CMAKE_INSTALL_PREFIX}")
message (STATUS "Package Config      : ${SLXIO_PKGCONFIG}")

message (STATUS "Testing Enabled     : ${SLXIO_BUILD_TESTS}")
message (STATUS "Coverage Enabled    : ${SLXIO_COVERAGE}")

message ( STATUS "AddressSanitizer    : ${SLXIO_ASAN}")
message ( STATUS "MemorySanitizer     : ${SLXIO_MSAN}")
message ( STATUS "ThreadSanitizer     : ${SLXIO_TSAN}")
message ( STATUS "UBSanitizer         : ${SLXIO_UBSAN}")

message (STATUS "Python Found        : ${Python_FOUND}")
message (STATUS "Python Version      : ${Python_VERSION}")
message (STATUS "Python Enabled      : ${SLXIO_BUILD_PYTHON}")

message (STATUS "Building Examples   : ${SLXIO_BUILD_EXAMPLES}")

message (STATUS "Building Docs       : ${SLXIO_DOCUMENTATION}")

message (STATUS "Clang-tidy          : ${SLXIO_ENABLE_CLANG_TIDY}")
message (STATUS "Clang-Version       : ${CLANGFORMAT_EXECUTABLE}")
message (STATUS "Clang-found         : ${CLANGFORMAT_FOUND}")
message (STATUS "Cppcheck            : ${SLXIO_ENABLE_CPPCHECK}")
message (STATUS " ")
message (STATUS "**********************************************************************")
message (STATUS " ")
