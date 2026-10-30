add_module(
  Archive
    Archive.cxx
    ArchiveManager.cxx
)
module_link_libraries(Archive Core System)
set_target_properties(Archive PROPERTIES OUTPUT_NAME "CommonArchive")
module_include_directories(
  Archive ${PROJECT_THIRDPARTY_SOURCE_DIR}/libzip)
add_subdirectory(Testing)