add_module(
  Annotation
  SimulinkAnnotationCollection.cxx
  SimulinkAnnotationStyle.cxx
  SimulinkColor.cxx
  )
module_link_libraries(Annotation Core Layout)
set_target_properties(Annotation PROPERTIES OUTPUT_NAME
                                               "SimulinkAnnotation")
add_subdirectory(Testing)
