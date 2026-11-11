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

set(ENABLE_COMMONCRYPTO ON)
set(ENABLE_GNUTLS ON)
set(ENABLE_OPENSSL OFF)
set(ENABLE_WINDOWS_CRYPTO ON)
set(ENABLE_BZIP2 ON)
set(ENABLE_LZMA ON)
set(ENABLE_ZSTD OFF) # https://github.com/wissem01chiha/slxio/issues/54
set(ENABLE_FDOPEN ON)
set(ENABLE_COVERAGE OFF)
set(LIMIT_LZMA_WINDOW OFF)
set(BUILD_TOOLS OFF)
set(BUILD_REGRESS ${SLXIO_BUILD_EXTERN_TESTS})
set(BUILD_OSSFUZZ ${SLXIO_BUILD_EXTERN_TESTS})
set(BUILD_EXAMPLES OFF)
set(BUILD_DOC OFF)
set(BUILD_SHARED_LIBS ${SLXIO_BUILD_SHARED_LIBS})
set(LIBZIP_DO_INSTALL ON)
set(SHARED_LIB_VERSIONNING ON)

add_subdirectory(src)