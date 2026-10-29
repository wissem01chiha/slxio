include(CTest)
enable_testing()

set(BUILD_TESTING ON)
set(PROJECT_SOURCE_DIR "${PROJECT_SOURCE_DIR}")

if(SLXIO_ENABLE_TESTING_COVERAGE)
  if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    add_compile_options(--coverage)
    add_link_options(--coverage)
  endif ()
endif ()
