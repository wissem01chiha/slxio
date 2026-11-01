add_module(
  Configuration
  SimulinkConfigSet.cxx
  SimulinkConfigSetComponent.cxx
  SimulinkConfigSetCollection.cxx
  SimulinkModelReferenceValidator.cxx
  SimulinkCoverageValidator.cxx
  SimulinkCodeGenerationValidator.cxx
  SimulinkHardwareValidator.cxx
  SimulinkOptimizationValidator.cxx
  SimulinkRTWValidator.cxx)
module_link_libraries(Configuration Core Data)
set_target_properties(Configuration PROPERTIES OUTPUT_NAME
                                               "SimulinkConfiguration")
add_subdirectory(Testing)
