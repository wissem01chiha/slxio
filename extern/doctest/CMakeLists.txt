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

set(CMAKE_POLICY_DEFAULT_CMP0077 NEW)

set(DOCTEST_WITH_TESTS ${SLXIO_BUILD_EXTERN_TESTS})
set(DOCTEST_WITH_MAIN_IN_STATIC_LIB OFF)
set(DOCTEST_NO_INSTALL OFF)
set(DOCTEST_USE_STD_HEADERS OFF)
set(DOCTEST_INTERNAL_WERROR OFF)
set(DOCTEST_INTERNAL_COVERAGE OFF)

add_subdirectory(src)