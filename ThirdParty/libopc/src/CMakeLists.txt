# SPDX-FileCopyrightText: Copyright (c) 2010/2011, Florian Reuter
# SPDX-FileCopyrightText: Copyright (c) 2026, Wissem Chiha
# SPDX-License-Identifier: BSD-3-Clause
cmake_minimum_required(VERSION 3.12...3.31)


project(libopc LANGUAGES C)

# ============================================================================
# Properties
# ============================================================================
set(PROJECT_VERSION "1.0.0")
set(PROJECT_HOMEPAGE_URL "https://github.com/freuter/libopc")
set(PROJECT_DESCRIPTION "Open Packaging Convention Library")

# ============================================================================
# CPack
# ============================================================================
set(CPACK_PACKAGE_VENDOR "libopc-project")
set(CPACK_PACKAGE_DESCRIPTION_FILE ${CMAKE_SOURCE_DIR}/README.md)
set(CPACK_RESOURCE_FILE_LICENSE ${CMAKE_SOURCE_DIR}/LICENSE)
set(CPACK_RESOURCE_FILE_README ${CMAKE_SOURCE_DIR}/README.md)
set(CPACK_COMPONENTS_ALL Development Documentation Runtime)

# ============================================================================
# CTest
# ============================================================================
set (CTEST_OUTPUT_ON_FAILURE TRUE)

# ============================================================================
# CMake
# ============================================================================
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_C_VISIBILITY_PRESET hidden)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS ON)
set(CMAKE_C_STANDARD 11)

# ============================================================================
# Configuration
# ============================================================================
option(LIBOPC_BUILD_TESTING "Enable libopc Examples as tests" OFF)
option(BUILD_SHARED_LIBS "Enable building libopc shared library" OFF)
option(LIBOPC_INSTALL "Enable installation of libopc" ON)
option(LIBOPC_BUILD_SAMPLES "Enable building libopc sample scripts" ON)

option(ASAN "Enable AddressSanitizer (ASan)" OFF)

get_property(IS_MULTI GLOBAL PROPERTY GENERATOR_IS_MULTI_CONFIG)

if(NOT DEFINED CMAKE_BUILD_TYPE AND NOT IS_MULTI)
    message(STATUS "No CMAKE_BUILD_TYPE set -- using Release")
    set(CMAKE_BUILD_TYPE Release)
endif(NOT DEFINED CMAKE_BUILD_TYPE AND NOT IS_MULTI)

if (CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
    set(CMAKE_INSTALL_PREFIX "${CMAKE_CURRENT_BINARY_DIR}/install" CACHE PATH "Default install path" FORCE)
endif()
# ============================================================================
# Include
# ============================================================================
include(CheckCSourceCompiles)
include(CheckFunctionExists)
include(CheckIncludeFile)
include(CMakePackageConfigHelpers)
include(CheckTypeSize)
include(CheckCCompilerFlag)
include(CMakeDependentOption)
include(GNUInstallDirs)

# ============================================================================
# Flags
# ============================================================================
if(ASAN)
    if(CMAKE_C_COMPILER_ID MATCHES "AppleClang|GNU|Clang")
        set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fno-omit-frame-pointer -fsanitize=address")
        set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -fno-omit-frame-pointer -fsanitize=address")
        set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fno-omit-frame-pointer -fsanitize=address")
    elseif(MSVC)
        set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} /fsanitize=address")
    endif()
endif()

# ============================================================================
# Dependencies
# ============================================================================
include(cmake/external/zlib.cmake)
include(cmake/external/libxml2.cmake)
add_subdirectory(third_party/slog)

# ============================================================================
# Testing
# ============================================================================
if(LIBOPC_BUILD_TESTING)
    include(CTest)
    enable_testing()
    include(cmake/external/unity.cmake)
    list(APPEND opc_test_libraries opc unity)
endif()

# ============================================================================
# Libraries
# ============================================================================
list(APPEND opc_libraries LibXml2::LibXml2)
list(APPEND opc_libraries slog)
if(ZLIB_FOUND)
    list(APPEND opc_libraries ZLIB::ZLIB)
else()
    list(APPEND opc_libraries ZLIB::ZLIBSTATIC)
endif()
if(BUILD_SHARED_LIBS)
    List(APPEND mce_libraries plib LibXml2::LibXml2)
