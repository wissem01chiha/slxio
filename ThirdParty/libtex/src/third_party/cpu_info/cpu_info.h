#ifndef CPU_INFO_H
#define CPU_INFO_H


#include <stdint.h>
#include <stdio.h>

//////////////////////////////////////
// Error config definitions
//////////////////////////////////////

#define CPUI_ERRORS \
    CPUI_ERRORDEF(NOT_IMPLEMENTED) \
    CPUI_ERRORDEF(SYSCALL) \
    CPUI_ERRORDEF(NOT_SUPPORTED) \
    CPUI_ERRORDEF(INVALID_MEMORY_ALLOCATION)

#define CPUI_ERRORDEF(err) CPUI_ERROR_##err,

typedef enum  {
    CPUI_SUCCESS = 0,
    CPUI_ERRORS
    CPUI_UNKNOWN
} cpui_error_t;

#undef CPUI_ERRORDEF

#define CPUI_ERRORDEF(err) "CPUI_ERROR_" #err,

const char* const cpui_error_strings[] = {
    "CPUI_SUCCESS",
    CPUI_ERRORS
    "CPUI_UNKNOWN"
};

//////////////////////////////////////
// Header section
//////////////////////////////////////

#define CPUI_VENDOR_STRING_SIZE 32
#define CPUI_BRAND_STRING_SIZE 64

/// Holds all available information about the current platforms CPU hardware
typedef struct {
    char vendor_string[CPUI_VENDOR_STRING_SIZE];
    char brand_string[CPUI_BRAND_STRING_SIZE];
    uint32_t physical_cores;
    uint32_t logical_cores;
    size_t cache_line_size;
    size_t l1d_cache_size;
    size_t l1i_cache_size;
    size_t l2_cache_size;
    size_t l3_cache_size;
} cpui_result;

/// Gets all info from the platforms CPU hardware and stores it in `result`
cpui_error_t cpui_get_info(cpui_result* result);

/// Logs a `cpui_result` struct to the file pointed to by `file` in a formatted fashion
void cpui_log_result(FILE* file, cpui_result* result);


#endif // CPU_INFO_H

#ifdef CPU_INFO_IMPLEMENTATION


//////////////////////////////////////
// Config info for OS and platform
//////////////////////////////////////

#define CPUI_OS_MACOS 0
#define CPUI_OS_IOS 0
#define CPUI_OS_ANDROID 0
#define CPUI_OS_WINDOWS 0
#define CPUI_OS_LINUX 0

#if defined(__APPLE__) && defined(__MACH__)

#include <TargetConditionals.h>

#if TARGET_IPHONE_SIMULATOR == 1

#undef CPUI_OS_IOS
#define CPUI_OS_IOS 1

#elif TARGET_OS_IPHONE == 1

#undef CPUI_OS_IOS
#define CPUI_OS_IOS 1

#elif TARGET_OS_MAC == 1

#undef CPUI_OS_MACOS
#define CPUI_OS_MACOS 1

#endif
#elif defined(__WIN32__) || defined(__WINDOWS__) || defined(_WIN64) \
 || defined(_WIN32) || defined(_WINDOWS) || defined(__TOS_WIN__)
#undef CPUI_OS_WINDOWS

#define CPUI_OS_WINDOWS 1

#elif defined(__linux__) || defined(__linux) || defined(linux_generic)

#undef CPUI_OS_LINUX
#define CPUI_OS_LINUX 1

#elif defined(__ANDROID__)

#undef CPUI_OS_ANDROID
#define CPUI_OS_ANDROID 1
#define CPUI_OS_ANDROID_API_LEVEL = __ANDROID_API__;

#endif

//////////////////////////////////////
// Implementation section
//////////////////////////////////////

#include <stddef.h>

void cpui_log_result(FILE* file, cpui_result* result)
{
    fprintf(file, "vendor_string: %s\n", result->vendor_string);
    fprintf(file, "brand_string: %s\n", result->brand_string);
    fprintf(file, "physical_cores: %d\n", result->physical_cores);
    fprintf(file, "logical_cores: %d\n", result->logical_cores);
    fprintf(file, "cache_line_size: %zu\n", result->cache_line_size);
    fprintf(file, "l1d_cache_size: %zu\n", result->l1d_cache_size);
    fprintf(file, "l1i_cache_size: %zu\n", result->l1i_cache_size);
    fprintf(file, "l2_cache_size: %zu\n", result->l2_cache_size);
    fprintf(file, "l3_cache_size: %zu\n", result->l3_cache_size);
}

