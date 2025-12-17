# Copyright 2025 Wissem Chiha
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

file(GLOB SLXIO_CLI_SOURCES src/*.cpp)
foreach(CLI_SOURCE_FILE IN LISTS SLXIO_CLI_SOURCES)
    get_filename_component(CLI_EXECUTABLE_NAME ${CLI_SOURCE_FILE} NAME_WE)
    add_executable(${CLI_EXECUTABLE_NAME} ${CLI_SOURCE_FILE})
    target_include_directories(${CLI_EXECUTABLE_NAME} PRIVATE ${SLXIO_INCLUDE_DIRECTORIES})
    target_link_libraries(${CLI_EXECUTABLE_NAME} PRIVATE ${SLXIO_LINK_LIBRARIES} slxio)
    if(CMAKE_BUILD_TYPE STREQUAL "Debug")
        if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU" OR CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
            target_compile_options(${CLI_EXECUTABLE_NAME} PRIVATE -g  -DDEBUG)
        elseif(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
            target_compile_options(${CLI_EXECUTABLE_NAME} PRIVATE /Zi /DDEBUG)
            target_link_options(${CLI_EXECUTABLE_NAME} PRIVATE /DEBUG)
        endif()
    endif()
    add_dependencies(${CLI_EXECUTABLE_NAME} slxio)
endforeach()