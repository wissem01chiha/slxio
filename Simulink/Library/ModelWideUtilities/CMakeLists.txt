set(ModelWideUtilities_SRCS
    ${CMAKE_CURRENT_SOURCE_DIR}/BlockSupportTable.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/Docblock.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/ModelInfo.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/TimedBasedLinearization.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/TriggerBasedLinearization.cxx
)

set(ModelWideUtilities_HDRS
    ${CMAKE_CURRENT_SOURCE_DIR}/BlockSupportTable.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Docblock.h
    ${CMAKE_CURRENT_SOURCE_DIR}/ModelInfo.h
    ${CMAKE_CURRENT_SOURCE_DIR}/TimedBasedLinearization.h
    ${CMAKE_CURRENT_SOURCE_DIR}/TriggerBasedLinearization.h
)


set(ModelWideUtilities_HDRS ${ModelWideUtilities_HDRS} PARENT_SCOPE)
set(ModelWideUtilities_SRCS ${ModelWideUtilities_SRCS} PARENT_SCOPE)