else()
    List(APPEND mce_libraries plib_a LibXml2::LibXml2)
endif()

# ============================================================================
# Include Directories
# ============================================================================
list(APPEND opc_includes
    ${LIBXML2_INCLUDE_DIR}
    ${UNITY_INCLUDE_DIR}
    ${ZLIB_INCLUDE_DIRS}
    third_party/slog/src
)
list(APPEND mce_includes
    ${LIBXML2_INCLUDE_DIR}
    third_party/slog/src
)

# ============================================================================
# Source Files
# ============================================================================
set(opc_sources
    opc/container.c
    opc/file.c
    opc/helper.c
    opc/inputstream.c
    opc/opc.c
    opc/outputstream.c
    opc/part.c
    opc/properties.c
    opc/relation.c
    opc/xmlreader.c
    opc/xmlwriter.c
    opc/zip.c
)

set(opc_headers
    opc/config.h
    opc/container.h
    opc/file.h
    opc/helper.h
    opc/inputstream.h
    opc/internal.h
    opc/opc.h
    opc/outputstream.h
    opc/part.h
    opc/properties.h
    opc/relation.h
    opc/xmlreader.h
    opc/xmlwriter.h
    opc/zip.h
)

set(mce_sources
    mce/helper.c
    mce/textreader.c
    mce/textwriter.c
)

set(mce_headers
    mce/config.h
    mce/helper.h
    mce/textreader.h
    mce/textwriter.h
)

set(plib_sources
    plib/plib.c
)

set(plib_headers
    plib/plib.h
)

set(sample_sources
    sample/main.c
    sample/mce_extract.c
    sample/mce_read.c
    sample/mce_schema.c
    sample/mce_write.c
    sample/mcepp.c
    sample/opc_album.c
    sample/opc_changes.c
    sample/opc_dump.c
    sample/opc_extract.c
    sample/opc_generate.c
    sample/opc_helloworld.c
    sample/opc_image.c
    sample/opc_mem.c
    sample/opc_part.c
    sample/opc_proc.c
)

set(test_sources
    test/
)

set(fuzz_sources
    fuzz/
)

# ============================================================================
# Targets
# ============================================================================
if(BUILD_SHARED_LIBS)
    add_library(opc SHARED ${opc_sources})
    set_target_properties(opc PROPERTIES OUTPUT_NAME "opc")
    target_include_directories(opc
    PUBLIC
        $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
    PRIVATE
        $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>)
    target_include_directories(opc PUBLIC ${opc_includes})
    target_link_libraries(opc ${opc_libraries})
    target_compile_options(opc PRIVATE ${opc_cflags})
endif()

add_library(opc_a STATIC ${opc_sources})
set_target_properties(opc_a PROPERTIES OUTPUT_NAME "opc")
target_include_directories(opc_a
  PUBLIC
    $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
  PRIVATE
    $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>
)
target_include_directories(opc_a PUBLIC ${opc_includes})
target_link_libraries(opc_a ${opc_libraries})
target_compile_options(opc_a PRIVATE ${opc_cflags})

add_library(plib_a STATIC ${plib_sources})
set_target_properties(plib_a PROPERTIES OUTPUT_NAME "plib")
target_include_directories(plib_a
  PUBLIC
    $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
  PRIVATE
    $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>
)

add_library(mce_a STATIC ${mce_sources})
set_target_properties(mce_a PROPERTIES OUTPUT_NAME "mce")
target_include_directories(mce_a
  PUBLIC
    $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
  PRIVATE
    $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>
)
target_include_directories(mce_a PUBLIC ${mce_includes})
target_link_libraries(mce_a ${mce_libraries})
target_compile_options(mce_a PRIVATE ${mce_cflags})

if(LIBOPC_BUILD_SAMPLES)
    foreach(sample_source ${sample_sources})
        get_filename_component(sample_source_name ${sample_source} NAME_WE)
        add_executable(${sample_source_name} ${sample_source})
        target_include_directories(${sample_source_name} PRIVATE ${opc_includes})
        target_link_libraries(${sample_source_name} PRIVATE opc_a mce_a plib_a)
        add_dependencies(${sample_source_name} opc_a mce_a plib_a)
    endforeach()
endif()

if(LIBOPC_BUILD_TESTING)

endif()

