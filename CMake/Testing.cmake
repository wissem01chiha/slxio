#[=======================================================================[.rst:
Testing
-----------------
Main handler for project testing. 
#]=======================================================================]
include(CTest)
include(Module)

#-----------------------------------------------------------------------------
option(${PROJECT_NAME}_ENABLE_TESTING "build tests" ON)
mark_as_advanced(${PROJECT_NAME}_ENABLE_TESTING)

option(${PROJECT_NAME}_ENABLE_COVERAGE "enable code coverage" OFF)
mark_as_advanced(${PROJECT_NAME}_ENABLE_COVERAGE)

option(${PROJECT_NAME}_ENABLE_BINDING_TEST "build binding interface tests" ON)
mark_as_advanced(${PROJECT_NAME}_ENABLE_BINDING_TEST)
#-----------------------------------------------------------------------------

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