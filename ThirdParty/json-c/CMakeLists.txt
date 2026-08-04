if(POLICY CMP0077)
    cmake_policy(SET CMP0077 NEW)
endif()
set(BUILD_APPS OFF)

add_subdirectory(src)