#if CPUI_OS_MACOS == 1

#include <sys/sysctl.h>

int cpui_sysctlbyname(const char* name, void* data, size_t* data_size, cpui_error_t* cpui_err)
{
    int err = sysctlbyname(name, data, data_size, NULL, 0);
    *cpui_err = err ? CPUI_ERROR_SYSCALL : CPUI_SUCCESS;
    return err;
}

cpui_error_t cpui_get_info(cpui_result* result)
{
    //Assuming an Intel processor with CPUID leaf 11
    cpui_error_t err = CPUI_SUCCESS;

    size_t len = sizeof(result->physical_cores);
    if ( cpui_sysctlbyname("hw.physicalcpu", &result->physical_cores, &len, &err) ) {
        return err;
    }

    len = sizeof(result->logical_cores);
    if ( cpui_sysctlbyname("hw.logicalcpu", &result->logical_cores, &len, &err) ) {
        return err;
    }

    len = sizeof(result->brand_string);
    if ( cpui_sysctlbyname("machdep.cpu.brand_string", &result->brand_string, &len, &err) ) {
        return err;
    }

    len = sizeof(result->vendor_string);
    if ( cpui_sysctlbyname("machdep.cpu.vendor", &result->vendor_string, &len, &err) ) {
        return err;
    }

    len = sizeof(result->cache_line_size);
    if ( cpui_sysctlbyname("hw.cachelinesize", &result->cache_line_size, &len, &err) ) {
        return err;
    }

    len = sizeof(result->l1i_cache_size);
    if ( cpui_sysctlbyname("hw.l1icachesize", &result->l1i_cache_size, &len, &err) ) {
        return err;
    }

    len = sizeof(result->l1d_cache_size);
    if ( cpui_sysctlbyname("hw.l1dcachesize", &result->l1d_cache_size, &len, &err) ) {
        return err;
    }

    len = sizeof(result->l2_cache_size);
    if ( cpui_sysctlbyname("hw.l2cachesize", &result->l2_cache_size, &len, &err) ) {
        return err;
    }

    len = sizeof(result->l3_cache_size);
    if ( cpui_sysctlbyname("hw.l3cachesize", &result->l3_cache_size, &len, &err) ) {
        return err;
    }

    return CPUI_SUCCESS;
}


#elif CPUI_OS_WINDOWS == 1


// remove a bunch of unused stuff from Windows.h (these can all be found in Windows.h)
#define NOGDICAPMASKS     // - CC_*, LC_*, PC_*, CP_*, TC_*, RC_
#define NOVIRTUALKEYCODES // - VK_*
#define NOWINMESSAGES     // - WM_*, EM_*, LB_*, CB_*
#define NOWINSTYLES       // - WS_*, CS_*, ES_*, LBS_*, SBS_*, CBS_*
#define NOSYSMETRICS      // - SM_*
#define NOMENUS           // - MF_*
#define NOICONS           // - IDI_*
#define NOKEYSTATES       // - MK_*
#define NOSYSCOMMANDS     // - SC_*
#define NORASTEROPS       // - Binary and Tertiary raster ops
#define NOSHOWWINDOW      // - SW_*
#define OEMRESOURCE       // - OEM Resource values
#define NOATOM            // - Atom Manager routines
#define NOCLIPBOARD       // - Clipboard routines
#define NOCOLOR           // - Screen colors
#define NOCTLMGR          // - Control and Dialog routines
#define NODRAWTEXT        // - DrawText() and DT_*
#define NOGDI             // - All GDI defines and routines
#define NOKERNEL          // - All KERNEL defines and routines
#define NOUSER            // - All USER defines and routines
#define NONLS             // - All NLS defines and routines
#define NOMB              // - MB_* and MessageBox()
#define NOMEMMGR          // - GMEM_*, LMEM_*, GHND, LHND, associated routines
#define NOMETAFILE        // - typedef METAFILEPICT
#define NOMINMAX          // - Macros min(a,b) and max(a,b)
#define NOMSG             // - typedef MSG and associated routines
#define NOOPENFILE        // - OpenFile(), OemToAnsi, AnsiToOem, and OF_*
#define NOSCROLL          // - SB_* and scrolling routines
#define NOSERVICE         // - All Service Controller routines, SERVICE_ equates, etc.
#define NOSOUND           // - Sound driver routines
#define NOTEXTMETRIC      // - typedef TEXTMETRIC and associated routines
#define NOWH              // - SetWindowsHook and WH_*
#define NOWINOFFSETS      // - GWL_*, GCL_*, associated routines
#define NOCOMM            // - COMM driver routines
#define NOKANJI           // - Kanji support stuff.
#define NOHELP            // - Help engine interface.
#define NOPROFILER        // - Profiler interface.
#define NODEFERWINDOWPOS  // - DeferWindowPos routines
#define NOMCX             // - Modem Configuration Extensions

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <intrin.h>

