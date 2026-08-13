// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DISCRETEZEROPOLE_H
#define DISCRETEZEROPOLE_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT DiscreteZeroPole : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  DiscreteZeroPole();

  /** Default Destructor */
  ~DiscreteZeroPole();

  const std::string& GetZeros() const;
  void SetZeros(const std::string& value);

  const std::string& GetPoles() const;
  void SetPoles(const std::string& value);

  const std::string& GetGain() const;
  void SetGain(const std::string& value);

  const std::string& GetSampletime() const;
  void SetSampletime(const std::string& value);

  const std::string& GetStatename() const;
  void SetStatename(const std::string& value);

  const std::string& GetStatemustresolvetosignalobject() const;
  void SetStatemustresolvetosignalobject(const std::string& value);

  const std::string& GetStatesignalobject() const;
  void SetStatesignalobject(const std::string& value);

  const std::string& GetStatestorageclass() const;
  void SetStatestorageclass(const std::string& value);

  const std::string& GetRtwstatestoragetypequalifier() const;
  void SetRtwstatestoragetypequalifier(const std::string& value);

private:

  std::string m_Zeros;

  std::string m_Poles;

  std::string m_Gain;

  std::string m_Sampletime;

  std::string m_Statename;

  std::string m_Statemustresolvetosignalobject;

  std::string m_Statesignalobject;

  std::string m_Statestorageclass;

  std::string m_Rtwstatestoragetypequalifier;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // DISCRETEZEROPOLE_H
