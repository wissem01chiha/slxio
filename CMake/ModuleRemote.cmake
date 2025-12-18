# helpers to fecth remote modules/third party libraries
# this file define utilities for fecthing remote modules/third party libraries
# either using CPM or git submodules

include(CMakeDependentOption)

set(SYSLINK_FORCE_LOCAL_MODULES OFF CACHE BOOL "Force using local modules even if remote is available")

set(SYSLINK_USE_CPM ON CACHE BOOL "Use CPM to fetch remote modules/third party libraries")
if(SYSLINK_USE_CPM)
    
endif()
set(SYSLINK_USE_GIT_SUBMODULES OFF CACHE BOOL "Use git submodules to fetch remote modules/third party libraries"
)