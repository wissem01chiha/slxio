set(CMAKE_SUPPRESS_DEVELOPER_WARNINGS 1)
if(NOT MSVC)
  add_compile_options(-Wno-return-type)
endif()
