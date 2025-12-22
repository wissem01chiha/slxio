#[=======================================================================[.rst:
CheckAvxSupport
----------------
Checks whether the compiler and target platform support AVX instructions.
Usage
^^^^^
To use this module, call:

  include(CheckAvxSupport)
This will define the following function:
  avx_compile_options(OUTPUT_VAR)

  todo :some thirdparty libries require spesific AVX support (eg simdjson/ or others)
  math libs, if avx is avliable they will be set as default else a vendored version
  without avx will be used 
  eg if avx found -> simdjson::simdjson 
     if avx not found -> c-json/nolhoman-json/ or other libs 
#]=======================================================================]

include(CheckCSourceCompiles)

function(avx_compile_options OUTPUT_VAR)
  message(STATUS "Checking if AVX is available")

  if(MSVC)
    if (NOT MSVC_VERSION LESS 1600)
      set(CMAKE_REQUIRED_FLAGS "/arch:AVX")
    endif()
  else()
    set(CMAKE_REQUIRED_FLAGS "-mavx")
  endif()

  check_c_source_compiles(
    "
    #include <immintrin.h>
    int main(int argc, char* argv[]) {
      __m256d ymm;
      return 0;
    }
  "
    CAN_BUILD_AVX
  )

  if(CAN_BUILD_AVX)
    message(STATUS "Checking if AVX is available - Success")
    set("${OUTPUT_VAR}"
        ${CMAKE_REQUIRED_FLAGS}
        PARENT_SCOPE
    )
  else()
    message(STATUS "Checking if AVX is available - Failure")
    set("${OUTPUT_VAR}" PARENT_SCOPE)
  endif()
endfunction()

if(ENABLE_AVX) 
    avx_compile_options(AVX_COMPILE_OPTIONS) #for testing
endif()