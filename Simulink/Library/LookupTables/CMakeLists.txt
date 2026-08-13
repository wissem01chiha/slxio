set(LookupTables_SRCS
    ${CMAKE_CURRENT_SOURCE_DIR}/Cosine.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/D1DLookupTable.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/D2DLookupTable.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/DirectLookupTableND.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/InterpolationUsingPrelookup.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/LookupTableDynamic.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/NDLookupTable.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/Prelookup.cxx
    ${CMAKE_CURRENT_SOURCE_DIR}/Sine.cxx
)

set(LookupTables_HDRS
    ${CMAKE_CURRENT_SOURCE_DIR}/Cosine.h
    ${CMAKE_CURRENT_SOURCE_DIR}/D1DLookupTable.h
    ${CMAKE_CURRENT_SOURCE_DIR}/D2DLookupTable.h
    ${CMAKE_CURRENT_SOURCE_DIR}/DirectLookupTableND.h
    ${CMAKE_CURRENT_SOURCE_DIR}/InterpolationUsingPrelookup.h
    ${CMAKE_CURRENT_SOURCE_DIR}/LookupTableDynamic.h
    ${CMAKE_CURRENT_SOURCE_DIR}/NDLookupTable.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Prelookup.h
    ${CMAKE_CURRENT_SOURCE_DIR}/Sine.h
)


set(LookupTables_HDRS ${LookupTables_HDRS} PARENT_SCOPE)
set(LookupTables_SRCS ${LookupTables_SRCS} PARENT_SCOPE)
