# SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
# SPDX-License-Identifier: BSD-2-Clause

cmake_minimum_required(VERSION 3.12...3.31)

project(tex LANGUAGES C)

list(APPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake")

include(CMakePackageConfigHelpers)
include(CMakeDependentOption)
include(CheckCCompilerFlag)
include(GNUInstallDirs)
include(CTest)

set(PROJECT_VERSION "0.1.0")
set(PROJECT_HOMEPAGE_URL "https://github.com/wissem01chiha/libtex")
set(PROJECT_DESCRIPTION "A C library for writing Latex Tex files.")

set(CPACK_PACKAGE_VENDOR "libtex")
set(CPACK_PACKAGE_DESCRIPTION_FILE ${CMAKE_SOURCE_DIR}/README.md)
set(CPACK_RESOURCE_FILE_LICENSE ${CMAKE_SOURCE_DIR}/LICENSE.md)
set(CPACK_RESOURCE_FILE_README ${CMAKE_SOURCE_DIR}/README.md)
set(CPACK_COMPONENTS_ALL Development Documentation Runtime)

set(CTEST_OUTPUT_ON_FAILURE TRUE)
set(CMAKE_C_VISIBILITY_PRESET hidden)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS ON)
set(CMAKE_C_STANDARD 11)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_SUPPRESS_DEVELOPER_WARNINGS ON)
set(CMAKE_WARN_DEPRECATED OFF CACHE BOOL "suppress cmake deprecation message")

option(LIBTEX_BUILD_SHARED "Build shared lib" OFF)
option(LIBTEX_BUILD_TOOLS "Build tools in the script directory" ON)
option(LIBTEX_BUILD_TESTS "Build tests" OFF)
option(LIBTEX_BUILD_REGRESS "Build regression tests" ON)
option(LIBTEX_BUILD_DOC "Build documentation" ON)
option(LIBTEX_INSTALL "Install libtex files" OFF)
option(LIBTEX_COVER "Enable coverage reporting" OFF)
option(LIBTEX_ASAN "Enable AddressSanitizer (ASan)" ON)

if (CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
    set(CMAKE_INSTALL_PREFIX "${CMAKE_CURRENT_BINARY_DIR}/install"
    CACHE PATH "default install path" FORCE)
endif()

add_subdirectory(third_party/libcsv)
add_subdirectory(third_party/cJSON)
add_subdirectory(third_party/TOONc)
if(LIBTEX_BUILD_TESTS)
    include(external/check)
endif()

list(APPEND tex_includes
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

set(tex_sources
    src/algorithm.c
    src/article.c
    src/bibliography.c
    src/book.c
    src/document.c
    src/environment.c
    src/equation.c
    src/figure.c
    src/language.c
    src/list.c
    src/section.c
    src/table.c
    src/get_date.c
    src/get_time.c
    src/theorem.c
    src/version.c
    src/beamer.c
    src/tex_strerr.c
    src/color_to_string.c
    src/plot.c
    src/element.c
    src/content.c
)

if(WIN32)
    list(APPEND tex_sources
        src/win/get_username.c
        src/win/tex_strdup.c
        src/win/get_filename.c
        src/win/tex_cwd.c
    )
else()
    list(APPEND tex_sources
        src/unix/get_username.c
        src/unix/tex_strdup.c
        src/unix/get_filename.c
        src/unix/tex_cwd.c
    )
endif() 

set(tex_test_sources
    test/test_document_fs_write.c
    test/test_document_set_title.c
    test/test_get_username.c
    test/test_get_time.c
    test/test_get_date.c
    test/test_document_add_fs_content.c
    test/test_section_add_content.c
    test/test_document_add_section.c
    test/test_section_write.c
    test/test_document_section_write.c
    test/test_figure_fs_create.c
    test/test_figure_write.c
    test/test_document_fs_write_default.c
    test/test_content.c
    test/test_document_regress.c
    test/test_list.c
)

set(tex_test_assets
    test/fixture/map_01.png
    test/fixture/map_02.png
    test/fixture/map_03.png
)

set(tex_flags
    -Wall
)

if(MSVC)
    list(APPEND tex_flags
        /W4
    )
endif()

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/texconf.h.in
${PROJECT_BINARY_DIR}/texconf.h)

if(LIBTEX_BUILD_SHARED)
    add_library(${PROJECT_NAME} SHARED ${tex_sources})
else()
    add_library(${PROJECT_NAME} STATIC ${tex_sources})
endif()

target_include_directories(${PROJECT_NAME}
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)
target_include_directories(${PROJECT_NAME}
    PUBLIC
        ${CMAKE_CURRENT_BINARY_DIR}
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/third_party
)
target_link_libraries(${PROJECT_NAME} PUBLIC cjson)
target_compile_options(${PROJECT_NAME} PRIVATE ${tex_flags})

if(LIBTEX_COVER AND NOT WIN32)
  set(LIBTEX_COVERAGE_COMPILE_FLAGS -g -O0 -fprofile-arcs -ftest-coverage)
  set(LIBTEX_COVERAGE_LINK_FLAGS --coverage)
  target_compile_options(${PROJECT_NAME} PUBLIC ${LIBTEX_COVERAGE_COMPILE_FLAGS})
  if(TARGET ${PROJECT_NAME})
    target_compile_options(${PROJECT_NAME} PUBLIC ${LIBTEX_COVERAGE_COMPILE_FLAGS})
    target_link_options(${PROJECT_NAME} PUBLIC ${LIBTEX_COVERAGE_LINK_FLAGS})
  endif()
endif()

if(LIBTEX_BUILD_TOOLS)
    add_executable(tex2pdf tools/tex2pdf.c)
    target_link_libraries(tex2pdf PUBLIC ${PROJECT_NAME})
    if(LIBTEX_COVER AND NOT(WIN32))
      target_compile_options(tex2pdf PRIVATE ${LIBTEX_COVERAGE_COMPILE_FLAGS})
      target_link_options(tex2pdf PRIVATE ${LIBTEX_COVERAGE_LINK_FLAGS})
    endif()
    add_dependencies(tex2pdf ${PROJECT_NAME})
endif()

if(LIBTEX_BUILD_TESTS)
    enable_testing()
    foreach(testfile ${tex_test_sources})
        get_filename_component(testname ${testfile} NAME_WE)
        add_executable(${testname} ${testfile})
        if(LIBTEX_COVER AND NOT(WIN32))
            target_compile_options(${testname} PRIVATE ${LIBTEX_COVERAGE_COMPILE_FLAGS})
            target_link_options(${testname} PRIVATE ${LIBTEX_COVERAGE_LINK_FLAGS})
        endif()
        add_dependencies(${testname} ${PROJECT_NAME})
        target_link_libraries(${testname} PRIVATE ${PROJECT_NAME} compat check cjson)
        target_compile_options(${testname} PRIVATE ${tex_flags})
        add_test(NAME ${testname} COMMAND ${testname})
    endforeach()
endif()

foreach(asset ${tex_test_assets})
    configure_file(
        ${CMAKE_CURRENT_SOURCE_DIR}/${asset}
        ${CMAKE_CURRENT_BINARY_DIR}/${asset}
        COPYONLY
    )
endforeach()

set(tex_pc "${CMAKE_CURRENT_BINARY_DIR}/tex.pc")
configure_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/tex.pc.in
    ${tex_pc}
    @ONLY
)

