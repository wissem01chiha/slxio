# libxml2-config.cmake
# --------------------
#
# Libxml2 cmake module.
# This module sets the following variables:
#
# ::
#
#   LIBXML2_INCLUDE_DIR        - Directory where LibXml2 headers are located.
#   LIBXML2_INCLUDE_DIRS       - list of the include directories needed to use LibXml2.
#   LIBXML2_LIBRARY            - path to the LibXml2 library.
#   LIBXML2_LIBRARIES          - xml2 libraries to link against.
#   LIBXML2_DEFINITIONS        - the compiler switches required for using LibXml2.
#   LIBXML2_VERSION_MAJOR      - The major version of libxml2.
#   LIBXML2_VERSION_MINOR      - The minor version of libxml2.
#   LIBXML2_VERSION_PATCH      - The patch version of libxml2.
#   LIBXML2_VERSION_STRING     - version number as a string (ex: "2.3.4")
#   LIBXML2_MODULES            - whether libxml2 has dso support
#   LIBXML2_XMLLINT_EXECUTABLE - path to the XML checking tool xmllint coming with LibXml2

include("/home/wissem/slxio/ThirdParty/libxml2/libxml2-export.cmake")



set(LIBXML2_VERSION_MAJOR  )
set(LIBXML2_VERSION_MINOR  )
set(LIBXML2_VERSION_PATCH  )
set(LIBXML2_VERSION_STRING "0.1.0")
set(LIBXML2_INSTALL_PREFIX )
set(LIBXML2_INCLUDE_DIR    //libxml2)
set(LIBXML2_LIBRARY_DIR    /)

macro(select_library_location target basename)
    if(TARGET )
        foreach(property IN ITEMS IMPORTED_LOCATION IMPORTED_IMPLIB)
            get_target_property(__DEBUG  _DEBUG)
            get_target_property(__MINSIZEREL  _MINSIZEREL)
            get_target_property(__NOCONFIG  _NOCONFIG)
            get_target_property(__RELEASE  _RELEASE)
            get_target_property(__RELWITHDEBINFO  _RELWITHDEBINFO)

            if(__DEBUG AND __RELEASE)
                set(_LIBRARY debug  optimized )
            elseif(__DEBUG AND __RELWITHDEBINFO)
                set(_LIBRARY debug  optimized )
            elseif(__DEBUG AND __MINSIZEREL)
                set(_LIBRARY debug  optimized )
            elseif(__RELEASE)
                set(_LIBRARY )
            elseif(__RELWITHDEBINFO)
                set(_LIBRARY )
            elseif(__MINSIZEREL)
                set(_LIBRARY )
            elseif(__DEBUG)
                set(_LIBRARY )
            elseif(__NOCONFIG)
                set(_LIBRARY )
            endif()
        endforeach()
    endif()
endmacro()

macro(select_executable_location target basename)
    if(TARGET )
        get_target_property(_IMPORTED_LOCATION_DEBUG  IMPORTED_LOCATION_DEBUG)
        get_target_property(_IMPORTED_LOCATION_MINSIZEREL  IMPORTED_LOCATION_MINSIZEREL)
        get_target_property(_IMPORTED_LOCATION_NOCONFIG  IMPORTED_LOCATION_NOCONFIG)
        get_target_property(_IMPORTED_LOCATION_RELEASE  IMPORTED_LOCATION_RELEASE)
        get_target_property(_IMPORTED_LOCATION_RELWITHDEBINFO  IMPORTED_LOCATION_RELWITHDEBINFO)

        if(_IMPORTED_LOCATION_RELEASE)
            set(_EXECUTABLE )
        elseif(_IMPORTED_LOCATION_RELWITHDEBINFO)
            set(_EXECUTABLE )
        elseif(_IMPORTED_LOCATION_MINSIZEREL)
            set(_EXECUTABLE )
        elseif(_IMPORTED_LOCATION_DEBUG)
            set(_EXECUTABLE )
        elseif(_IMPORTED_LOCATION_NOCONFIG)
            set(_EXECUTABLE )
        endif()
    endif()
endmacro()

select_library_location(LibXml2::LibXml2 LIBXML2)
select_executable_location(LibXml2::xmlcatalog LIBXML2_XMLCATALOG)
select_executable_location(LibXml2::xmllint LIBXML2_XMLLINT)

set(LIBXML2_LIBRARIES /usr/lib/x86_64-linux-gnu/libxml2.so)
set(LIBXML2_INCLUDE_DIRS /usr/include/libxml2)

include(CMakeFindDependencyMacro)

set(LIBXML2_SHARED )
set(LIBXML2_WITH_ICONV )
set(LIBXML2_WITH_THREADS )
set(LIBXML2_WITH_ICU )
set(LIBXML2_WITH_ZLIB )

if(NOT LIBXML2_SHARED)
    set(LIBXML2_DEFINITIONS -DLIBXML_STATIC)

    if(LIBXML2_WITH_ICONV)
        find_dependency(Iconv)
        list(APPEND LIBXML2_LIBRARIES    )
        if(NOT Iconv_FOUND)
            set(_FOUND FALSE)
            set(_NOT_FOUND_MESSAGE "Iconv dependency was not found")
            return()
        endif()
    endif()

    if(LIBXML2_WITH_THREADS)
        find_dependency(Threads)
        list(APPEND LIBXML2_LIBRARIES )
        if(NOT Threads_FOUND)
            set(_FOUND FALSE)
            set(_NOT_FOUND_MESSAGE "Threads dependency was not found")
            return()
        endif()
    endif()

    if(LIBXML2_WITH_ICU)
        find_dependency(ICU COMPONENTS data i18n uc)
        list(APPEND LIBXML2_LIBRARIES    )
        if(NOT ICU_FOUND)
            set(_FOUND FALSE)
            set(_NOT_FOUND_MESSAGE "ICU dependency was not found")
            return()
        endif()
    endif()

    if(LIBXML2_WITH_ZLIB)
        find_dependency(ZLIB)
        list(APPEND LIBXML2_LIBRARIES    )
        if(NOT ZLIB_FOUND)
            set(_FOUND FALSE)
            set(_NOT_FOUND_MESSAGE "ZLIB dependency was not found")
            return()
        endif()
    endif()

    if(UNIX)
        list(APPEND LIBXML2_LIBRARIES m)
    endif()

    if(WIN32)
        list(APPEND LIBXML2_LIBRARIES Bcrypt)
    endif()
endif()

# whether libxml2 has dso support
set(LIBXML2_MODULES )

mark_as_advanced(LIBXML2_LIBRARY LIBXML2_XMLCATALOG_EXECUTABLE LIBXML2_XMLLINT_EXECUTABLE)
