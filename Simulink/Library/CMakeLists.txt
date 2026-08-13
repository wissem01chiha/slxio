set(LIB_SRCS)
set(LIB_HDRS)

add_subdirectory(AdditionalMathDiscrete)
add_subdirectory(CommonlyUsedBlocks)
add_subdirectory(Continuous)
add_subdirectory(Discontinuities)
add_subdirectory(Discrete)
add_subdirectory(LogicandBitOperations)
add_subdirectory(LookupTables)
add_subdirectory(MathOperations)
add_subdirectory(MatrixOperations)
add_subdirectory(MessagesEvents)
add_subdirectory(ModelVerification)
add_subdirectory(ModelWideUtilities)
add_subdirectory(PortsSubsystems)
add_subdirectory(QuickInsert)
add_subdirectory(SignalAttributes)
add_subdirectory(SignalRouting)
add_subdirectory(Sinks)
add_subdirectory(Sources)
add_subdirectory(String)
add_subdirectory(UserDefinedFunctions)

list(APPEND LIB_SRCS ${AdditionalMathDiscrete_SRCS})
list(APPEND LIB_SRCS ${CommonlyUsedBlocks_SRCS})
list(APPEND LIB_SRCS ${Continuous_SRCS})
list(APPEND LIB_SRCS ${Discontinuities_SRCS})
list(APPEND LIB_SRCS ${Discrete_SRCS})
list(APPEND LIB_SRCS ${LogicandBitOperations_SRCS})
list(APPEND LIB_SRCS ${LookupTables_SRCS})
list(APPEND LIB_SRCS ${MathOperations_SRCS})
list(APPEND LIB_SRCS ${MatrixOperations_SRCS})
list(APPEND LIB_SRCS ${MessagesEvents_SRCS})
list(APPEND LIB_SRCS ${ModelVerification_SRCS})
list(APPEND LIB_SRCS ${ModelWideUtilities_SRCS})
list(APPEND LIB_SRCS ${PortsSubsystems_SRCS})
list(APPEND LIB_SRCS ${QuickInsert_SRCS})
list(APPEND LIB_SRCS ${SignalAttributes_SRCS})
list(APPEND LIB_SRCS ${SignalRouting_SRCS})
list(APPEND LIB_SRCS ${Sinks_SRCS})
list(APPEND LIB_SRCS ${Sources_SRCS})
list(APPEND LIB_SRCS ${String_SRCS})
list(APPEND LIB_SRCS ${UserDefinedFunctions_SRCS})

list(APPEND LIB_HDRS ${AdditionalMathDiscrete_HDRS})
list(APPEND LIB_HDRS ${CommonlyUsedBlocks_HDRS})
list(APPEND LIB_HDRS ${Continuous_HDRS})
list(APPEND LIB_HDRS ${Discontinuities_HDRS})
list(APPEND LIB_HDRS ${Discrete_HDRS})
list(APPEND LIB_HDRS ${LogicandBitOperations_HDRS})
list(APPEND LIB_HDRS ${LookupTables_HDRS})
list(APPEND LIB_HDRS ${MathOperations_HDRS})
list(APPEND LIB_HDRS ${MatrixOperations_HDRS})
list(APPEND LIB_HDRS ${MessagesEvents_HDRS})
list(APPEND LIB_HDRS ${ModelVerification_HDRS})
list(APPEND LIB_HDRS ${ModelWideUtilities_HDRS})
list(APPEND LIB_HDRS ${PortsSubsystems_HDRS})
list(APPEND LIB_HDRS ${QuickInsert_HDRS})
list(APPEND LIB_HDRS ${SignalAttributes_HDRS})
list(APPEND LIB_HDRS ${SignalRouting_HDRS})
list(APPEND LIB_HDRS ${Sinks_HDRS})
list(APPEND LIB_HDRS ${Sources_HDRS})
list(APPEND LIB_HDRS ${String_HDRS})
list(APPEND LIB_HDRS ${UserDefinedFunctions_HDRS})

slx_add_module(
  MODULE_NAME 
    Library
  MODULE_GROUP 
    Simulink
  LIBRARY_NAME 
    SimulinkLibrary
  MODULE_DESCRIPTION 
    "Simulink Library Support Module"
  MODULE_MAINTAINER 
    "Wissem Chiha"
  MODULE_SPDX_LICENSE_IDENTIFIER 
    "Apache-2.0"
  MODULE_SPDX_COPYRIGHT_TEXT 
    "Copyright (c) 2025-2026 Wissem Chiha"
  MODULE_ENABLE_BUILD 
    TRUE
  MODULE_ENABLE_TESTS 
    TRUE
  MODULE_CONFIG_HEADERS
  MODULE_INSTALL_HEADERS
  MODULE_INSTALL_TARGETS
  MODULE_INSTALL_LICENSES
  MODULE_INSTALL_DOCS
  MODULE_CLASSES
    ${LIB_SRCS}
  MODULE_HEADERS
    ${LIB_HDRS}
  MODULE_PCH_HEADERS
    LibraryPCH.h
  MODULE_SOURCES
  MODULE_TEST_SOURCE_DIR
    Testing/Cxx
  MODULE_TEST_DATA_SOURCE_DIR
    Testing/Data
  MODULE_TEST_DATA_SOURCES
  MODULE_TEST_SOURCES
  MODULE_INCLUDE_DIRS
  MODULE_PUBLIC_DEPENDS
    CommonCore
    CommonDataModel
    SimulinkData
  MODULE_TEST_DEPENDS
  MODULE_TEST_INCLUDE_DIRS
    ${PROJECT_SOURCE_DIR}/ThirdParty/doctest
)