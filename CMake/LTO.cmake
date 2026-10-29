# check if IPO is supported by the compiler for LTO
# note replace with CheckIPOSupported starting from CMake 3.9
# https://cmake.org/cmake/help/latest/module/CheckIPOSupported.html
if(SLXIO_ENABLE_LTO)
  include(CheckIPOSupported)
  check_ipo_supported(
    RESULT ipo_supported
    OUTPUT ipo_output
    LANGUAGES C CXX)
  if(ipo_supported)
    set(CMAKE_INTERPROCEDURAL_OPTIMIZATION ON)   
  endif()
endif()