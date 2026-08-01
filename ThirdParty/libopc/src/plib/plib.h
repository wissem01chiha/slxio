/*
 Copyright (c) 2010, Florian Reuter
 All rights reserved.

 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions
 are met:

 * Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
 * Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in
   the documentation and/or other materials provided with the
   distribution.
 * Neither the name of Florian Reuter nor the names of its contributors
   may be used to endorse or promote products derived from this
   software without specific prior written permission.

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#ifndef _PLIB_PLIB_H_
#define _PLIB_PLIB_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <limits.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>

#ifdef _WIN32
#include <io.h>
#else
#include <unistd.h>
#endif

typedef size_t pofs_t; // maximum file offset for eg. read write ops

typedef int8_t pint8_t;
typedef uint8_t puint8_t;

typedef int16_t pint16_t;
typedef uint16_t puint16_t;

typedef int32_t pint32_t;
typedef uint32_t puint32_t;

typedef int64_t pint64_t;
typedef uint64_t puint64_t;

typedef int pbool_t;

typedef size_t psize_t;

// INTN_MAX, INTN_MIN, UINTN_MAX

#define PUINT8_MAX UCHAR_MAX
#define PINT32_MAX INT_MAX
#define PINT32_MIN INT_MIN
#define PUINT32_MAX UINT_MAX
#define PUINT32_MIN 0
#define PUINT16_MAX USHRT_MAX
#define PUINT16_MIN 0

/**
 Converts an ASCII string to a xmlChar string. This only works for ASCII
 strings.
 */
#ifndef _X
#define _X(s) BAD_CAST(s)
#endif

/**
 Converts an xmlChar string to an ASCII string. This only works for ASCII
 charsets.
 */
#ifndef _X2C
#define _X2C(s) ((char *)(s))
#endif

#define PASSERT(e) assert(e)
#ifdef NDEBUG
#define PENSURE(e) (void)(e)
#else
#define PENSURE(e) assert(e)
#endif
#define PTRUE (0 == 0)
#define PFALSE (0 == 1)

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _PLIB_PLIB_H_ */
