// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef __Config_h__
#define __Config_h__

#include "PlatformMacro.h"

#ifdef PLATFORM_WINDOWS
#define PATH_SEP '\\'
#else
#define PATH_SEP '/'
#endif

#ifdef PLATFORM_WINDOWS
#include <direct.h>
#else
#include <unistd.h>
#endif

#define LOGGER_USE_SLOG

#ifdef __Cxxopts_h__
#error "Cxxopts.h should not be included before Config.h"
#endif
#undef USE_EXTERNAL_CXXOPTS

#ifdef __Doctest_h__
#error "Doctest.h should not be included before Config.h"
#endif
#undef USE_EXTERNAL_DOCTEST

#ifdef __Json_c_h__
#error "Json-c.h should not be included before Config.h"
#endif
#undef USE_EXTERNAL_JSON_C

#ifdef __Libpng_h__
#error "Libpng.h should not be included before Config.h"
#endif
#undef USE_EXTERNAL_LIBPNG

#ifdef __Libuv_h__
#error "Libuv.h should not be included before Config.h"
#endif
#undef USE_EXTERNAL_LIBUV

#ifdef __LibXML2_h__
#error "LibXML2.h should not be included before Config.h"
#endif
#undef USE_EXTERNAL_LIBXML2

#ifdef __Libzip_h__
#error "Libzip.h should not be included before Config.h"
#endif
#undef USE_EXTERNAL_LIBZIP

#ifdef __Loguru_h__
#error "Loguru.h should not be included before Config.h"
#endif
#undef USE_EXTERNAL_LOGURU

#ifdef __Pybind11_h__
#error "Pybind11.h should not be included before Config.h"
#endif
#undef USE_EXTERNAL_PYBIND11

#ifdef __Rapidcsv_h__
#error "Rapidcsv.h should not be included before Config.h"
#endif
#undef USE_EXTERNAL_RAPIDCSV

#ifdef __Slog_h__
#error "Slog.h should not be included before Config.h"
#endif
#undef USE_EXTERNAL_SLOG

#ifdef __Sol2_h__
#error "Sol2.h should not be included before Config.h"
#endif
#undef USE_EXTERNAL_SOL2

#ifdef __TinyXML2_h__
#error "TinyXML2.h should not be included before Config.h"
#endif
#undef USE_EXTERNAL_TINYXML2

#ifdef __Zlibconf_h__
#error "Zlibconf.h should not be included before Config.h"
#endif
#undef USE_EXTERNAL_ZLIB

#endif /* __Config_h__ */