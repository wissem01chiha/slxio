// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef __Version_h__
#define __Version_h__

#include "ABINamespaceMacro.h"
#include "PlatformTypes.h"
#include "VersionMacro.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/// @brief  Manage the version of the library.
class Version final 
{
public:
  static UInt32 GetMajorVersion();
  static UInt32 GetMinorVersion();
  static UInt32 GetPatchVersion();
  bool IsMajorVersionLessThan(UInt32 version);
  bool IsMinorVersionLessThan(UInt32 version);

private:
  Version() = default;
  ~Version() = default;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif /* __Version_h__ */