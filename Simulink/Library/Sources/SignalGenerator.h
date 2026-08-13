// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIGNALGENERATOR_H
#define SIGNALGENERATOR_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT SignalGenerator : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  SignalGenerator();

  /** Default Destructor */
  ~SignalGenerator();

  const std::string& GetWaveform() const;
  void SetWaveform(const std::string& value);

  const std::string& GetTimesource() const;
  void SetTimesource(const std::string& value);

  const std::string& GetAmplitude() const;
  void SetAmplitude(const std::string& value);

  const std::string& GetFrequency() const;
  void SetFrequency(const std::string& value);

  const std::string& GetUnits() const;
  void SetUnits(const std::string& value);

  const std::string& GetVectorparams1d() const;
  void SetVectorparams1d(const std::string& value);

private:

  std::string m_Waveform;

  std::string m_Timesource;

  std::string m_Amplitude;

  std::string m_Frequency;

  std::string m_Units;

  std::string m_Vectorparams1d;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // SIGNALGENERATOR_H
