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

set(PUGIXML_USE_VERSIONED_LIBDIR OFF)
set(PUGIXML_USE_POSTFIX OFF)
set(PUGIXML_STATIC_CRT OFF)
set(PUGIXML_BUILD_TESTS ${SLXIO_BUILD_EXTERN_TESTS})
set(PUGIXML_BUILD_DEFINES "")
set(PUGIXML_BUILD_SHARED_AND_STATIC_LIBS OFF)
set(PUGIXML_INSTALL ON)
set(PUGIXML_INSTALL_SOURCE OFF)
set(PUGIXML_BUILD_APPLE_FRAMEWORK OFF)
set(PUGIXML_WCHAR_MODE OFF)
set(PUGIXML_COMPACT OFF)
set(PUGIXML_CHARCONV_FLOAT OFF)
set(PUGIXML_NO_XPATH OFF)
set(PUGIXML_NO_STL OFF)
set(PUGIXML_NO_EXCEPTIONS OFF)
set(BUILD_SHARED_LIBS ${SLXIO_BUILD_SHARED_LIBS})

if(SLXIO_BUILD_SHARED_AND_STATIC_LIBS)
	set(BUILD_SHARED_LIBS ON)
	set(PUGIXML_BUILD_SHARED_AND_STATIC_LIBS ON)
elseif(SLXIO_BUILD_SHARED_LIBS AND SLXIO_BUILD_STATIC_LIBS)
	set(PUGIXML_BUILD_SHARED_AND_STATIC_LIBS ON)
endif()

add_subdirectory(src)