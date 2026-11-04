add_module(
  System
    File.cxx
    Directory.cxx
    FileManager.cxx
    DirectoryManager.cxx
    ExecutableManager.cxx
    DirectoryService.cxx
)
module_link_libraries(System Core libzip::zip)
set_target_properties(System PROPERTIES OUTPUT_NAME "CommonSystem")
add_subdirectory(Testing)