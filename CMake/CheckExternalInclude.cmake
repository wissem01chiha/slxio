include (CheckIncludeFiles)

check_include_files ("limits.h" HAVE_LIMITS_H)
check_include_files ("values.h" HAVE_VALUES_H)
check_include_files ("stdlib.h" HAVE_STDLIB_H)

check_include_files ("float.h" HAVE_FLOAT_H)
check_include_files ("io.h" HAVE_IO_H)
check_include_files ("intrin.h" HAVE_INTRIN_H)

check_include_files ("cpuid.h" HAVE_CPUID_H)

check_include_files ("sys/stat.h" HAVE_SYS_STAT_H)
check_include_files ("sys/types.h" HAVE_SYS_TYPES_H)
check_include_files ("stdbool.h" HAVE_STDBOOL_H)

check_include_files ("omp.h" HAVE_OMP_H)
