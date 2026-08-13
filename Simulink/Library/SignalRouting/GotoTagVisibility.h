// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef GOTOTAGVISIBILITY_H
#define GOTOTAGVISIBILITY_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT GotoTagVisibility : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  GotoTagVisibility();

  /** Default Destructor */
  ~GotoTagVisibility();

  const std::string& GetGototag() const;
  void SetGototag(const std::string& value);

private:

  std::string m_Gototag;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // GOTOTAGVISIBILITY_H
