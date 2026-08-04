add_subdirectory(src)

set_target_properties(slog PROPERTIES
    POSITION_INDEPENDENT_CODE ON)

target_include_directories(slog
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
)