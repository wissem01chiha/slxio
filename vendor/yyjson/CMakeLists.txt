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

set(BUILD_SHARED_LIBS ${SLXIO_BUILD_SHARED_LIBS})
set(YYJSON_BUILD_TESTS OFF)
set(YYJSON_BUILD_FUZZER OFF)
set(YYJSON_BUILD_MISC OFF)
set(YYJSON_BUILD_DOC OFF)
set(YYJSON_ENABLE_COVERAGE OFF)
set(YYJSON_ENABLE_VALGRIND OFF)
set(YYJSON_ENABLE_FASTMATH OFF)
set(YYJSON_FORCE_32_BIT OFF)
set(YYJSON_INSTALL ON)
set(YYJSON_SANITIZER "")

set(YYJSON_DISABLE_READER OFF)
set(YYJSON_DISABLE_WRITER OFF)
set(YYJSON_DISABLE_INCR_READER OFF)
set(YYJSON_DISABLE_FILE OFF)
set(YYJSON_DISABLE_UTILS OFF)
set(YYJSON_DISABLE_FAST_FP_CONV OFF)
set(YYJSON_DISABLE_NON_STANDARD OFF)
set(YYJSON_DISABLE_UTF8_VALIDATION OFF)
set(YYJSON_DISABLE_UNALIGNED_MEMORY_ACCESS OFF)
set(YYJSON_FREESTANDING OFF)
set(YYJSON_READER_DEPTH_LIMIT 0)
set(YYJSON_WRITER_DEPTH_LIMIT 0)

add_subdirectory(src)