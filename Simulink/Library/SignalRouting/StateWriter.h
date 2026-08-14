// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef STATEWRITER_H
#define STATEWRITER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT StateWriter
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  StateWriter();

  /** Default Destructor */
  ~StateWriter();

  const std::string& GetStateownerblock() const;
  void SetStateownerblock(const std::string& value);

  const std::string& GetStatename() const;
  void SetStatename(const std::string& value);

private:
  std::string m_Stateownerblock;

  std::string m_Statename;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // STATEWRITER_H
