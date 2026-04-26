// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef __ErrorTypes_h__
#define __ErrorTypes_h__

#include "PlatformTypes.h"

#ifdef __cplusplus
extern "C"
{
#endif

/* Define error mapping macro */
#define SLXIO_ERROR_CODE(group, module, error)                                 \
  (((UInt32)(group) << 24) | ((UInt32)(module) << 16) | ((UInt32)(error)))

/* Define a unique if for each group */
#define Common 100
#define Documentation 101
#define Examples 102
#define IO 103
#define Simulink 104
#define Testing 105
#define ThirdParty 106
#define Utilities 107
#define Visualization 108

/* Define a unique id for each module */
#define Core 1000
#define System 1001
#define Data 1002
#define Doxygen 1003
#define Json 1004
#define Slx 1005
#define Annotation 1006
#define Configuration 1007
#define Layout 1008
#define Library 1009
#define Misc 1010
#define Stateflow 1011
#define Cli 1012
#define Python 1013
#define Sphnix 1014
#define Java 1015
#define cxxopts 1016
#define doctest 1017
#define json_c 1018
#define libpng 1019
#define libuv 1020
#define libxml2 1021
#define libzip 1022
#define loguru 1023
#define pybind11 1024
#define rapidcsv 1025
#define slog 1026
#define slo2 1027
#define tinyxml2 1028
#define zlib 1029

/* Define full error unique identifiers */
#define SLX_OK SLXIO_ERROR_CODE(Common, Core, 0x00)
#define SLX_ENOENT SLXIO_ERROR_CODE(Common, Core, 0x01)
#define SLX_EINVAR SLXIO_ERROR_CODE(Common, Core, 0x02)
#define SLX_ETYPEMISMATCH SLXIO_ERROR_CODE(Common, Core, 0x03)
#define SLX_ENULLPTR SLXIO_ERROR_CODE(Common, Core, 0x04)
#define SLX_ENOTIMPL SLXIO_ERROR_CODE(Common, Core, 0x05)
#define SLX_EEXTNSUP SLXIO_ERROR_CODE(Common, Core, 0x06)
#define SLX_EINVALIDX SLXIO_ERROR_CODE(Common, Core, 0x07)
#define SLX_EDUPOBJ SLXIO_ERROR_CODE(Common, Core, 0x08)
#define SLX_EIOERR SLXIO_ERROR_CODE(Common, Core, 0x09)
#define SLX_EEOF SLXIO_ERROR_CODE(Common, Core, 0x0A)
#define SLX_EGETCWD SLXIO_ERROR_CODE(Common, Core, 0x0B)
#define SLX_ELONGPATH SLXIO_ERROR_CODE(Common, Core, 0x0C)
#define SLX_ECASTFAIL SLXIO_ERROR_CODE(Common, Core, 0x0D)
#define SLX_EMEMALLOC SLXIO_ERROR_CODE(Common, Core, 0x0E)
#define SLX_ENOTCONN SLXIO_ERROR_CODE(Common, Core, 0x0F)
#define SLX_ECYCLE SLXIO_ERROR_CODE(Common, Core, 0x10)
#define SLX_EUNSUPPORTED SLXIO_ERROR_CODE(Common, Core, 0x11)
#define SLX_ELOCKED SLXIO_ERROR_CODE(Common, Core, 0x12)
#define SLX_ESTATEINVAL SLXIO_ERROR_CODE(Common, Core, 0x13)
#define SLX_EPARAMINVAL SLXIO_ERROR_CODE(Common, Core, 0x14)
#define SLX_EBLOCKNF SLXIO_ERROR_CODE(Common, Core, 0x15)
#define SLX_EPORTNF SLXIO_ERROR_CODE(Common, Core, 0x16)
#define SLX_ELINKFAIL SLXIO_ERROR_CODE(Common, Core, 0x17)
#define SLX_EUNRESOLVED SLXIO_ERROR_CODE(Common, Core, 0x18)
#define SLX_EUNKNOWN SLXIO_ERROR_CODE(Common, Core, 0x19)

#define CONFIG_ACTIVE SLXIO_ERROR_CODE(Simulink, Configuration, 0x01)

#define UV__EOF SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EOF)
#define UV__UNKNOWN SLXIO_ERROR_CODE(ThirdParty, libuv, UV__UNKNOWN)
#define UV__EAI_ADDRFAMILY                                                     \
  SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EAI_ADDRFAMILY)
