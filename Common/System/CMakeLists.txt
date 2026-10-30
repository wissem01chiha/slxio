add_module(
  System
    File.cxx
    Directory.cxx
    FileManager.cxx
    DirectoryManager.cxx
    ExecutableManager.cxx
    DirectoryService.cxx
)
module_link_libraries(System Core libzip::zip uv_a)
set_target_properties(System PROPERTIES OUTPUT_NAME "CommonSystem")
module_include_directories(
  System ${PROJECT_THIRDPARTY_SOURCE_DIR}/libuv)
add_subdirectory(Testing)