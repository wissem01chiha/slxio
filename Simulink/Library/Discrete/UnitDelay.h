// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef UNITDELAY_H
#define UNITDELAY_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT UnitDelay : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  UnitDelay();

  /** Default Destructor */
  ~UnitDelay();

  const std::string& GetInitialcondition() const;
  void SetInitialcondition(const std::string& value);

  const std::string& GetInputprocessing() const;
  void SetInputprocessing(const std::string& value);

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

  const std::string& GetCodegenstatestoragetypequalifier() const;
  void SetCodegenstatestoragetypequalifier(const std::string& value);

private:

  std::string m_Initialcondition;

  std::string m_Inputprocessing;

  std::string m_Sampletime;

  std::string m_Statename;

  std::string m_Statemustresolvetosignalobject;

  std::string m_Statesignalobject;

  std::string m_Statestorageclass;

  std::string m_Codegenstatestoragetypequalifier;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // UNITDELAY_H
