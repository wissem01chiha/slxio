#[=======================================================================[.rst:
CheckIncludes
-------------

Checks routines for all external library header files.  
Used as a compatibility layer for old vendored third‑party libraries, 
or non‑vendored (locally installed) ones.  
Provides helper macros for other Find<Package> CMake modules to locate all 
local library source files.
#]=======================================================================]

include(CheckIncludeFiles)
include(CheckFunctionExists)
include(CheckIncludeFiles)
include(CheckLibraryExists)
include(CheckSymbolExists)
include(CheckTypeSize)
include(CheckCSourceRuns)
include(CheckCSourceCompiles)
include(CheckStructHasMember)
include(TestBigEndian)
include(GNUInstallDirs)

check_include_files("limits.h" HAVE_LIMITS_H)
check_include_files("values.h" HAVE_VALUES_H)
check_include_files("stdlib.h" HAVE_STDLIB_H)

check_include_files("float.h" HAVE_FLOAT_H)
check_include_files("direct.h" HAVE_DIRECT_H)
check_include_files("io.h" HAVE_IO_H)
check_include_files("windows.h" HAVE_WINDOWS_H)
check_include_files("intrin.h" HAVE_INTRIN_H)

check_include_files("cpuid.h" HAVE_CPUID_H)

check_include_files("sys/stat.h" HAVE_SYS_STAT_H)
check_include_files("sys/types.h" HAVE_SYS_TYPES_H)
check_include_files("unistd.h" HAVE_UNISTD_H)
check_include_files("stdbool.h" HAVE_STDBOOL_H)


check_function_exists(_close HAVE__CLOSE)
check_function_exists(_dup HAVE__DUP)
check_function_exists(_fdopen HAVE__FDOPEN)
check_function_exists(_fileno HAVE__FILENO)
check_function_exists(_fseeki64 HAVE__FSEEKI64)
check_function_exists(_fstat64 HAVE__FSTAT64)
check_function_exists(_ftelli64 HAVE__FTELLI64)
check_function_exists(_setmode HAVE__SETMODE)
check_function_exists(_stat64 HAVE__STAT64)
check_symbol_exists(_snprintf stdio.h HAVE__SNPRINTF)
check_symbol_exists(_snprintf_s stdio.h HAVE__SNPRINTF_S)
check_symbol_exists(_snwprintf_s stdio.h HAVE__SNWPRINTF_S)
check_function_exists(_strdup HAVE__STRDUP)
check_symbol_exists(_stricmp string.h HAVE__STRICMP)
check_function_exists(_strtoi64 HAVE__STRTOI64)
check_function_exists(_strtoui64 HAVE__STRTOUI64)
check_function_exists(_unlink HAVE__UNLINK)
check_function_exists(arc4random HAVE_ARC4RANDOM)
check_function_exists(clonefile HAVE_CLONEFILE)
check_function_exists(explicit_bzero HAVE_EXPLICIT_BZERO)
check_function_exists(explicit_memset HAVE_EXPLICIT_MEMSET)
check_function_exists(fchmod HAVE_FCHMOD)
check_function_exists(fileno HAVE_FILENO)
check_function_exists(fseeko HAVE_FSEEKO)
check_function_exists(ftello HAVE_FTELLO)
check_function_exists(getprogname HAVE_GETPROGNAME)
check_function_exists(GetSecurityInfo HAVE_GETSECURITYINFO)
check_symbol_exists(localtime_r time.h HAVE_LOCALTIME_R)
check_symbol_exists(localtime_s time.h HAVE_LOCALTIME_S)
check_function_exists(memcpy_s HAVE_MEMCPY_S)
check_function_exists(random HAVE_RANDOM)
check_function_exists(setmode HAVE_SETMODE)
check_symbol_exists(snprintf stdio.h HAVE_SNPRINTF)
check_symbol_exists(snprintf_s stdio.h HAVE_SNPRINTF_S)
check_symbol_exists(strcasecmp strings.h HAVE_STRCASECMP)
check_function_exists(strdup HAVE_STRDUP)
check_function_exists(strerror_s HAVE_STRERROR_S)
check_function_exists(strerrorlen_s HAVE_STRERRORLEN_S)
check_function_exists(stricmp HAVE_STRICMP)
check_function_exists(strncpy_s HAVE_STRNCPY_S)
check_function_exists(strtoll HAVE_STRTOLL)
check_function_exists(strtoull HAVE_STRTOULL)