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

set(NB_CREATE_INSTALL_RULES OFF)
set(NB_USE_SUBMODULE_DEPS OFF)
set(NB_INSTALL_DATADIR "nanobind")
set(NB_TEST OFF)
set(NB_TEST_STABLE_ABI ${SLXIO_BUILD_EXTERN_TESTS})
set(NB_TEST_SHARED_BUILD ${SLXIO_BUILD_EXTERN_TESTS})
set(NB_TEST_CUDA OFF)
set(NB_TEST_FREE_THREADED OFF)
set(NB_TEST_SANITIZERS_ASAN OFF)
set(NB_TEST_SANITIZERS_UBSAN OFF)
set(NB_TEST_SANITIZERS_TSAN OFF)

add_subdirectory(src)