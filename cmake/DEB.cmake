# Copyright 2026 Wissem Chiha
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

set(CPACK_GENERATOR "DEB")
set(CPACK_PACKAGE_NAME "slxio")
set(CPACK_PACKAGE_VERSION "${CMAKE_PROJECT_VERSION}")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Wissem Chiha")
set(CPACK_PACKAGE_CONTACT "chihawissem08@gmail.com")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "SIMULINK® SLX File I/O Library")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "slxio")
set(CPACK_DEBIAN_PACKAGE_DEPENDS "")
include(CPack)
