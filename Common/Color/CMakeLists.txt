add_module(
  Color
  Color.cxx
)
module_link_libraries(Color Core)
set_target_properties(Color PROPERTIES OUTPUT_NAME "CommonColor")