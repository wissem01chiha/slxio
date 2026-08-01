# SPDX-FileCopyrightText: Copyright (c) Wissem Chiha
# SPDX-License-Identifier: MIT
#[=======================================================================]
# FindUnity
# -----------
# Find the Unity Testing Framework
#
#  find_package(Unity [<version>] REQUIRED)
#
#    - Unity_FOUND        - True if the framework was found.
#    - Unity_VERSION      - The version of unity found.
#    - Unity_INCLUDE_DIRS - The include directories for unity.
#    - Unity_LIBRARIES    - The libraries to link against.
#==========================================================================]

find_path(UNITY_INCLUDE_DIRS  "unity/unity.h")
find_path(UNITY_INTERNALS_INCLUDE_DIRS "unity/unity_internals.h")
find_path(Unity_LIBRARIES "lib/libunity.a")

if(UNITY_INCLUDE_DIRS AND UNITY_INTERNALS_INCLUDE_DIRS AND Unity_LIBRARIES)
  set(Unity_FOUND TRUE)
  set(Unity_INCLUDE_DIRS "${UNITY_INCLUDE_DIRS}/unity")
else()
  set(Unity_FOUND FALSE)
endif()

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(Unity 
  DEFAULT_MSG 
  Unity_INCLUDE_DIRS 
  Unity_LIBRARIES
)