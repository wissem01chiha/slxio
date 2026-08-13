set(String_SRCS
    ${CMAKE_CURRENT_SOURCE_DIR}/AsciiToString.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/ComposeString.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/ScanString.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/StringCompare.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/StringConcatenate.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/StringConstant.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/StringContains.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/StringCount.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/StringEndsWith.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/StringFind.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/StringLength.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/StringStartsWith.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/StringToAscii.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/StringToDouble.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/StringToEnum.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/StringToSingle.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/Substring.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/ToString.cxx
)

set(String_HDRS
    ${CMAKE_CURRENT_SOURCE_DIR}/AsciiToString.h
    ${CMAKE_CURRENT_SOURCE_DIR}/ComposeString.h
    ${CMAKE_CURRENT_SOURCE_DIR}/ScanString.h
    ${CMAKE_CURRENT_SOURCE_DIR}/StringCompare.h
    ${CMAKE_CURRENT_SOURCE_DIR}/StringConcatenate.h
    ${CMAKE_CURRENT_SOURCE_DIR}/StringConstant.h
    ${CMAKE_CURRENT_SOURCE_DIR}/StringContains.h
    ${CMAKE_CURRENT_SOURCE_DIR}/StringCount.h
    ${CMAKE_CURRENT_SOURCE_DIR}/StringEndsWith.h
    ${CMAKE_CURRENT_SOURCE_DIR}/StringFind.h
    ${CMAKE_CURRENT_SOURCE_DIR}/StringLength.h
    ${CMAKE_CURRENT_SOURCE_DIR}/StringStartsWith.h
    ${CMAKE_CURRENT_SOURCE_DIR}/StringToAscii.h
    ${CMAKE_CURRENT_SOURCE_DIR}/StringToDouble.h
    ${CMAKE_CURRENT_SOURCE_DIR}/StringToEnum.h
    ${CMAKE_CURRENT_SOURCE_DIR}/StringToSingle.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Substring.h
    ${CMAKE_CURRENT_SOURCE_DIR}/ToString.h
)


set(String_HDRS ${String_HDRS} PARENT_SCOPE)
set(String_SRCS ${String_SRCS} PARENT_SCOPE)
