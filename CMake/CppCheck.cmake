#]=======================================================================]
# CppCheck
#
# Find and configure CppCheck for Syslink build
# This module defines the following cache variables:
#``CPPCHECK``
#    Enable or disable CppCheck support
# ste the variable 
#       CPPCHEK_FOUND
#       CPPCHECK_VERSION 
# define the follwing custom target if cppcheck is found
#       ``cppcheck``
# Import Behavior
#^^^^^^^^^^^^^^^^
# for WANTED > try to find and use if found otherwise skip
# for REQUIRED > try to find and use if not found error out
# for DISABLED > skip finding and using
# helper functions and utilties for building with CppCheck static analysis
# like setting CMAKE_CXX_CPPCHECK variable to enable CppCheck during build
# if not skip avoid building components that depend on and avoid downlding them
# or builidng becuse thay are too big to include as part of the repo
# if cppcheck is present , custom targte cppechk will be builded
#]=======================================================================]
set(${PROJECT_NAME}_CPPCHECK "WANTED" CACHE STRING "CppCheck support mode")
set_property(CACHE ${PROJECT_NAME}_CPPCHECK PROPERTY STRINGS WANTED REQUIRED DISABLED)
mark_as_advanced(${PROJECT_NAME}_CPPCHECK)

find_program(CPPCHECK cppcheck)
if(CPPCHECK)
    set(CPPCHECK_FOUND TRUE)
else()
    set(CPPCHECK_FOUND FALSE)
endif()

# cppcheck version now empty 
set(CPPCHECK_VERSION "")

if(CPPCHECK_FOUND)
    message(STATUS "CppCheck found: ${CPPCHECK}")
    if(${PROJECT_NAME}_CPPCHECK STREQUAL "WANTED")
        # set(CMAKE_CXX_CPPCHECK
        #         ${CPPCHECK}
        #         --suppress=syntaxError
        #         --enable=all
        #         --inconclusive)
    endif()
else()
    if(${PROJECT_NAME}_CPPCHECK STREQUAL "REQUIRED")
        message(FATAL_ERROR "CppCheck requested but executable not found")
    endif()
endif()

