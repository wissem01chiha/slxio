// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DISPLAY_H
#define DISPLAY_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Display : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  Display();

  /** Default Destructor */
  ~Display();

  const std::string& GetFormat() const;
  void SetFormat(const std::string& value);

  const std::string& GetDecimation() const;
  void SetDecimation(const std::string& value);

  const std::string& GetFloating() const;
  void SetFloating(const std::string& value);

private:

  std::string m_Format;

  std::string m_Decimation;

  std::string m_Floating;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // DISPLAY_H
