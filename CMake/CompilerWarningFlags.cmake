set(CMAKE_SUPPRESS_DEVELOPER_WARNINGS 1)

if(MSVC)
  add_compile_options(/wd4244 /wd4267 /wd4245 /wd4334 /wd4702 /wd4334 /wd4701 /wd4152)
else()
  add_compile_options(-Wno-return-type)
endif()
