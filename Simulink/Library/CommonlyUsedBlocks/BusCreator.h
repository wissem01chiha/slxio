// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef BUSCREATOR_H
#define BUSCREATOR_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT BusCreator : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  BusCreator();

  /** Default Destructor */
  ~BusCreator();

  const std::string& GetInputs() const;
  void SetInputs(const std::string& value);

  const std::string& GetDisplayoption() const;
  void SetDisplayoption(const std::string& value);

  const std::string& GetOutdatatypestr() const;
  void SetOutdatatypestr(const std::string& value);

  const std::string& GetNonvirtualbus() const;
  void SetNonvirtualbus(const std::string& value);

  const std::string& GetInheritfrominputs() const;
  void SetInheritfrominputs(const std::string& value);

private:

  std::string m_Inputs;

  std::string m_Displayoption;

  std::string m_Outdatatypestr;

  std::string m_Nonvirtualbus;

  std::string m_Inheritfrominputs;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // BUSCREATOR_H
