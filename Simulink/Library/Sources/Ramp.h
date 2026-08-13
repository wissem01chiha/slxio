// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef RAMP_H
#define RAMP_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Ramp : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  Ramp();

  /** Default Destructor */
  ~Ramp();

  const std::string& GetSlope() const;
  void SetSlope(const std::string& value);

  const std::string& GetStart() const;
  void SetStart(const std::string& value);

  const std::string& GetInitialoutput() const;
  void SetInitialoutput(const std::string& value);

  const std::string& GetVectorparams1d() const;
  void SetVectorparams1d(const std::string& value);

private:

  std::string m_Slope;

  std::string m_Start;

  std::string m_Initialoutput;

  std::string m_Vectorparams1d;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // RAMP_H
