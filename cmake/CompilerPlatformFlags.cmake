# Copyright 2026 Wissem Chiha
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#   http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Enforce strict C++14 compliance on macOS with Apple Clang. By default, Apple
# Clang only warns when C++17 extensions are used. We promote these warnings to
# errors to ensure no C++17 features are used across the project. This check can
# be removed if we upgrade the codebase to C++17.
if(APPLE)
  if(CMAKE_CXX_COMPILER_ID STREQUAL "AppleClang")
    add_compile_options(-Werror=c++17-extensions)
  endif()
endif()
