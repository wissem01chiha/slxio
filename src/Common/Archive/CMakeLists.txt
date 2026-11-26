# Copyright 2025-2026 Wissem Chiha
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

add_module(CommonArchive ArchiveInfo.cxx Archive.cxx)
if(SLXIO_STATIC_LIBS)
  set(SLXIO_ARCHIVE_ZLIB ZLIB::ZLIBSTATIC)
else()
  set(SLXIO_ARCHIVE_ZLIB ZLIB::ZLIB)
endif()
module_link_libraries(CommonArchive CommonSystem CommonCore libzip::zip
                      ${SLXIO_ARCHIVE_ZLIB})
module_include_directories(CommonArchive ${PROJECT_EXTERN_SOURCE_DIR}/libzip)
add_subdirectory(test)
