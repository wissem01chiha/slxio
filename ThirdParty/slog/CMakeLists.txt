add_thirdparty_module(slog
    ${PROJECT_SOURCE_DIR}/ThirdParty/slog
    slog
)
set_target_properties(slog PROPERTIES
    POSITION_INDEPENDENT_CODE ON)
