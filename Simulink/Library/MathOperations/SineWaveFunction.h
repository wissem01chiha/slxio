// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SINEWAVEFUNCTION_H
#define SINEWAVEFUNCTION_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT SineWaveFunction : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  SineWaveFunction();

  /** Default Destructor */
  ~SineWaveFunction();

  const std::string& GetSinetype() const;
  void SetSinetype(const std::string& value);

  const std::string& GetTimesource() const;
  void SetTimesource(const std::string& value);

  const std::string& GetAmplitude() const;
  void SetAmplitude(const std::string& value);

  const std::string& GetBias() const;
  void SetBias(const std::string& value);

  const std::string& GetFrequency() const;
  void SetFrequency(const std::string& value);

  const std::string& GetPhase() const;
  void SetPhase(const std::string& value);

  const std::string& GetSamples() const;
  void SetSamples(const std::string& value);

  const std::string& GetOffset() const;
  void SetOffset(const std::string& value);

  const std::string& GetSampletime() const;
  void SetSampletime(const std::string& value);

  const std::string& GetVectorparams1d() const;
  void SetVectorparams1d(const std::string& value);

private:

  std::string m_Sinetype;

  std::string m_Timesource;

  std::string m_Amplitude;

  std::string m_Bias;

  std::string m_Frequency;

  std::string m_Phase;

  std::string m_Samples;

  std::string m_Offset;

  std::string m_Sampletime;

  std::string m_Vectorparams1d;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // SINEWAVEFUNCTION_H
