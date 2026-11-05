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
set(SPDLOG_BUILD_ALL OFF)
set(SPDLOG_BUILD_SHARED ${SLXIO_BUILD_SHARED_LIBS})
set(SPDLOG_ENABLE_PCH OFF)
set(SPDLOG_BUILD_PIC OFF)
set(SPDLOG_DEBUG_POSTFIX "d")
set(SPDLOG_BUILD_EXAMPLE OFF)
set(SPDLOG_BUILD_EXAMPLE_HO OFF)
set(SPDLOG_BUILD_TESTS OFF)
set(SPDLOG_BUILD_TESTS_HO OFF)
set(SPDLOG_BUILD_BENCH OFF)
set(SPDLOG_SANITIZE_ADDRESS OFF)
set(SPDLOG_SANITIZE_THREAD OFF)
set(SPDLOG_BUILD_WARNINGS OFF)
set(SPDLOG_SYSTEM_INCLUDES OFF)
set(SPDLOG_INSTALL OFF)
set(SPDLOG_USE_STD_FORMAT OFF)
set(SPDLOG_FMT_EXTERNAL OFF)
set(SPDLOG_FMT_EXTERNAL_HO OFF)
set(SPDLOG_NO_EXCEPTIONS OFF)
set(SPDLOG_NO_TZ_OFFSET OFF)
set(SPDLOG_WCHAR_SUPPORT OFF)
set(SPDLOG_WCHAR_FILENAMES OFF)
set(SPDLOG_WCHAR_CONSOLE OFF)
set(SPDLOG_MSVC_UTF8 ON)
set(SPDLOG_CLOCK_COARSE OFF)
set(SPDLOG_PREVENT_CHILD_FD OFF)
set(SPDLOG_NO_THREAD_ID OFF)
set(SPDLOG_NO_TLS OFF)
set(SPDLOG_NO_ATOMIC_LEVELS OFF)
set(SPDLOG_DISABLE_DEFAULT_LOGGER OFF)
set(SPDLOG_FWRITE_UNLOCKED ON)
set(SPDLOG_TIDY OFF)

add_subdirectory(src)