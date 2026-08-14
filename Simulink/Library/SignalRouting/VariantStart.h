// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef VARIANTSTART_H
#define VARIANTSTART_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT VariantStart
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  VariantStart();

  /** Default Destructor */
  ~VariantStart();

  const std::string& GetVariantcontrols() const;
  void SetVariantcontrols(const std::string& value);

  const std::string& GetVariantcontrolmode() const;
  void SetVariantcontrolmode(const std::string& value);

  const std::string& GetVariantactivationtime() const;
  void SetVariantactivationtime(const std::string& value);

  const std::string& GetLabelmodeactivechoice() const;
  void SetLabelmodeactivechoice(const std::string& value);

  const std::string& GetShowconditiononblock() const;
  void SetShowconditiononblock(const std::string& value);

  const std::string& GetVariantstartendtag() const;
  void SetVariantstartendtag(const std::string& value);

  const std::string& GetVariantpairedblock() const;
  void SetVariantpairedblock(const std::string& value);

private:
  std::string m_Variantcontrols;

  std::string m_Variantcontrolmode;

  std::string m_Variantactivationtime;

  std::string m_Labelmodeactivechoice;

  std::string m_Showconditiononblock;

  std::string m_Variantstartendtag;

  std::string m_Variantpairedblock;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // VARIANTSTART_H
