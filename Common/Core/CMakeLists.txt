add_module(
  MODULE_NAME Core
  MODULE_GROUP Common
  LIBRARY_NAME CommonCore
  MODULE_DESCRIPTION "Core Utilities Module"
  MODULE_MAINTAINER "Wissem Chiha"
  MODULE_SPDX_LICENSE_IDENTIFIER "Apache-2.0"
  MODULE_SPDX_COPYRIGHT_TEXT "Copyright (c) 2025-2026 Wissem Chiha"
  MODULE_ENABLE_BUILD TRUE
  MODULE_ENABLE_TESTS TRUE
  MODULE_CONFIG_HEADERS
    Config.h.in
  MODULE_INSTALL_HEADERS
  MODULE_INSTALL_TARGETS
  MODULE_INSTALL_LICENSES
  MODULE_INSTALL_DOCS
  MODULE_CLASSES
    Timer.cxx
    Version.cxx
    Logger.cxx
    ErrorHandler.cxx
  MODULE_HEADERS
    Timer.h
    Version.h
    Logger.h
    Compiler.h
    ErrorHandler.h
    SimulinkVersion.h
    VersionMacro.h
    APIExportMacro.h
    ABINamespaceMacro.h
  MODULE_PCH_HEADERS
    CorePCH.h
  MODULE_SOURCES
  MODULE_TEST_SOURCE_DIR
    Testing/Cxx
  MODULE_TEST_DATA_SOURCE_DIR
    Testing/Data
  MODULE_TEST_DATA_SOURCES
  MODULE_TEST_SOURCES
    TestTimer.cxx
  MODULE_PUBLIC_DEPENDS
    loguru
    uv_a
    slog
    libzip::zip
  MODULE_TEST_DEPENDS
    doctest_with_main
)
