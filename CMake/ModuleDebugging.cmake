#[==[.rst:
.. cmake:function:: module_print(<prefix>)

  Debugging function to print all parsed variables of a module.
  this function is only when module level debugging var is enabled
  it will print all the global variables set after parsing the 'slxio.module' file
  for the given module
  Note: This function should be called after calling ``scan_module_file``.

  .. code-block:: cmake

    module_print(_module)
#]==]
function (module_print module_prefix)
  
  message (STATUS "-------------------------------------------------------------------")
  message (STATUS "module_name                   = ${${module_prefix}_name}")
  message (STATUS "module_group                  = ${${module_prefix}_group}")
  message (STATUS "module_version                = ${${module_prefix}_version}")
  message (STATUS "module_description            = ${${module_prefix}_description}")
  message (STATUS "module_maintainer             = ${${module_prefix}_maintainer}")
  message (STATUS "module_license                = ${${module_prefix}_license}")
  message (STATUS "-------------------------------------------------------------------")

endfunction ()

function (Summary)

    message (STATUS "")
    message (STATUS "***************  Slxio Build Configuration Summary *******************")
    message (STATUS "")
    message (STATUS "Platform            : ${CMAKE_SYSTEM_NAME}")
    message (STATUS "Architecture        : ${CMAKE_SYSTEM_PROCESSOR}")
    message (STATUS "Compiler            : ${CMAKE_CXX_COMPILER_ID}")
    message (STATUS "Compiler Version    : ${CMAKE_CXX_COMPILER_VERSION}")
    message (STATUS "CMake Version       : ${CMAKE_VERSION}")

    message (STATUS "Simulink Version    : ${SLXIO_SIMULINK_VERSION}")

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

endfunction()