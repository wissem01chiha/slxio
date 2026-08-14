// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DEMUX_H
#define DEMUX_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Demux
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  Demux();

  /** Default Destructor */
  ~Demux();

  const std::string& GetOutputs() const;
  void SetOutputs(const std::string& value);

  const std::string& GetDisplayoption() const;
  void SetDisplayoption(const std::string& value);

private:
  std::string m_Outputs;

  std::string m_Displayoption;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // DEMUX_H
