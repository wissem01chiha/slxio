// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef MAGNITUDEANGLETOCOMPLEX_H
#define MAGNITUDEANGLETOCOMPLEX_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT MagnitudeAngleToComplex
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  MagnitudeAngleToComplex();

  /** Default Destructor */
  ~MagnitudeAngleToComplex();

  const std::string& GetInput() const;
  void SetInput(const std::string& value);

  const std::string& GetConstantpart() const;
  void SetConstantpart(const std::string& value);

  const std::string& GetApproximationmethod() const;
  void SetApproximationmethod(const std::string& value);

  const std::string& GetNumberofiterations() const;
  void SetNumberofiterations(const std::string& value);

  const std::string& GetScalereciprocalgainfactor() const;
  void SetScalereciprocalgainfactor(const std::string& value);

  const std::string& GetSampletime() const;
  void SetSampletime(const std::string& value);

private:
  std::string m_Input;

  std::string m_Constantpart;

  std::string m_Approximationmethod;

  std::string m_Numberofiterations;

  std::string m_Scalereciprocalgainfactor;

  std::string m_Sampletime;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // MAGNITUDEANGLETOCOMPLEX_H
