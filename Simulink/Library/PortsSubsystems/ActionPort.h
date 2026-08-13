// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ACTIONPORT_H
#define ACTIONPORT_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT ActionPort : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  ActionPort();

  /** Default Destructor */
  ~ActionPort();

  const std::string& GetInitializestates() const;
  void SetInitializestates(const std::string& value);

  const std::string& GetPropagatevarsize() const;
  void SetPropagatevarsize(const std::string& value);

private:

  std::string m_Initializestates;

  std::string m_Propagatevarsize;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // ACTIONPORT_H