enum cpui_cpuid_fn_id {
    CPUID_FN_ID_EXTENDED_MAX        = 0x80000000,
    CPUID_FN_ID_BRAND_STRING_BEGIN  = 0x80000002,
    CPUID_FN_ID_BRAND_STRING_END    = 0x80000004
};

void cpui_cpuid(uint32_t op, uint32_t* eax, uint32_t* ebx, uint32_t* ecx, uint32_t* edx)
{
	int regs[4];
	__cpuid(regs, op);
	*eax = (uint32_t)regs[0];
	*ebx = (uint32_t)regs[1];
	*ecx = (uint32_t)regs[2];
	*edx = (uint32_t)regs[3];
}

void cpui_get_cache_info(cpui_result* result, CACHE_DESCRIPTOR* cd)
{
	switch ( cd->Level ) {
		case 1:
		{
			result->cache_line_size = cd->LineSize;

			if (cd->Type == CacheData) {
				result->l1d_cache_size = cd->Size;
			}

			if ( cd->Type == CacheInstruction ) {
				result->l1i_cache_size = cd->Size;
			}
		} break;
		case 2:
		{
			result->l2_cache_size = cd->Size;
		} break;
		case 3:
		{
			result->l3_cache_size = cd->Size;
		} break;
		default: break;
	};
}

cpui_error_t cpui_get_info(cpui_result* result)
{
	typedef BOOL(WINAPI *glpi_t)(PSYSTEM_LOGICAL_PROCESSOR_INFORMATION, PDWORD);

	SYSTEM_INFO sysinfo;
	GetSystemInfo(&sysinfo);
	result->logical_cores = sysinfo.dwNumberOfProcessors;
	result->physical_cores = 0;

	glpi_t glpi = (glpi_t)GetProcAddress(GetModuleHandle(TEXT("kernel32")), "GetLogicalProcessorInformation");

	// GLPI not supported on the current system
	if (glpi == NULL) {
		return CPUI_ERROR_NOT_SUPPORTED;
	}

	// Try and allocate buffer large enough for return info
	PSYSTEM_LOGICAL_PROCESSOR_INFORMATION buf = NULL;
	DWORD ret_len = 0;
	while (1) {
		BOOL ret = glpi(buf, &ret_len);
		if (ret == TRUE) {
			break;
		}

		if (GetLastError() == ERROR_INSUFFICIENT_BUFFER) {
			if ( buf )
				free(buf);

			buf = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION)malloc(ret_len);
			if (buf == NULL) {
				return CPUI_ERROR_INVALID_MEMORY_ALLOCATION;
			}
		} else {
			return CPUI_UNKNOWN;
		}
	}

	DWORD byte_offset = 0;
	PSYSTEM_LOGICAL_PROCESSOR_INFORMATION next = buf;
	// Scan all relations between logical processors
	while ( byte_offset + sizeof(SYSTEM_LOGICAL_PROCESSOR_INFORMATION) <= ret_len ) {
		switch (next->Relationship) {
			// Count physical cores
			case RelationProcessorCore:
			{
				result->physical_cores++;
			} break;

			case RelationCache:
			{
				cpui_get_cache_info(result, &next->Cache);
			} break;

			default: break;
		}

		byte_offset += sizeof(SYSTEM_LOGICAL_PROCESSOR_INFORMATION);
		next++;
	}

	// Get vendor string
	memset(result->vendor_string, 0, sizeof(result->vendor_string));
	uint32_t max_op = 0;
	cpui_cpuid(
	    0,
	    &max_op,
	    (uint32_t*)&result->vendor_string[0],
        (uint32_t*)&result->vendor_string[8],
        (uint32_t*)&result->vendor_string[4]
    );

	// Get brand string
	uint32_t highest_ext_fn_id, ebx, ecx, edx;
	cpui_cpuid((uint32_t)CPUID_FN_ID_EXTENDED_MAX, &highest_ext_fn_id, &ebx, &ecx, &edx);

    memset(result->brand_string, 0, sizeof(result->brand_string));

    // check if extended features are supported or not
    if (highest_ext_fn_id < (uint32_t)CPUID_FN_ID_BRAND_STRING_END) {
        return CPUI_SUCCESS;
    }

    int registers[4];
	for (uint32_t i = 0; i <= (uint32_t)(CPUID_FN_ID_BRAND_STRING_END - CPUID_FN_ID_BRAND_STRING_BEGIN); ++i) {
        // each call to __cpuid contains 16 ASCII chars in each of the registers represetings a part
        // of the brand string
		__cpuid(registers, (uint32_t)CPUID_FN_ID_BRAND_STRING_BEGIN + i);
        memcpy(result->brand_string + i * 16, registers, sizeof(int) * 4);
	}

    // trim the brand name end
    int brand_str_end = (int)strlen(result->brand_string);
    for (int i = brand_str_end; i >= 0; --i) {
        if (result->brand_string[i] != ' ' && result->brand_string[i] != '\0' && i < brand_str_end) {
            result->brand_string[i + 1] = '\0';
            break;
        }
    }

	return CPUI_SUCCESS;
}


