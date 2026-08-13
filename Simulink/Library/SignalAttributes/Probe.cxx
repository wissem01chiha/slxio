#include "Probe.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Probe::Probe() {}

Probe::~Probe() {}

const std::string& Probe::GetProbewidth() const
{
    return m_Probewidth;
}

void Probe::SetProbewidth(const std::string& value)
{
    m_Probewidth = value;
}

const std::string& Probe::GetProbesampletime() const
{
    return m_Probesampletime;
}

void Probe::SetProbesampletime(const std::string& value)
{
    m_Probesampletime = value;
}

const std::string& Probe::GetProbecomplexsignal() const
{
    return m_Probecomplexsignal;
}

void Probe::SetProbecomplexsignal(const std::string& value)
{
    m_Probecomplexsignal = value;
}

const std::string& Probe::GetProbesignaldimensions() const
{
    return m_Probesignaldimensions;
}

void Probe::SetProbesignaldimensions(const std::string& value)
{
    m_Probesignaldimensions = value;
}

const std::string& Probe::GetProbewidthdatatype() const
{
    return m_Probewidthdatatype;
}

void Probe::SetProbewidthdatatype(const std::string& value)
{
    m_Probewidthdatatype = value;
}

const std::string& Probe::GetProbesampletimedatatype() const
{
    return m_Probesampletimedatatype;
}

void Probe::SetProbesampletimedatatype(const std::string& value)
{
    m_Probesampletimedatatype = value;
}

const std::string& Probe::GetProbecomplexitydatatype() const
{
    return m_Probecomplexitydatatype;
}

void Probe::SetProbecomplexitydatatype(const std::string& value)
{
    m_Probecomplexitydatatype = value;
}

const std::string& Probe::GetProbedimensionsdatatype() const
{
    return m_Probedimensionsdatatype;
}

void Probe::SetProbedimensionsdatatype(const std::string& value)
{
    m_Probedimensionsdatatype = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
