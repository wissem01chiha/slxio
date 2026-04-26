add_module(ThirdParty::libuv)
target_include_directories(ThirdPartylibuv
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src/include
    ${CMAKE_CURRENT_SOURCE_DIR}/src/src
)