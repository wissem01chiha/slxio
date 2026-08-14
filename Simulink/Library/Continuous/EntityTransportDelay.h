// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ENTITYTRANSPORTDELAY_H
#define ENTITYTRANSPORTDELAY_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT EntityTransportDelay
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  EntityTransportDelay();

  /** Default Destructor */
  ~EntityTransportDelay();

  const std::string& GetCapacity() const;
  void SetCapacity(const std::string& value);

  const std::string& GetShownumberentitiesinblock() const;
  void SetShownumberentitiesinblock(const std::string& value);

private:
  std::string m_Capacity;

  std::string m_Shownumberentitiesinblock;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // ENTITYTRANSPORTDELAY_H
