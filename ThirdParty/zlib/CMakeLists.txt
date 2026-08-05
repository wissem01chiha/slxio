set(ZLIB_BUILD_TESTING ${SLXIO_BUILD_THIRDPARTY_TESTING})

add_subdirectory(src)

if(ZLIB_BUILD_STATIC)
    export(TARGETS zlibstatic FILE ZLIBTargets.cmake)
endif()
if(ZLIB_BUILD_SHARED)
    export(TARGETS zlib APPEND FILE ZLIBTargets.cmake)
endif()

