#[=======================================================================[.rst:
# Verdoring options : ${PROJECT_NAME}_USE_VENDORED_EXTERNAL_MODULE has 3 values
# if FORCE_LOCAL is ON, it will always use local modules
# if "FORCE_VENDORED" is ON, it will always use vendored modules for all 3party libs
# if "FORCE_VENDORED" is OFF, and "FORCE_LOCAL" is OFF, it will use vendored modules only if not available locally
# and use the avliable ones locally, this is the default behavior
#]=======================================================================]

include(ModuleRemote)
find_package(JSON-C)
find_package(LibXml2)
find_package(Slog)
find_package(Loguru)
find_package(Doctest)
find_package(Matlab)
find_package(Hdf5)
find_package(OpenMP)

function (use_if_available module)
    find_package(${module} QUIET)
    if(NOT ${module}_FOUND)
        add_subdirectory(ThirdParty/${module})
    endif()
endfunction()
