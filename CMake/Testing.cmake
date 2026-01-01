include(CTest)
include(ModuleTesting)

# Tests are disabled by default in Release builds with MSVC
if(CMAKE_BUILD_TYPE STREQUAL "Release")
    return()
endif()

# CTest Based Configuration 
set(CTEST_OUTPUT_ON_FAILURE TRUE)

if(ENABLE_COVERAGE AND NOT ENABLE_TESTING)
  message(FATAL_ERROR "coverage requires testing to be enabled")
endif()

if(ENABLE_BINDING_TEST AND NOT ENABLE_TESTING)
  message(FATAL_ERROR "binding tests require testing to be enabled")
endif()

if(ENABLE_TESTING)
    enable_testing()
    find_modules(_module_dirs ${CMAKE_CURRENT_SOURCE_DIR})

    foreach(_module_dir IN  LISTS _module_dirs)
        scan_module_file(_module  "${_module_dir}/Module.txt")
        if(${_module_enable_test} STREQUAL "FALSE")
            continue()
        endif()
        set(_module_test_dir "${_module_dir}/Testing/Cxx")
        if(IS_DIRECTORY "${_module_test_dir}")
            add_subdirectory(${_module_test_dir})
        endif()
    endforeach()

    if(ENABLE_COVERAGE)

        if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
            add_compile_options(--coverage)
            add_link_options(--coverage)
        endif()

        if(ENABLE_COVERAGE AND MSVC)
            add_compile_options(/Zi)
            add_link_options(/DEBUG /PROFILE)
        endif()

    endif()
endif()