if(LIBTEX_INSTALL)
    if(LIBTEX_BUILD_SHARED)
        install(
            TARGETS ${PROJECT_NAME}
            COMPONENT Runtime
            EXPORT texSharedExport
            RUNTIME DESTINATION "${CMAKE_INSTALL_BINDIR}"
            ARCHIVE DESTINATION "${CMAKE_INSTALL_LIBDIR}"
            LIBRARY DESTINATION "${CMAKE_INSTALL_LIBDIR}"
        )
    else()
        install(
            TARGETS ${PROJECT_NAME}
            COMPONENT Runtime
            EXPORT texStaticExport
            RUNTIME DESTINATION "${CMAKE_INSTALL_BINDIR}"
            ARCHIVE DESTINATION "${CMAKE_INSTALL_LIBDIR}"
            LIBRARY DESTINATION "${CMAKE_INSTALL_LIBDIR}"
        )
    endif()

    install(
        FILES ${tex_headers}
        COMPONENT Development
        DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}/libtex"
    )

    configure_package_config_file(
        "${PROJECT_SOURCE_DIR}/cmake/tex-config.cmake.in"
        "${PROJECT_BINARY_DIR}/opc-config.cmake"
        INSTALL_DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/libtex
    )

    write_basic_package_version_file(
        "${CMAKE_BINARY_DIR}/libtex-config-version.cmake"
        VERSION ${PROJECT_VERSION}
        COMPATIBILITY SameMajorVersion
    )

    install(
        FILES ${CMAKE_BINARY_DIR}/libtex-config-version.cmake
        DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/libtex
    )
    install(
        FILES ${tex_pc}
        COMPONENT Development
        DESTINATION "${CMAKE_INSTALL_LIBDIR}/pkgconfig"
    )
    install(
        FILES ${CMAKE_SOURCE_DIR}/LICENSE.md
        COMPONENT Documentation
        DESTINATION "${CMAKE_INSTALL_DOCDIR}/libtex"
    )
endif()

set(CPACK_PACKAGE_VENDOR "Wissem Chiha")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "A C library for writing Latex Tex files.")
set(CMAKE_PROJECT_HOMEPAGE_URL "https://github.com/wissem01chiha/libtex")
set(CPACK_RESOURCE_FILE_LICENSE "${PROJECT_SOURCE_DIR}/LICENSE.md")
set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")
include(CPack)
