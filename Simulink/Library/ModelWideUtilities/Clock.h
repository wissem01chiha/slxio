// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef CLOCK_H
#define CLOCK_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Clock : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  Clock();

  /** Default Destructor */
  ~Clock();

  const std::string& GetDisplaytime() const;
  void SetDisplaytime(const std::string& value);

  const std::string& GetDecimation() const;
  void SetDecimation(const std::string& value);

private:

  std::string m_Displaytime;

  std::string m_Decimation;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // CLOCK_H
