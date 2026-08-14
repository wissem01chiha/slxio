// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef BITSET_H
#define BITSET_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT BitSet
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  BitSet();

  /** Default Destructor */
  ~BitSet();

  const std::string& GetIbit() const;
  void SetIbit(const std::string& value);

private:
  std::string m_Ibit;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // BITSET_H
