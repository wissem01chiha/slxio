add_module(
  Math
  Point.cxx)
module_link_libraries(Math Core)
set_target_properties(Math PROPERTIES OUTPUT_NAME "CommonMath")
add_subdirectory(Testing)