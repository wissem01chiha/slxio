set(ModelVerification_SRCS
    ${CMAKE_CURRENT_SOURCE_DIR}/Assertion.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/CheckDiscreteGradient.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/CheckDynamicGap.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/CheckDynamicLowerBound.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/CheckDynamicRange.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/CheckDynamicUpperBound.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/CheckInputResolution.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/CheckStaticGap.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/CheckStaticLowerBound.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/CheckStaticRange.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/CheckStaticUpperBound.cxx
)

set(ModelVerification_HDRS
    ${CMAKE_CURRENT_SOURCE_DIR}/Assertion.h
    ${CMAKE_CURRENT_SOURCE_DIR}/CheckDiscreteGradient.h
    ${CMAKE_CURRENT_SOURCE_DIR}/CheckDynamicGap.h
    ${CMAKE_CURRENT_SOURCE_DIR}/CheckDynamicLowerBound.h
    ${CMAKE_CURRENT_SOURCE_DIR}/CheckDynamicRange.h
    ${CMAKE_CURRENT_SOURCE_DIR}/CheckDynamicUpperBound.h
    ${CMAKE_CURRENT_SOURCE_DIR}/CheckInputResolution.h
    ${CMAKE_CURRENT_SOURCE_DIR}/CheckStaticGap.h
    ${CMAKE_CURRENT_SOURCE_DIR}/CheckStaticLowerBound.h
    ${CMAKE_CURRENT_SOURCE_DIR}/CheckStaticRange.h
    ${CMAKE_CURRENT_SOURCE_DIR}/CheckStaticUpperBound.h
)


set(ModelVerification_HDRS ${ModelVerification_HDRS} PARENT_SCOPE)
set(ModelVerification_SRCS ${ModelVerification_SRCS} PARENT_SCOPE)
