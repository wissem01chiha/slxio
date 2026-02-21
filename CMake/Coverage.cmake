#[=======================================================================[.rst:
Configure code coverage settings for the project build
#]=======================================================================]

if (ENABLE_COVERAGE AND NOT ENABLE_TESTING)
  message (FATAL_ERROR "coverage requires testing to be enabled")
endif ()

if (ENABLE_COVERAGE)
  if (CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    add_compile_options (--coverage)
    add_link_options (--coverage)
  endif ()
  if (ENABLE_COVERAGE AND MSVC)
    add_compile_options (/Zi)
    add_link_options (/DEBUG)
  endif ()
endif ()
