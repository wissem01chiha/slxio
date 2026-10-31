add_module(
  Configuration
  SimulinkConfigSet.cxx
  SimulinkConfigSetComponent.cxx
  SimulinkConfigSetCollection.cxx)
module_link_libraries(Configuration Core Data)
set_target_properties(Configuration PROPERTIES OUTPUT_NAME
                                               "SimulinkConfiguration")
module_include_directories(Configuration)
add_subdirectory(Testing)
