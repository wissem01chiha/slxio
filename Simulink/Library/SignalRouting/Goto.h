// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef GOTO_H
#define GOTO_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Goto
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  Goto();

  /** Default Destructor */
  ~Goto();

  const std::string& GetGototag() const;
  void SetGototag(const std::string& value);

  const std::string& GetIcondisplay() const;
  void SetIcondisplay(const std::string& value);

  const std::string& GetTagvisibility() const;
  void SetTagvisibility(const std::string& value);

private:
  std::string m_Gototag;

  std::string m_Icondisplay;

  std::string m_Tagvisibility;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // GOTO_H
