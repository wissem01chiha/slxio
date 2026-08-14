#include "IntegratorSecondOrderLimited.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

IntegratorSecondOrderLimited::IntegratorSecondOrderLimited() {}

IntegratorSecondOrderLimited::~IntegratorSecondOrderLimited() {}

const std::string& IntegratorSecondOrderLimited::GetIcsourcex() const
{
    return m_Icsourcex;
}

void IntegratorSecondOrderLimited::SetIcsourcex(const std::string& value)
{
    m_Icsourcex = value;
}

const std::string& IntegratorSecondOrderLimited::GetIcx() const
{
    return m_Icx;
}

void IntegratorSecondOrderLimited::SetIcx(const std::string& value)
{
    m_Icx = value;
}

const std::string& IntegratorSecondOrderLimited::GetLimitx() const
{
    return m_Limitx;
}

void IntegratorSecondOrderLimited::SetLimitx(const std::string& value)
{
    m_Limitx = value;
}

const std::string& IntegratorSecondOrderLimited::GetUpperlimitx() const
{
    return m_Upperlimitx;
}

void IntegratorSecondOrderLimited::SetUpperlimitx(const std::string& value)
{
    m_Upperlimitx = value;
}

const std::string& IntegratorSecondOrderLimited::GetLowerlimitx() const
{
    return m_Lowerlimitx;
}

void IntegratorSecondOrderLimited::SetLowerlimitx(const std::string& value)
{
    m_Lowerlimitx = value;
}

const std::string& IntegratorSecondOrderLimited::GetWrapx() const
{
    return m_Wrapx;
}

void IntegratorSecondOrderLimited::SetWrapx(const std::string& value)
{
    m_Wrapx = value;
}

const std::string& IntegratorSecondOrderLimited::GetWrappeduppervaluex() const
{
    return m_Wrappeduppervaluex;
}

void IntegratorSecondOrderLimited::SetWrappeduppervaluex(
    const std::string& value)
{
    m_Wrappeduppervaluex = value;
}

const std::string& IntegratorSecondOrderLimited::GetWrappedlowervaluex() const
{
    return m_Wrappedlowervaluex;
}

void IntegratorSecondOrderLimited::SetWrappedlowervaluex(
    const std::string& value)
{
    m_Wrappedlowervaluex = value;
}

const std::string& IntegratorSecondOrderLimited::GetAbsolutetolerancex() const
{
    return m_Absolutetolerancex;
}

void IntegratorSecondOrderLimited::SetAbsolutetolerancex(
    const std::string& value)
{
    m_Absolutetolerancex = value;
}

const std::string& IntegratorSecondOrderLimited::GetStatenamex() const
{
    return m_Statenamex;
}

void IntegratorSecondOrderLimited::SetStatenamex(const std::string& value)
{
    m_Statenamex = value;
}

const std::string& IntegratorSecondOrderLimited::GetIcsourcedxdt() const
{
    return m_Icsourcedxdt;
}

void IntegratorSecondOrderLimited::SetIcsourcedxdt(const std::string& value)
{
    m_Icsourcedxdt = value;
}

const std::string& IntegratorSecondOrderLimited::GetIcdxdt() const
{
    return m_Icdxdt;
}

void IntegratorSecondOrderLimited::SetIcdxdt(const std::string& value)
{
    m_Icdxdt = value;
}

const std::string& IntegratorSecondOrderLimited::GetLimitdxdt() const
{
    return m_Limitdxdt;
}

void IntegratorSecondOrderLimited::SetLimitdxdt(const std::string& value)
{
    m_Limitdxdt = value;
}

const std::string& IntegratorSecondOrderLimited::GetUpperlimitdxdt() const
{
    return m_Upperlimitdxdt;
}

void IntegratorSecondOrderLimited::SetUpperlimitdxdt(const std::string& value)
{
    m_Upperlimitdxdt = value;
}

const std::string& IntegratorSecondOrderLimited::GetLowerlimitdxdt() const
{
    return m_Lowerlimitdxdt;
}

void IntegratorSecondOrderLimited::SetLowerlimitdxdt(const std::string& value)
{
    m_Lowerlimitdxdt = value;
}

const std::string&
IntegratorSecondOrderLimited::GetAbsolutetolerancedxdt() const
{
    return m_Absolutetolerancedxdt;
}

void IntegratorSecondOrderLimited::SetAbsolutetolerancedxdt(
    const std::string& value)
{
    m_Absolutetolerancedxdt = value;
}

const std::string& IntegratorSecondOrderLimited::GetStatenamedxdt() const
{
    return m_Statenamedxdt;
}

void IntegratorSecondOrderLimited::SetStatenamedxdt(const std::string& value)
{
    m_Statenamedxdt = value;
}

const std::string& IntegratorSecondOrderLimited::GetExternalreset() const
{
    return m_Externalreset;
}

void IntegratorSecondOrderLimited::SetExternalreset(const std::string& value)
{
    m_Externalreset = value;
}

const std::string& IntegratorSecondOrderLimited::GetZerocross() const
{
    return m_Zerocross;
}

void IntegratorSecondOrderLimited::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string&
IntegratorSecondOrderLimited::GetReinitdxdtwhenxreachessaturation() const
{
    return m_Reinitdxdtwhenxreachessaturation;
}

void IntegratorSecondOrderLimited::SetReinitdxdtwhenxreachessaturation(
    const std::string& value)
{
    m_Reinitdxdtwhenxreachessaturation = value;
}

const std::string&
IntegratorSecondOrderLimited::GetIgnorestatelimitsandresetforlinearization()
    const
{
    return m_Ignorestatelimitsandresetforlinearization;
}

void IntegratorSecondOrderLimited::SetIgnorestatelimitsandresetforlinearization(
    const std::string& value)
{
    m_Ignorestatelimitsandresetforlinearization = value;
}

const std::string& IntegratorSecondOrderLimited::GetShowoutput() const
{
    return m_Showoutput;
}

void IntegratorSecondOrderLimited::SetShowoutput(const std::string& value)
{
    m_Showoutput = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
