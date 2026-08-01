find_package(LibXml2 QUIET)
if(LibXml2_FOUND)
    message(STATUS "libxml2 found: ${LIBXML2_INCLUDE_DIR}")
else()
    message(STATUS "libxml2 not found. Downloading and building from source...")
    include(FetchContent)
    FetchContent_Declare(
        libxml2
        URL https://gitlab.gnome.org/GNOME/libxml2/-/archive/v2.15.2/libxml2-v2.15.2.zip
    )
    set(LIBXML2_WITH_ICONV OFF)
    set(LIBXML2_WITH_HTML  OFF)
    set(LIBXML2_WITH_PROGRAMS OFF)
    set(LIBXML2_WITH_TESTS OFF)
    set(LIBXML2_WITH_MODULES OFF)
    FetchContent_MakeAvailable(libxml2)
    set(LIBXML2_INCLUDE_DIR ${libxml2_SOURCE_DIR}/include)
    message(STATUS "libxml2 has been fetched and is available at ${libxml2_SOURCE_DIR}")
endif()
