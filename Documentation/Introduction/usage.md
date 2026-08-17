---
title: Use In Other Projects
layout: page
nav_order: 4
---

# Use in Other Projects

Currently, the only supported build system is CMake. Other build systems are not planned at the moment, though they may be considered in future discussions.
Below are several ways to integrate `slxio` into your project:

- 1. Using FetchContent (built-in CMake module)

The simplest way is to use CMake’s built-in [`FetchContent`](https://cmake.org/cmake/help/latest/module/FetchContent.html) to add `slxio` as an external dependency.
This will automatically download, configure, and build the library alongside your application.

  ```cmake
  include(FetchContent)

  FetchContent_Declare(
    slxio
    GIT_REPOSITORY https://github.com/wissem01chiha/slxio.git
    GIT_TAG master
  )
  FetchContent_MakeAvailable(slxio)

  add_executable(app main.cpp)
  target_link_libraries(app PRIVATE SLXIO::SLXIO)
  ```
- 2. Using CPM.cmake (CMake Package Manager)

  If you prefer a package manager approach, you can use [CPM.cmake]() to fetch and integrate slxio

 ```cmake
  CPMAddPackage(
    NAME slxio
    GITHUB_REPOSITORY wissem01chiha/slxio
    VERSION 0.1.0
  )

  add_executable(app main.cpp)
  target_link_libraries(app PRIVATE SLXIO::SLXIO)
  ```

- 3. Using ExternalProject

For more control, you can use  [ExternalProject](https://cmake.org/cmake/help/latest/module/ExternalProject.html)  to build slxio separately and then link it:

  ```cmake
  include(ExternalProject)

  ExternalProject_Add(
    slxio
    GIT_REPOSITORY https://github.com/wissem01chiha/slxio.git
    GIT_TAG master
    UPDATE_DISCONNECTED 1
    PREFIX ${CMAKE_BINARY_DIR}/slxio
    INSTALL_COMMAND ""
  )

  add_executable(app main.cpp)
  add_dependencies(app slxio)
  target_link_libraries(app PRIVATE SLXIO::SLXIO)
  ```

- 4. Using find_package

Once slxio provides proper CMake configuration files, you’ll be able to integrate it like any other modern CMake package:

  ```cmake
  find_package(slxio CONFIG REQUIRED)

  add_executable(app main.cpp)
  target_link_libraries(app PRIVATE SLXIO::SLXIO)
  ```
