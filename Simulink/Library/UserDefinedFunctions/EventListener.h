// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef EVENTLISTENER_H
#define EVENTLISTENER_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT EventListener : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  EventListener();

  /** Default Destructor */
  ~EventListener();

  const std::string& GetEventtype() const;
  void SetEventtype(const std::string& value);

  const std::string& GetEventname() const;
  void SetEventname(const std::string& value);

  const std::string& GetVariant() const;
  void SetVariant(const std::string& value);

  const std::string& GetVariantcontrol() const;
  void SetVariantcontrol(const std::string& value);

  const std::string& GetGeneratepreprocessorconditionals() const;
  void SetGeneratepreprocessorconditionals(const std::string& value);

private:

  std::string m_Eventtype;

  std::string m_Eventname;

  std::string m_Variant;

  std::string m_Variantcontrol;

  std::string m_Generatepreprocessorconditionals;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // EVENTLISTENER_H
