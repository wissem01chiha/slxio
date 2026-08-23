add_module(
  MODULE_NAME 
    Library
  MODULE_GROUP 
    Simulink
  LIBRARY_NAME 
    SimulinkLibrary
  MODULE_ENABLE_BUILD 
    TRUE
  MODULE_ENABLE_TESTS 
    TRUE
  MODULE_CONFIG_HEADERS
  MODULE_CLASSES
  MODULE_HEADERS
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
    SimulinkCore
    #fast_float
  MODULE_TEST_DEPENDS
  MODULE_TEST_INCLUDE_DIRS
    ${PROJECT_SOURCE_DIR}/ThirdParty/doctest
)

# add_subdirectory(AdditionalMathDiscrete)
# add_subdirectory(CommonlyUsedBlocks)
add_subdirectory(Continuous)
# add_subdirectory(Discontinuities)
# add_subdirectory(Discrete)
# add_subdirectory(LogicandBitOperations)
# add_subdirectory(LookupTables)
# add_subdirectory(MathOperations)
# add_subdirectory(MatrixOperations)
# add_subdirectory(MessagesEvents)
# add_subdirectory(ModelVerification)
# add_subdirectory(ModelWideUtilities)
# add_subdirectory(PortsSubsystems)
# add_subdirectory(QuickInsert)
# add_subdirectory(SignalAttributes)
# add_subdirectory(SignalRouting)
# add_subdirectory(Sinks)
# add_subdirectory(Sources)
# add_subdirectory(String)
# add_subdirectory(UserDefinedFunctions)