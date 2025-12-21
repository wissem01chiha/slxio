#[=======================================================================[.rst:
Testing
-----------------
#]=======================================================================]
include(CTest)
include(Module)

if(${PROJECT_NAME}_ENABLE_COVERAGE AND NOT ${PROJECT_NAME}_ENABLE_TESTING)
  message(FATAL_ERROR "coverage requires testing to be enabled")
endif()

if(${PROJECT_NAME}_ENABLE_BINDING_TEST AND NOT ${PROJECT_NAME}_ENABLE_TESTING)
  message(FATAL_ERROR "binding tests require testing to be enabled")
endif()

if(${PROJECT_NAME}_ENABLE_TESTING)
    enable_testing()
    find_modules(_module_dirs ${CMAKE_CURRENT_SOURCE_DIR})
    foreach(_module_dir IN  LISTS _module_dirs)
        set(_module_test_dir "${_module_dir}/Testing/Cxx")
        if(IS_DIRECTORY "${_module_test_dir}")
            add_subdirectory(${_module_test_dir})
        endif()
    endforeach()
    if(${PROJECT_NAME}_ENABLE_COVERAGE)
        if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
            add_compile_options(--coverage)
            add_link_options(--coverage)
        endif()
    endif()
endif()