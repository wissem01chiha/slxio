add_module(
  Data
  IDataObject.cxx
  JsonDataObject.cxx
  XmlDocDataObject.cxx
  XmlNodeDataObject.cxx
  IParameterDataObjectBase.cxx
  XmlCharDataObject.cxx
  XmlNodeDataObject.cxx)
module_link_libraries(Data json-c LibXml2 Core)
set_target_properties(Data PROPERTIES OUTPUT_NAME "CommonData")
module_include_directories(
  Data ${PROJECT_THIRDPARTY_SOURCE_DIR}/doctest
  ${PROJECT_THIRDPARTY_SOURCE_DIR}/json-c
  ${PROJECT_THIRDPARTY_SOURCE_DIR}/libxml2)
add_subdirectory(Testing)
