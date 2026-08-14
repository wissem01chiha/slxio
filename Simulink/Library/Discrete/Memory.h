// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef MEMORY_H
#define MEMORY_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Memory
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  Memory();

  /** Default Destructor */
  ~Memory();

  const std::string& GetInitialcondition() const;
  void SetInitialcondition(const std::string& value);

  const std::string& GetInheritsampletime() const;
  void SetInheritsampletime(const std::string& value);

  const std::string& GetLinearizememory() const;
  void SetLinearizememory(const std::string& value);

  const std::string& GetLinearizeasdelay() const;
  void SetLinearizeasdelay(const std::string& value);

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
  std::string m_Initialcondition;

  std::string m_Inheritsampletime;

  std::string m_Linearizememory;

  std::string m_Linearizeasdelay;

  std::string m_Statename;

  std::string m_Statemustresolvetosignalobject;

  std::string m_Statesignalobject;

  std::string m_Statestorageclass;

  std::string m_Rtwstatestoragetypequalifier;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // MEMORY_H
