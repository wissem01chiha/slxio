add_module(
  Configuration
  SimulinkCodeGeneration.cxx
  SimulinkConfigurationRegistry.cxx
  SimulinkSolver.cxx
  SimulinkSFSim.cxx
  SimulinkSFSim.cxx
  SimulinkRTW.cxx
  SimulinkOptimization.cxx
  SimulinkModelReference.cxx
  SimulinkHardware.cxx
  SimulinkDebugging.cxx
  SimulinkConfigSet.cxx
  SimulinkConfigSetManager.cxx)
module_link_libraries(Configuration Core Data)
set_target_properties(Core PROPERTIES OUTPUT_NAME "SimulinkConfiguration")
module_include_directories(Configuration)
add_subdirectory(Testing)
