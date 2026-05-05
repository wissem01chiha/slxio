if(ZLIB_BUILD_STATIC)
    add_thirdparty_module(zlib
        ${PROJECT_SOURCE_DIR}/ThirdParty/zlib
        zlibstatic
    )
    export(TARGETS zlibstatic FILE ZLIBTargets.cmake)
endif()
if(ZLIB_BUILD_SHARED)
    add_thirdparty_module(zlib
        ${PROJECT_SOURCE_DIR}/ThirdParty/zlib
        zlib
    )
    export(TARGETS zlib FILE ZLIBTargets.cmake)
endif()