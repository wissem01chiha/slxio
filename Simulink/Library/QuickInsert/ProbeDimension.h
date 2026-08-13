// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef PROBEDIMENSION_H
#define PROBEDIMENSION_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT ProbeDimension : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  ProbeDimension();

  /** Default Destructor */
  ~ProbeDimension();

  const std::string& GetProbewidth() const;
  void SetProbewidth(const std::string& value);

  const std::string& GetProbesampletime() const;
  void SetProbesampletime(const std::string& value);

  const std::string& GetProbecomplexsignal() const;
  void SetProbecomplexsignal(const std::string& value);

  const std::string& GetProbesignaldimensions() const;
  void SetProbesignaldimensions(const std::string& value);

  const std::string& GetProbewidthdatatype() const;
  void SetProbewidthdatatype(const std::string& value);

  const std::string& GetProbesampletimedatatype() const;
  void SetProbesampletimedatatype(const std::string& value);

  const std::string& GetProbecomplexitydatatype() const;
  void SetProbecomplexitydatatype(const std::string& value);

  const std::string& GetProbedimensionsdatatype() const;
  void SetProbedimensionsdatatype(const std::string& value);

private:

  std::string m_Probewidth;

  std::string m_Probesampletime;

  std::string m_Probecomplexsignal;

  std::string m_Probesignaldimensions;

  std::string m_Probewidthdatatype;

  std::string m_Probesampletimedatatype;

  std::string m_Probecomplexitydatatype;

  std::string m_Probedimensionsdatatype;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // PROBEDIMENSION_H
