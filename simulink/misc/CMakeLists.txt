add_module(
  Misc
  CoderInfo.cxx
  EditorSettings.cxx
  SimulationSettings.cxx)
module_link_libraries(Misc Core)
set_target_properties(Misc PROPERTIES OUTPUT_NAME
                                               "SimulinkMisc")
add_subdirectory(test)
