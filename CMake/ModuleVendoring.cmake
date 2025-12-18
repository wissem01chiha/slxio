#[=======================================================================[.rst:
# Verdoring options : ${PROJECT_NAME}_USE_VENDORED_EXTERNAL_MODULE has 3 values
# if FORCE_LOCAL is ON, it will always use local modules
# if "FORCE_VENDORED" is ON, it will always use vendored modules for all 3party libs
# if "FORCE_VENDORED" is OFF, and "FORCE_LOCAL" is OFF, it will use vendored modules only if not available locally
# and use the avliable ones locally, this is the default behavior
#]=======================================================================]
include(CMakeDependentOption)
option("${PROJECT_NAME}_USE_VENDORED_EXTERNAL_MODULE" 
"Use vendored third party libraries in ${PROJECT_NAME}" ON)
mark_as_advanced("${PROJECT_NAME}_USE_VENDORED_EXTERNAL_MODULE")


function (use_if_available module)
    find_package(${module} QUIET)
    if(NOT ${module}_FOUND)
        add_subdirectory(ThirdParty/${module})
    endif()
endfunction()
