// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef __ErrorMapTypes_h__
#define __ErrorMapTypes_h__

#include "ErrorTypes.h"

#ifdef __cplusplus
extern "C"
{
#endif

#define SLXIO_NAME_MAP(XX)                                                     \
  XX(Common, "Common")                                                         \
  XX(Documentation, "Documentation")                                           \
  XX(Examples, "Examples")                                                     \
  XX(IO, "IO")                                                                 \
  XX(Simulink, "Simulink")                                                     \
  XX(Testing, "Testing")                                                       \
  XX(ThirdParty, "ThirdParty")                                                 \
  XX(Utilities, "Utilities")                                                   \
  XX(Visualization, "Visualization")                                           \
  XX(Core, "Core")                                                             \
  XX(System, "System")                                                         \
  XX(Data, "Data")                                                             \
  XX(Doxygen, "Doxygen")                                                       \
  XX(Json, "Json")                                                             \
  XX(Slx, "Slx")                                                               \
  XX(Annotation, "Annotation")                                                 \
  XX(Configuration, "Configuration")                                           \
  XX(Layout, "Layout")                                                         \
  XX(Library, "Library")                                                       \
  XX(Misc, "Misc")                                                             \
  XX(Stateflow, "Stateflow")                                                   \
  XX(Cli, "Cli")                                                               \
  XX(Python, "Python")                                                         \
  XX(Sphnix, "Sphnix")                                                         \
  XX(Java, "Java")                                                             \
  XX(cxxopts, "cxxopts")                                                       \
  XX(doctest, "doctest")                                                       \
  XX(json_c, "json_c")                                                         \
  XX(libpng, "libpng")                                                         \
  XX(libuv, "libuv")                                                           \
  XX(libxml2, "libxml2")                                                       \
  XX(libzip, "libzip")                                                         \
  XX(loguru, "loguru")                                                         \
  XX(pybind11, "pybind11")                                                     \
  XX(rapidcsv, "rapidcsv")                                                     \
  XX(slog, "slog")                                                             \
  XX(slo2, "slo2")                                                             \
  XX(tinyxml2, "tinyxml2")                                                     \
  XX(zlib, "zlib")

#define SLXIO_ERROR_MAP(XX)                                                    \
  XX(SLX_OK, "Success")                                                        \
  XX(SLX_ENOENT, "Element not found")                                          \
  XX(SLX_EINVAR, "Invalid argument")                                           \
  XX(SLX_ETYPEMISMATCH, "Type mismatch")                                       \
  XX(SLX_ENULLPTR, "Null pointer")                                             \
  XX(SLX_ENOTIMPL, "Not implemented")                                          \
  XX(SLX_EEXTNSUP, "Extension not supported")                                  \
  XX(SLX_EINVALIDX, "Invalid index")                                           \
  XX(SLX_EDUPOBJ, "Duplicate object")                                          \
  XX(SLX_EIOERR, "I/O error")                                                  \
  XX(SLX_EEOF, "End of file")                                                  \
  XX(SLX_EGETCWD, "Failed to get current directory")                           \
  XX(SLX_ELONGPATH, "Path too long")                                           \
  XX(SLX_ECASTFAIL, "Cast failure")                                            \
  XX(SLX_EMEMALLOC, "Memory allocation failure")                               \
  XX(SLX_ENOTCONN, "Not connected")                                            \
  XX(SLX_ECYCLE, "Cyclic dependency")                                          \
  XX(SLX_EUNSUPPORTED, "Unsupported operation")                                \
  XX(SLX_ELOCKED, "Model locked")                                              \
  XX(SLX_ESTATEINVAL, "Invalid state")                                         \
  XX(SLX_EPARAMINVAL, "Invalid parameter")                                     \
  XX(SLX_EBLOCKNF, "Block not found")                                          \
  XX(SLX_EPORTNF, "Port not found")                                            \
  XX(SLX_ELINKFAIL, "Link failure")                                            \
  XX(SLX_EUNRESOLVED, "Unresolved reference")                                  \
  XX(SLX_EUNKNOWN, "Unknown error")

/* Service to get errors named group */
static const char* GetErrorGroupName(UInt32 code);

/* Service to get errors named module */
static const char* GetErrorModuleName(UInt32 code);

/* Service to decode error explict message */
static const char* GetErrorMessage(UInt32 code);

/* thread-unsafe, but simple */
static const char* GetErrorAsChar(UInt32 code);

/* overloaded, not yet implemented */
static const char* GetLastErrorMessage(void);

/* Define helper function to debug error codes */
void PrintfError(const char* format, UInt32 code);

void PrintError(UInt32 code);

#ifdef __cplusplus
}; /*__cplusplus */
#endif

#endif /* __ErrorMapTypes_h__ */
