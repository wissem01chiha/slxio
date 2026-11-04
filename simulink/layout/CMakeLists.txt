add_module(
  Layout
  SimulinkPortLayout.cxx)
module_link_libraries(Layout Core Color Math)
set_target_properties(Layout PROPERTIES OUTPUT_NAME "SimulinkLayout")
add_subdirectory(Testing)
