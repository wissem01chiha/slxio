// Copyright 2025-2026 Wissem Chiha
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef VERSION_H
#define VERSION_H

#include "ABINamespace.h"
#include "Type.h"
#include "VersionMacro.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/// @brief  Manage the version of the library.
class Version {
public:
  static uint32 getMajorVersion();
  static uint32 getMinorVersion();
  static uint32 getPatchVersion();
  bool isMajorVersionLessThan(uint32 version);
  bool isMinorVersionLessThan(uint32 version);

private:
  Version() = default;
  ~Version() = default;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // VERSION_H