# ============================================================================
# Pkg-Config
# ============================================================================
set(OPC_PC "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}.pc")
configure_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/${PROJECT_NAME}.pc.in
    ${OPC_PC}
    @ONLY
)

# ============================================================================
# Install
# ============================================================================
if(LIBOPC_INSTALL)
    if(BUILD_SHARED_LIBS)
    install(
        TARGETS opc
        COMPONENT Runtime
        EXPORT opcSharedExport
        RUNTIME DESTINATION "${CMAKE_INSTALL_BINDIR}"
        ARCHIVE DESTINATION "${CMAKE_INSTALL_LIBDIR}"
        LIBRARY DESTINATION "${CMAKE_INSTALL_LIBDIR}"
    )
    install(
        TARGETS mce
        COMPONENT Runtime
        EXPORT mceSharedExport
        RUNTIME DESTINATION "${CMAKE_INSTALL_BINDIR}"
        ARCHIVE DESTINATION "${CMAKE_INSTALL_LIBDIR}"
        LIBRARY DESTINATION "${CMAKE_INSTALL_LIBDIR}"
    )
    install(
        TARGETS plib
        COMPONENT Runtime
        EXPORT plibSharedExport
        RUNTIME DESTINATION "${CMAKE_INSTALL_BINDIR}"
        ARCHIVE DESTINATION "${CMAKE_INSTALL_LIBDIR}"
        LIBRARY DESTINATION "${CMAKE_INSTALL_LIBDIR}"
    )
    else()
    install(
        TARGETS opc_a
        COMPONENT Development
        EXPORT opcStaticExport
        RUNTIME DESTINATION "${CMAKE_INSTALL_BINDIR}"
        ARCHIVE DESTINATION "${CMAKE_INSTALL_LIBDIR}"
        LIBRARY DESTINATION "${CMAKE_INSTALL_LIBDIR}"
    )
    install(
        TARGETS mce_a
        COMPONENT Development
        EXPORT mceStaticExport
        RUNTIME DESTINATION "${CMAKE_INSTALL_BINDIR}"
        ARCHIVE DESTINATION "${CMAKE_INSTALL_LIBDIR}"
        LIBRARY DESTINATION "${CMAKE_INSTALL_LIBDIR}"
    )
    install(
        TARGETS plib_a
        COMPONENT Development
        EXPORT plibStaticExport
        RUNTIME DESTINATION "${CMAKE_INSTALL_BINDIR}"
        ARCHIVE DESTINATION "${CMAKE_INSTALL_LIBDIR}"
        LIBRARY DESTINATION "${CMAKE_INSTALL_LIBDIR}"
    )
    endif()

    install(
        FILES ${opc_headers}
        COMPONENT Development
        DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}/libopc/opc"
    )
    install(
        FILES ${mce_headers}
        COMPONENT Development
        DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}/libopc/mce"
    )
    install(
        FILES ${plib_headers}
        COMPONENT Development
        DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}/libopc/plib"
    )

    configure_package_config_file(
    "${PROJECT_SOURCE_DIR}/cmake/opc-config.cmake.in"
    "${PROJECT_BINARY_DIR}/opc-config.cmake"
    INSTALL_DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/libopc
    )

    write_basic_package_version_file(
    "${CMAKE_BINARY_DIR}/libopc-config-version.cmake"
    VERSION ${PROJECT_VERSION}
    COMPATIBILITY SameMajorVersion
    )

    install(
        FILES ${CMAKE_BINARY_DIR}/libopc-config-version.cmake
        DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/libopc
    )
    install(
    FILES ${OPC_PC}
    COMPONENT Development
    DESTINATION "${CMAKE_INSTALL_LIBDIR}/pkgconfig"
    )
    install(
        FILES ${CMAKE_SOURCE_DIR}/LICENSE.txt
        COMPONENT Documentation
        DESTINATION "${CMAKE_INSTALL_DOCDIR}/libopc"
    )
endif()

# ============================================================================
# Package
# ============================================================================
set(CPACK_PACKAGE_VENDOR "Florian Reuter")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Open Packaging Convention Library")
set(CMAKE_PROJECT_HOMEPAGE_URL "https://github.com/freuter/libopc")
set(CPACK_RESOURCE_FILE_LICENSE "${PROJECT_SOURCE_DIR}/LICENSE.txt")
set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")
include(CPack)
