# Copyright 2026 Wissem Chiha
#
# Licensed under the Apache License, Version 2.0 (the "License"); you may not
# use this file except in compliance with the License. You may obtain a copy of
# the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
# WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
# License for the specific language governing permissions and limitations under
# the License.

include(CMakeDependentOption)
include(doctest)

macro(advanced_option option_name description value)
  option(${option_name} "${description}" ${value})
  mark_as_advanced(${option_name})
endmacro()

macro(configure_option option_name description value)
  option(${option_name} "${description}" ${value})
  set(${option_name} ${${option_name}})
endmacro()

macro(advanced_dependent_option option_name description value dependent_option
      dependent_value)
  cmake_dependent_option(${option_name} "${description}" ${value}
                         "${dependent_option}" ${dependent_value})
  mark_as_advanced(${option_name})
endmacro()

macro(advanced_configure_option option_name description value)
  option(${option_name} "${description}" ${value})
  mark_as_advanced(${option_name})
  set(${option_name} ${${option_name}})
endmacro()

# SLXIO_SHARED_AND_STATIC_LIBS : ${module_name} shared, ${module_name}_s static
# SLXIO_SHARED_LIBS : ${module_name} shared SLXIO_STATIC_LIBS : ${module_name}
# static
macro(add_module module_name)
  if(SLXIO_SHARED_AND_STATIC_LIBS)
    add_library(${module_name}_s STATIC ${ARGN})
    add_library(${module_name} SHARED ${ARGN})
    set_target_properties(
      ${module_name} PROPERTIES OUTPUT_NAME "${module_name}"
                                PREFIX "${CMAKE_SHARED_LIBRARY_PREFIX}")
    set_target_properties(
      ${module_name}_s PROPERTIES OUTPUT_NAME "${module_name}_s"
                                  PREFIX "${CMAKE_STATIC_LIBRARY_PREFIX}")
  endif()
  if(SLXIO_SHARED_LIBS)
    add_library(${module_name} SHARED ${ARGN})
    set_target_properties(
      ${module_name} PROPERTIES OUTPUT_NAME "${module_name}"
                                PREFIX "${CMAKE_SHARED_LIBRARY_PREFIX}")
  endif()
  if(SLXIO_STATIC_LIBS)
    add_library(${module_name} STATIC ${ARGN})
    set_target_properties(
      ${module_name} PROPERTIES OUTPUT_NAME "${module_name}"
                                PREFIX "${CMAKE_STATIC_LIBRARY_PREFIX}")
  endif()
  target_include_directories(${module_name} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
                                                   ${CMAKE_CURRENT_BINARY_DIR})
endmacro()

macro(module_link_libraries module_name)
  target_link_libraries(${module_name} PUBLIC ${ARGN})
  if(SLXIO_SHARED_AND_STATIC_LIBS)
    target_link_libraries(${module_name}_s PUBLIC ${ARGN})
    target_link_libraries(${module_name} PUBLIC ${ARGN})
  endif()
  if(SLXIO_STATIC_LIBS)
    target_link_libraries(${module_name} PUBLIC ${ARGN})
  endif()
  if(SLXIO_SHARED_LIBS)
    target_link_libraries(${module_name} PUBLIC ${ARGN})
  endif()
endmacro()

macro(module_include_directories module_name)
  target_include_directories(${module_name} PUBLIC ${ARGN})
  if(SLXIO_SHARED_AND_STATIC_LIBS)
    target_include_directories(${module_name}_s PUBLIC ${ARGN})
    target_include_directories(${module_name} PUBLIC ${ARGN})
    target_include_directories(
      ${module_name}_s PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
                              ${CMAKE_CURRENT_BINARY_DIR})
  endif()
  if(SLXIO_STATIC_LIBS)
    target_include_directories(${module_name} PUBLIC ${ARGN})
  endif()
  if(SLXIO_SHARED_LIBS)
    target_include_directories(${module_name} PUBLIC ${ARGN})
  endif()
endmacro()

function(module_add_tests module_name)
  if(SLXIO_UNIT_TESTS)
    enable_testing()
    foreach(test_source IN LISTS ARGN)
      get_filename_component(test_source_name "${test_source}" NAME_WE)
      add_executable(${test_source_name} ${test_source})
      target_link_libraries(${test_source_name} PRIVATE ${module_name})
      add_dependencies(${test_source_name} ${module_name})
      doctest_discover_tests(
        ${test_source_name} WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        PROPERTIES LABELS "unit")
    endforeach()
    file(COPY "${CMAKE_CURRENT_SOURCE_DIR}/data"
         DESTINATION "${CMAKE_CURRENT_BINARY_DIR}")
  endif()
endfunction()
