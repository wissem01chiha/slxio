#include "IntegratorSecondOrder.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

IntegratorSecondOrder::IntegratorSecondOrder() {}

IntegratorSecondOrder::~IntegratorSecondOrder() {}

const std::string& IntegratorSecondOrder::GetIcsourcex() const
{
  return m_Icsourcex;
}

void IntegratorSecondOrder::SetIcsourcex(const std::string& value)
{
  m_Icsourcex = value;
}

const std::string& IntegratorSecondOrder::GetIcx() const
{
  return m_Icx;
}

void IntegratorSecondOrder::SetIcx(const std::string& value)
{
  m_Icx = value;
}

const std::string& IntegratorSecondOrder::GetLimitx() const
{
  return m_Limitx;
}

void IntegratorSecondOrder::SetLimitx(const std::string& value)
{
  m_Limitx = value;
}

const std::string& IntegratorSecondOrder::GetUpperlimitx() const
{
  return m_Upperlimitx;
}

void IntegratorSecondOrder::SetUpperlimitx(const std::string& value)
{
  m_Upperlimitx = value;
}

const std::string& IntegratorSecondOrder::GetLowerlimitx() const
{
  return m_Lowerlimitx;
}

void IntegratorSecondOrder::SetLowerlimitx(const std::string& value)
{
  m_Lowerlimitx = value;
}

const std::string& IntegratorSecondOrder::GetWrapx() const
{
  return m_Wrapx;
}

void IntegratorSecondOrder::SetWrapx(const std::string& value)
{
  m_Wrapx = value;
}

const std::string& IntegratorSecondOrder::GetWrappeduppervaluex() const
{
  return m_Wrappeduppervaluex;
}

void IntegratorSecondOrder::SetWrappeduppervaluex(const std::string& value)
{
  m_Wrappeduppervaluex = value;
}

const std::string& IntegratorSecondOrder::GetWrappedlowervaluex() const
{
  return m_Wrappedlowervaluex;
}

void IntegratorSecondOrder::SetWrappedlowervaluex(const std::string& value)
{
  m_Wrappedlowervaluex = value;
}

const std::string& IntegratorSecondOrder::GetAbsolutetolerancex() const
{
  return m_Absolutetolerancex;
}

void IntegratorSecondOrder::SetAbsolutetolerancex(const std::string& value)
{
  m_Absolutetolerancex = value;
}

const std::string& IntegratorSecondOrder::GetStatenamex() const
{
  return m_Statenamex;
}

void IntegratorSecondOrder::SetStatenamex(const std::string& value)
{
  m_Statenamex = value;
}

const std::string& IntegratorSecondOrder::GetIcsourcedxdt() const
{
  return m_Icsourcedxdt;
}

void IntegratorSecondOrder::SetIcsourcedxdt(const std::string& value)
{
  m_Icsourcedxdt = value;
}

const std::string& IntegratorSecondOrder::GetIcdxdt() const
{
  return m_Icdxdt;
}

void IntegratorSecondOrder::SetIcdxdt(const std::string& value)
{
  m_Icdxdt = value;
}

const std::string& IntegratorSecondOrder::GetLimitdxdt() const
{
  return m_Limitdxdt;
}

void IntegratorSecondOrder::SetLimitdxdt(const std::string& value)
{
  m_Limitdxdt = value;
}

const std::string& IntegratorSecondOrder::GetUpperlimitdxdt() const
{
  return m_Upperlimitdxdt;
}

void IntegratorSecondOrder::SetUpperlimitdxdt(const std::string& value)
{
  m_Upperlimitdxdt = value;
}

const std::string& IntegratorSecondOrder::GetLowerlimitdxdt() const
{
  return m_Lowerlimitdxdt;
}

void IntegratorSecondOrder::SetLowerlimitdxdt(const std::string& value)
{
  m_Lowerlimitdxdt = value;
}

const std::string& IntegratorSecondOrder::GetAbsolutetolerancedxdt() const
{
  return m_Absolutetolerancedxdt;
}

void IntegratorSecondOrder::SetAbsolutetolerancedxdt(const std::string& value)
{
  m_Absolutetolerancedxdt = value;
}

const std::string& IntegratorSecondOrder::GetStatenamedxdt() const
{
  return m_Statenamedxdt;
}

void IntegratorSecondOrder::SetStatenamedxdt(const std::string& value)
{
  m_Statenamedxdt = value;
}

const std::string& IntegratorSecondOrder::GetExternalreset() const
{
  return m_Externalreset;
}

void IntegratorSecondOrder::SetExternalreset(const std::string& value)
{
  m_Externalreset = value;
}

const std::string& IntegratorSecondOrder::GetZerocross() const
{
  return m_Zerocross;
}

void IntegratorSecondOrder::SetZerocross(const std::string& value)
{
  m_Zerocross = value;
}

const std::string& IntegratorSecondOrder::GetReinitdxdtwhenxreachessaturation()
  const
{
  return m_Reinitdxdtwhenxreachessaturation;
}

void IntegratorSecondOrder::SetReinitdxdtwhenxreachessaturation(
  const std::string& value)
{
  m_Reinitdxdtwhenxreachessaturation = value;
}

const std::string&
IntegratorSecondOrder::GetIgnorestatelimitsandresetforlinearization() const
{
  return m_Ignorestatelimitsandresetforlinearization;
}

void IntegratorSecondOrder::SetIgnorestatelimitsandresetforlinearization(
  const std::string& value)
{
  m_Ignorestatelimitsandresetforlinearization = value;
}

const std::string& IntegratorSecondOrder::GetShowoutput() const
{
  return m_Showoutput;
}

void IntegratorSecondOrder::SetShowoutput(const std::string& value)
{
  m_Showoutput = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
