find_package(Unity QUIET)
if(Unity_FOUND)
    message(STATUS "Unity Test found: ${UNITY_INCLUDE_DIR}")
else()
    message(STATUS "Unity Test not found. Downloading and building from source...")
    include(FetchContent)
    FetchContent_Declare(
        unity
        URL https://github.com/ThrowTheSwitch/Unity/archive/refs/tags/v2.6.1.zip
    )
    FetchContent_MakeAvailable(unity)
    set(UNITY_INCLUDE_DIR ${unity_SOURCE_DIR}/src)
endif()
