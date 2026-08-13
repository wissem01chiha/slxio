#include "DirectLinkMatrixD.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DirectLinkMatrixD::DirectLinkMatrixD() {}

DirectLinkMatrixD::~DirectLinkMatrixD() {}

const std::string& DirectLinkMatrixD::GetGain() const
{
    return m_Gain;
}

void DirectLinkMatrixD::SetGain(const std::string& value)
{
    m_Gain = value;
}

const std::string& DirectLinkMatrixD::GetMultiplication() const
{
    return m_Multiplication;
}

void DirectLinkMatrixD::SetMultiplication(const std::string& value)
{
    m_Multiplication = value;
}

const std::string& DirectLinkMatrixD::GetParammin() const
{
    return m_Parammin;
}

void DirectLinkMatrixD::SetParammin(const std::string& value)
{
    m_Parammin = value;
}

const std::string& DirectLinkMatrixD::GetParammax() const
{
    return m_Parammax;
}

void DirectLinkMatrixD::SetParammax(const std::string& value)
{
    m_Parammax = value;
}

const std::string& DirectLinkMatrixD::GetParamdatatypestr() const
{
    return m_Paramdatatypestr;
}

void DirectLinkMatrixD::SetParamdatatypestr(const std::string& value)
{
    m_Paramdatatypestr = value;
}

const std::string& DirectLinkMatrixD::GetOutmin() const
{
    return m_Outmin;
}

void DirectLinkMatrixD::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& DirectLinkMatrixD::GetOutmax() const
{
    return m_Outmax;
}

void DirectLinkMatrixD::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& DirectLinkMatrixD::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void DirectLinkMatrixD::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& DirectLinkMatrixD::GetLockscale() const
{
    return m_Lockscale;
}

void DirectLinkMatrixD::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& DirectLinkMatrixD::GetRndmeth() const
{
    return m_Rndmeth;
}

void DirectLinkMatrixD::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& DirectLinkMatrixD::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void DirectLinkMatrixD::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& DirectLinkMatrixD::GetSampletime() const
{
    return m_Sampletime;
}

void DirectLinkMatrixD::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
