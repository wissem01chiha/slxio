// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SUM_H
#define SUM_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Sum : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  Sum();

  /** Default Destructor */
  ~Sum();

  const std::string& GetIconshape() const;
  void SetIconshape(const std::string& value);

  const std::string& GetInputs() const;
  void SetInputs(const std::string& value);

  const std::string& GetCollapsemode() const;
  void SetCollapsemode(const std::string& value);

  const std::string& GetCollapsedim() const;
  void SetCollapsedim(const std::string& value);

  const std::string& GetOutmin() const;
  void SetOutmin(const std::string& value);

  const std::string& GetOutmax() const;
  void SetOutmax(const std::string& value);

  const std::string& GetOutdatatypestr() const;
  void SetOutdatatypestr(const std::string& value);

  const std::string& GetAccumdatatypestr() const;
  void SetAccumdatatypestr(const std::string& value);

  const std::string& GetInputsamedt() const;
  void SetInputsamedt(const std::string& value);

  const std::string& GetLockscale() const;
  void SetLockscale(const std::string& value);

  const std::string& GetRndmeth() const;
  void SetRndmeth(const std::string& value);

  const std::string& GetSaturateonintegeroverflow() const;
  void SetSaturateonintegeroverflow(const std::string& value);

  const std::string& GetSampletime() const;
  void SetSampletime(const std::string& value);

private:

  std::string m_Iconshape;

  std::string m_Inputs;

  std::string m_Collapsemode;

  std::string m_Collapsedim;

  std::string m_Outmin;

  std::string m_Outmax;

  std::string m_Outdatatypestr;

  std::string m_Accumdatatypestr;

  std::string m_Inputsamedt;

  std::string m_Lockscale;

  std::string m_Rndmeth;

  std::string m_Saturateonintegeroverflow;

  std::string m_Sampletime;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // SUM_H
