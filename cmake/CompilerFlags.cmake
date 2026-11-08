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

if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang|AppleClang")
  if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_compile_options(-O0 -g -DDEBUG)
  elseif(CMAKE_BUILD_TYPE STREQUAL "Release")
    add_compile_options(-O3)
  endif()
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
  if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_compile_options(/Od /Zi /MDd /EHsc)
  elseif(CMAKE_BUILD_TYPE STREQUAL "Release")
    add_compile_options(/O2 /MD /EHsc)
  endif()
endif()

if(SLXIO_ENABLE_SANITIZERS)

  if(SLXIO_ASAN)
    if(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
      # Works only with LLVM/Clang toolset in MSVC
      add_compile_options(/fsanitize=address)
      add_link_options(/fsanitize=address)
    elseif(CMAKE_CXX_COMPILER_ID MATCHES "Clang|GNU")
      add_compile_options(-fsanitize=address)
      add_link_options(-fsanitize=address)
    endif()
  endif()

  if(SLXIO_UBSAN)
    # UBSan works with GCC and Clang
    if(CMAKE_CXX_COMPILER_ID MATCHES "Clang|GNU")
      add_compile_options(-fsanitize=undefined)
      add_link_options(-fsanitize=undefined)
    endif()
  endif()

  if(NOT WIN32)
    if(SLXIO_MSAN)
      # MSan works only with Clang
      if(CMAKE_CXX_COMPILER_ID MATCHES "Clang")
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=memory")
        set(CMAKE_LINKER_FLAGS "${CMAKE_LINKER_FLAGS} -fsanitize=memory")
        set(CMAKE_LINKER_FLAGS
            "${CMAKE_LINKER_FLAGS} -fsanitize=memory -stdlib=libc++")
      endif()
    endif()

    if(SLXIO_TSAN)
      set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=thread")
      set(CMAKE_LINKER_FLAGS "${CMAKE_LINKER_FLAGS} -fsanitize=thread")
      if(CMAKE_CXX_COMPILER_ID MATCHES "Clang")
        set(CMAKE_LINKER_FLAGS
            "${CMAKE_LINKER_FLAGS} -fsanitize=thread -stdlib=libc++")
      endif()
    endif()
  endif()
endif()

if(SLXIO_ENABLE_COVERAGE)
  if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    add_compile_options(--coverage)
    add_link_options(--coverage)
  endif()
endif()