#define UV__EAI_AGAIN SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EAI_AGAIN)
#define UV__EAI_BADFLAGS SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EAI_BADFLAGS)
#define UV__EAI_CANCELED SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EAI_CANCELED)
#define UV__EAI_FAIL SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EAI_FAIL)
#define UV__EAI_FAMILY SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EAI_FAMILY)
#define UV__EAI_MEMORY SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EAI_MEMORY)
#define UV__EAI_NODATA SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EAI_NODATA)
#define UV__EAI_NONAME SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EAI_NONAME)
#define UV__EAI_OVERFLOW SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EAI_OVERFLOW)
#define UV__EAI_SERVICE SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EAI_SERVICE)
#define UV__EAI_SOCKTYPE SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EAI_SOCKTYPE)
#define UV__EAI_BADHINTS SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EAI_BADHINTS)
#define UV__EAI_PROTOCOL SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EAI_PROTOCOL)
#define UV__E2BIG SLXIO_ERROR_CODE(ThirdParty, libuv, UV__E2BIG)
#define UV__EACCES SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EACCES)
#define UV__EADDRINUSE SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EADDRINUSE)
#define UV__EADDRNOTAVAIL SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EADDRNOTAVAIL)
#define UV__EAFNOSUPPORT SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EAFNOSUPPORT)
#define UV__EAGAIN SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EAGAIN)
#define UV__EALREADY SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EALREADY)
#define UV__EBADF SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EBADF)
#define UV__EBUSY SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EBUSY)
#define UV__ECANCELED SLXIO_ERROR_CODE(ThirdParty, libuv, UV__ECANCELED)
#define UV__ECHARSET SLXIO_ERROR_CODE(ThirdParty, libuv, UV__ECHARSET)
#define UV__ECONNABORTED SLXIO_ERROR_CODE(ThirdParty, libuv, UV__ECONNABORTED)
#define UV__ECONNREFUSED SLXIO_ERROR_CODE(ThirdParty, libuv, UV__ECONNREFUSED)
#define UV__ECONNRESET SLXIO_ERROR_CODE(ThirdParty, libuv, UV__ECONNRESET)
#define UV__EDESTADDRREQ SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EDESTADDRREQ)
#define UV__EEXIST SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EEXIST)
#define UV__EFAULT SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EFAULT)
#define UV__EHOSTUNREACH SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EHOSTUNREACH)
#define UV__EINTR SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EINTR)
#define UV__EINVAL SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EINVAL)
#define UV__EIO SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EIO)
#define UV__EISCONN SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EISCONN)
#define UV__EISDIR SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EISDIR)
#define UV__ELOOP SLXIO_ERROR_CODE(ThirdParty, libuv, UV__ELOOP)
#define UV__EMFILE SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EMFILE)
#define UV__EMSGSIZE SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EMSGSIZE)
#define UV__ENAMETOOLONG SLXIO_ERROR_CODE(ThirdParty, libuv, UV__ENAMETOOLONG)
#define UV__ENETDOWN SLXIO_ERROR_CODE(ThirdParty, libuv, UV__ENETDOWN)
#define UV__ENETUNREACH SLXIO_ERROR_CODE(ThirdParty, libuv, UV__ENETUNREACH)
#define UV__ENFILE SLXIO_ERROR_CODE(ThirdParty, libuv, UV__ENFILE)
#define UV__ENOBUFS SLXIO_ERROR_CODE(ThirdParty, libuv, UV__ENOBUFS)
#define UV__ENODEV SLXIO_ERROR_CODE(ThirdParty, libuv, UV__ENODEV)
#define UV__ENOENT SLXIO_ERROR_CODE(ThirdParty, libuv, UV__ENOENT)
#define UV__ENOMEM SLXIO_ERROR_CODE(ThirdParty, libuv, UV__ENOMEM)
#define UV__ENONET SLXIO_ERROR_CODE(ThirdParty, libuv, UV__ENONET)
#define UV__ENOSPC SLXIO_ERROR_CODE(ThirdParty, libuv, UV__ENOSPC)
#define UV__ENOSYS SLXIO_ERROR_CODE(ThirdParty, libuv, UV__ENOSYS)
#define UV__ENOTCONN SLXIO_ERROR_CODE(ThirdParty, libuv, UV__ENOTCONN)
#define UV__ENOTDIR SLXIO_ERROR_CODE(ThirdParty, libuv, UV__ENOTDIR)
#define UV__ENOTEMPTY SLXIO_ERROR_CODE(ThirdParty, libuv, UV__ENOTEMPTY)
#define UV__ENOTSOCK SLXIO_ERROR_CODE(ThirdParty, libuv, UV__ENOTSOCK)
#define UV__ENOTSUP SLXIO_ERROR_CODE(ThirdParty, libuv, UV__ENOTSUP)
#define UV__EPERM SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EPERM)
#define UV__EPIPE SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EPIPE)
#define UV__EPROTO SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EPROTO)
#define UV__EPROTONOSUPPORT                                                    \
  SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EPROTONOSUPPORT)
