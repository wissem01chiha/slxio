// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef INTEGRATORSECONDORDER_H
#define INTEGRATORSECONDORDER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT IntegratorSecondOrder
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  IntegratorSecondOrder();

  /** Default Destructor */
  ~IntegratorSecondOrder();

  const std::string& GetIcsourcex() const;
  void SetIcsourcex(const std::string& value);

  const std::string& GetIcx() const;
  void SetIcx(const std::string& value);

  const std::string& GetLimitx() const;
  void SetLimitx(const std::string& value);

  const std::string& GetUpperlimitx() const;
  void SetUpperlimitx(const std::string& value);

  const std::string& GetLowerlimitx() const;
  void SetLowerlimitx(const std::string& value);

  const std::string& GetWrapx() const;
  void SetWrapx(const std::string& value);

  const std::string& GetWrappeduppervaluex() const;
  void SetWrappeduppervaluex(const std::string& value);

  const std::string& GetWrappedlowervaluex() const;
  void SetWrappedlowervaluex(const std::string& value);

  const std::string& GetAbsolutetolerancex() const;
  void SetAbsolutetolerancex(const std::string& value);

  const std::string& GetStatenamex() const;
  void SetStatenamex(const std::string& value);

  const std::string& GetIcsourcedxdt() const;
  void SetIcsourcedxdt(const std::string& value);

  const std::string& GetIcdxdt() const;
  void SetIcdxdt(const std::string& value);

  const std::string& GetLimitdxdt() const;
  void SetLimitdxdt(const std::string& value);

  const std::string& GetUpperlimitdxdt() const;
  void SetUpperlimitdxdt(const std::string& value);

  const std::string& GetLowerlimitdxdt() const;
  void SetLowerlimitdxdt(const std::string& value);

  const std::string& GetAbsolutetolerancedxdt() const;
  void SetAbsolutetolerancedxdt(const std::string& value);

  const std::string& GetStatenamedxdt() const;
  void SetStatenamedxdt(const std::string& value);

  const std::string& GetExternalreset() const;
  void SetExternalreset(const std::string& value);

  const std::string& GetZerocross() const;
  void SetZerocross(const std::string& value);

  const std::string& GetReinitdxdtwhenxreachessaturation() const;
  void SetReinitdxdtwhenxreachessaturation(const std::string& value);

  const std::string& GetIgnorestatelimitsandresetforlinearization() const;
  void SetIgnorestatelimitsandresetforlinearization(const std::string& value);

  const std::string& GetShowoutput() const;
  void SetShowoutput(const std::string& value);

private:
  std::string m_Icsourcex;

  std::string m_Icx;

  std::string m_Limitx;

  std::string m_Upperlimitx;

  std::string m_Lowerlimitx;

  std::string m_Wrapx;

  std::string m_Wrappeduppervaluex;

  std::string m_Wrappedlowervaluex;

  std::string m_Absolutetolerancex;

  std::string m_Statenamex;

  std::string m_Icsourcedxdt;

  std::string m_Icdxdt;

  std::string m_Limitdxdt;

  std::string m_Upperlimitdxdt;

  std::string m_Lowerlimitdxdt;

  std::string m_Absolutetolerancedxdt;

  std::string m_Statenamedxdt;

  std::string m_Externalreset;

  std::string m_Zerocross;

  std::string m_Reinitdxdtwhenxreachessaturation;

  std::string m_Ignorestatelimitsandresetforlinearization;

  std::string m_Showoutput;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // INTEGRATORSECONDORDER_H