#elif CPUI_OS_LINUX == 1

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>

/// Returns an integer representing the last characters position in a string
///
/// \return -1 for invalid string, 0 for empty string, or an integer index value
int cpui_strend(char* str)
{
	if (!str) {
		return -1;
	}

	if (!str[0]) {
		return 0;
	}

	int result = -1;
	size_t len = strlen(str);
	for (size_t i = len; i > 0; --i) {
		if (isspace(str[i])) {
			result = (int)i;
			break;
		}
	}

	if (result == -1) {
		return (int)len;
	}
	return result;
}

/// Gets the value as an integer from the key/value pair contained within `line` pulled from `/proc/cpuinfo`
uint32_t cpui_cpuinfo_parse_numeric(char* line, uint32_t* result)
{
	char* colon = strchr(line, ':');
	if (colon != NULL ) {
		*result = (uint32_t)atoi(colon + 2);
	}
}

/// Gets the value as a string from the key/value pair contained within `line` pulled from `/proc/cpuinfo`
void cpui_cpuinfo_parse_string(char* line, char* result)
{
	char* colon = strchr(line, ':');
	int strend = cpui_strend(colon + 2);
	if (colon != NULL && strend > -1 ) {
		strncpy(result, colon + 2, (size_t)strend);
	}
}


cpui_error_t cpui_get_info(cpui_result* result)
{
	memset(result, 0, sizeof(cpui_result));
	char str[256];
	FILE *cpuinfo = fopen("/proc/cpuinfo", "rb");

	// Getting cache info with sysconf is portable, whereas logical/hw core info isn't
	result->cache_line_size = (size_t)sysconf(_SC_LEVEL1_DCACHE_LINESIZE);
	result->l1d_cache_size = (size_t)sysconf(_SC_LEVEL1_DCACHE_SIZE);
	result->l1i_cache_size = (size_t)sysconf(_SC_LEVEL1_ICACHE_SIZE);
	result->l2_cache_size = (size_t)sysconf(_SC_LEVEL2_CACHE_SIZE);
	result->l3_cache_size = (size_t)sysconf(_SC_LEVEL3_CACHE_SIZE);

	// Read through cpuinfo and parse results
	while ( fgets(str, sizeof(str), cpuinfo) ) {
		if ( !strncmp(str, "processor", 9) ) {
			result->logical_cores++;
		}

		if ( !strncmp(str, "cpu cores", 9) && result->physical_cores == 0 ) {
			cpui_cpuinfo_parse_numeric(str, &result->physical_cores);
		}

		if ( !strncmp(str, "vendor_id", 9) && result->vendor_string[0] == 0 ) {
			cpui_cpuinfo_parse_string(str, result->vendor_string);
		}

		if ( !strncmp(str, "model name", 10) && result->brand_string[0] == 0 ) {
			cpui_cpuinfo_parse_string(str, result->brand_string);
		}
	}

	fclose(cpuinfo);

	return CPUI_SUCCESS;
}

#else

cpui_error_t cpui_get_info(cpui_result* result)
{
    return CPUI_ERROR_NOT_IMPLEMENTED;
}

#endif // conditional info


#endif // CPU_INFO_IMPLEMENTATION