#define UV__EPROTOTYPE SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EPROTOTYPE)
#define UV__EROFS SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EROFS)
#define UV__ESHUTDOWN SLXIO_ERROR_CODE(ThirdParty, libuv, UV__ESHUTDOWN)
#define UV__ESPIPE SLXIO_ERROR_CODE(ThirdParty, libuv, UV__ESPIPE)
#define UV__ESRCH SLXIO_ERROR_CODE(ThirdParty, libuv, UV__ESRCH)
#define UV__ETIMEDOUT SLXIO_ERROR_CODE(ThirdParty, libuv, UV__ETIMEDOUT)
#define UV__ETXTBSY SLXIO_ERROR_CODE(ThirdParty, libuv, UV__ETXTBSY)
#define UV__EXDEV SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EXDEV)
#define UV__EFBIG SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EFBIG)
#define UV__ENOPROTOOPT SLXIO_ERROR_CODE(ThirdParty, libuv, UV__ENOPROTOOPT)
#define UV__ERANGE SLXIO_ERROR_CODE(ThirdParty, libuv, UV__ERANGE)
#define UV__ENXIO SLXIO_ERROR_CODE(ThirdParty, libuv, UV__ENXIO)
#define UV__EMLINK SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EMLINK)
#define UV__EHOSTDOWN SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EHOSTDOWN)
#define UV__EREMOTEIO SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EREMOTEIO)
#define UV__ENOTTY SLXIO_ERROR_CODE(ThirdParty, libuv, UV__ENOTTY)
#define UV__EFTYPE SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EFTYPE)
#define UV__EILSEQ SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EILSEQ)
#define UV__EOVERFLOW SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EOVERFLOW)
#define UV__ESOCKTNOSUPPORT                                                    \
  SLXIO_ERROR_CODE(ThirdParty, libuv, UV__ESOCKTNOSUPPORT)
#define UV__ENODATA SLXIO_ERROR_CODE(ThirdParty, libuv, UV__ENODATA)
#define UV__EUNATCH SLXIO_ERROR_CODE(ThirdParty, libuv, UV__EUNATCH)
#define UV__ENOEXEC SLXIO_ERROR_CODE(ThirdParty, libuv, UV__ENOEXEC)

#ifdef __cplusplus
} /*__cplusplus */
#endif

#endif /* __ErrorTypes_h__*/
