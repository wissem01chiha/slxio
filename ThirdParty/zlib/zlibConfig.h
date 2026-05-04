

set(_ZLIB_supported_components "shared" "static")

if(ZLIB_FIND_COMPONENTS)
    foreach(_comp )
        if(NOT _comp IN_LIST _ZLIB_supported_components)
            set(ZLIB_FOUND False)
            set(ZLIB_NOT_FOUND_MESSAGE "Unsupported component: ")
        endif(NOT _comp IN_LIST _ZLIB_supported_components)

        include("/home/wissem/slxio/ThirdParty/zlib/ZLIB-.cmake")
    endforeach(_comp )
else(ZLIB_FIND_COMPONENTS)
    foreach(_component_config IN LISTS _ZLIB_supported_components)
        include("/home/wissem/slxio/ThirdParty/zlib/ZLIB-.cmake")
    endforeach(_component_config IN LISTS _ZLIB_supported_components)
endif(ZLIB_FIND_COMPONENTS)
