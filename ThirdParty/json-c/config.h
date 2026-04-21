
/* Enable RDRAND Hardware RNG Hash Seed */
/* #undef ENABLE_RDRAND */

/* Override json_c_get_random_seed() with custom code */
/* #undef OVERRIDE_GET_RANDOM_SEED */

/* Enable partial threading support */
/* #undef ENABLE_THREADING */

/* Define if .gnu.warning accepts long strings. */
/* #undef HAS_GNU_WARNING_LONG */

/* Define to 1 if you have the <dlfcn.h> header file. */
/* #undef HAVE_DLFCN_H */

/* Define to 1 if you have the <endian.h> header file. */
/* #undef HAVE_ENDIAN_H */

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H

/* Define to 1 if you have the <locale.h> header file. */
/* #undef HAVE_LOCALE_H */

/* Define to 1 if you have the <memory.h> header file. */
/* #undef HAVE_MEMORY_H */

/* Define to 1 if you have the <stdarg.h> header file. */
#define HAVE_STDARG_H

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H

/* Define to 1 if you have the <stdlib.h> header file. */
/* #undef HAVE_STDLIB_H */

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H

/* Define to 1 if you have the <syslog.h> header file. */
#define HAVE_SYSLOG_H 1

/* Define to 1 if you have the <sys/cdefs.h> header file. */
/* #undef HAVE_SYS_CDEFS_H */

/* Define to 1 if you have the <sys/param.h> header file. */
/* #undef HAVE_SYS_PARAM_H */

/* Define to 1 if you have the <sys/random.h> header file. */
/* #undef HAVE_SYS_RANDOM_H */

/* Define to 1 if you have the <sys/resource.h> header file. */
/* #undef HAVE_SYS_RESOURCE_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
/* #undef HAVE_SYS_STAT_H */

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <xlocale.h> header file. */
/* #undef HAVE_XLOCALE_H */

/* Define to 1 if you have the <bsd/stdlib.h> header file. */
/* #undef HAVE_BSD_STDLIB_H */

/* Define to 1 if you have `arc4random' */
/* #undef HAVE_ARC4RANDOM */

/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
/* #undef HAVE_DOPRNT */

/* Has atomic builtins */
/* #undef HAVE_ATOMIC_BUILTINS */

/* Define to 1 if you have the declaration of `INFINITY', and to 0 if you
   don't. */
#define HAVE_DECL_INFINITY

/* Define to 1 if you have the declaration of `isinf', and to 0 if you don't.
   */
#define HAVE_DECL_ISINF

/* Define to 1 if you have the declaration of `isnan', and to 0 if you don't.
   */
#define HAVE_DECL_ISNAN

/* Define to 1 if you have the declaration of `nan', and to 0 if you don't. */
/* #undef HAVE_DECL_NAN */

/* Define to 1 if you have the declaration of `_finite', and to 0 if you
   don't. */
/* #undef HAVE_DECL__FINITE */

/* Define to 1 if you have the declaration of `_isnan', and to 0 if you don't.
   */
/* #undef HAVE_DECL__ISNAN */

/* Define to 1 if you have the `open' function. */
/* #undef HAVE_OPEN */

/* Define to 1 if you have the `realloc' function. */
/* #undef HAVE_REALLOC */

/* Define to 1 if you have the `setlocale' function. */
/* #undef HAVE_SETLOCALE */

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF


/* Define to 1 if you have the `strcasecmp' function. */
#define HAVE_STRCASECMP 1

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP

/* Define to 1 if you have the `strerror' function. */
/* #undef HAVE_STRERROR */

/* Define to 1 if you have the `strncasecmp' function. */
#define HAVE_STRNCASECMP 1

/* Define to 1 if you have the `uselocale' function. */
/* #undef HAVE_USELOCALE */

/* Define to 1 if you have the `duplocale' function. */
/* #undef HAVE_DUPLOCALE */

/* Define to 1 if newlocale() needs freelocale() called on it's `base` argument */
/* #undef NEWLOCALE_NEEDS_FREELOCALE */

/* Define to 1 if you have the `vasprintf' function. */
/* #undef HAVE_VASPRINTF */

/* Define to 1 if you have the `vprintf' function. */
/* #undef HAVE_VPRINTF */

/* Define to 1 if you have the `vsnprintf' function. */
/* #undef HAVE_VSNPRINTF */

/* Define to 1 if you have the `vsyslog' function. */
/* #undef HAVE_VSYSLOG */

/* Define if you have the `getrandom' function. */
/* #undef HAVE_GETRANDOM */

/* Define if you have the `getrusage' function. */
/* #undef HAVE_GETRUSAGE */

#define HAVE_STRTOLL
#if !defined(HAVE_STRTOLL)
#define strtoll 
/* #undef json_c_strtoll */
#endif

#define HAVE_STRTOULL
#if !defined(HAVE_STRTOULL)
#define strtoull 
/* #undef json_c_strtoull */
#endif

/* Have __thread */
/* #undef HAVE___THREAD */

/* Public define for json_inttypes.h */
/* #undef JSON_C_HAVE_INTTYPES_H */

/* Name of package */
#define PACKAGE "slxio"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "slxio"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "slxio .."

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "slxio"

/* Define to the home page for this package. */
#define PACKAGE_URL "https://github.com/json-c/json-c"

/* Define to the version of this package. */
#define PACKAGE_VERSION ".."

/* The number of bytes in type int */
#define SIZEOF_INT 4

/* The number of bytes in type int64_t */
#define SIZEOF_INT64_T 8

/* The number of bytes in type long */
#define SIZEOF_LONG 8

/* The number of bytes in type long long */
#define SIZEOF_LONG_LONG 8

/* The number of bytes in type size_t */
#define SIZEOF_SIZE_T 8

/* The number of bytes in type ssize_t */
#define SIZEOF_SSIZE_T 8

/* Specifier for __thread */
/* #undef SPEC___THREAD */

/* Define to 1 if you have the ANSI C header files. */
/* #undef STDC_HEADERS */

/* Version number of package */
#define VERSION ".."

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */
