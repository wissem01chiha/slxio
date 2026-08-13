// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef RESET_H
#define RESET_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Reset : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  Reset();

  /** Default Destructor */
  ~Reset();

  const std::string& GetResettriggertype() const;
  void SetResettriggertype(const std::string& value);

  const std::string& GetPropagatevarsize() const;
  void SetPropagatevarsize(const std::string& value);

  const std::string& GetZerocross() const;
  void SetZerocross(const std::string& value);

private:

  std::string m_Resettriggertype;

  std::string m_Propagatevarsize;

  std::string m_Zerocross;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // RESET_H
