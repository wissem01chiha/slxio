set(ModelWideUtilities_SRCS
    ${CMAKE_CURRENT_SOURCE_DIR}/BlockSupportTable.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/Clock.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/Constant.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/Docblock.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/Emptysubsystem.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/MatlabSFunction.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/ModelInfo.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/Sum.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/TimedBasedLinearization.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/Trigger.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/TriggerBasedLinearization.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/TriggeredLinearization.cxx
)

set(ModelWideUtilities_HDRS
    ${CMAKE_CURRENT_SOURCE_DIR}/BlockSupportTable.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Clock.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Constant.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Docblock.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Emptysubsystem.h
    ${CMAKE_CURRENT_SOURCE_DIR}/MatlabSFunction.h
    ${CMAKE_CURRENT_SOURCE_DIR}/ModelInfo.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Sum.h
    ${CMAKE_CURRENT_SOURCE_DIR}/TimedBasedLinearization.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Trigger.h
    ${CMAKE_CURRENT_SOURCE_DIR}/TriggerBasedLinearization.h
    ${CMAKE_CURRENT_SOURCE_DIR}/TriggeredLinearization.h
)


set(ModelWideUtilities_HDRS ${ModelWideUtilities_HDRS} PARENT_SCOPE)
set(ModelWideUtilities_SRCS ${ModelWideUtilities_SRCS} PARENT_SCOPE)
