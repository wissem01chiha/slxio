# SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
# SPDX-License-Identifier: Apache-2.0

# Option to force a minium version of target OSX 
# Platform, we require macOS 13 or newer at least 
set(CMAKE_OSX_DEPLOYMENT_TARGET "13.0" CACHE STRING "Minimum OS X deployment target")

# Option to set build type, note that this is true only for single 
# generators, default is Release
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release CACHE STRING "Build type" FORCE)
endif()



