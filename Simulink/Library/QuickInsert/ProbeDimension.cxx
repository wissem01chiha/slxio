#include "ProbeDimension.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

ProbeDimension::ProbeDimension() {}

ProbeDimension::~ProbeDimension() {}

const std::string& ProbeDimension::GetProbewidth() const
{
    return m_Probewidth;
}

void ProbeDimension::SetProbewidth(const std::string& value)
{
    m_Probewidth = value;
}

const std::string& ProbeDimension::GetProbesampletime() const
{
    return m_Probesampletime;
}

void ProbeDimension::SetProbesampletime(const std::string& value)
{
    m_Probesampletime = value;
}

const std::string& ProbeDimension::GetProbecomplexsignal() const
{
    return m_Probecomplexsignal;
}

void ProbeDimension::SetProbecomplexsignal(const std::string& value)
{
    m_Probecomplexsignal = value;
}

const std::string& ProbeDimension::GetProbesignaldimensions() const
{
    return m_Probesignaldimensions;
}

void ProbeDimension::SetProbesignaldimensions(const std::string& value)
{
    m_Probesignaldimensions = value;
}

const std::string& ProbeDimension::GetProbewidthdatatype() const
{
    return m_Probewidthdatatype;
}

void ProbeDimension::SetProbewidthdatatype(const std::string& value)
{
    m_Probewidthdatatype = value;
}

const std::string& ProbeDimension::GetProbesampletimedatatype() const
{
    return m_Probesampletimedatatype;
}

void ProbeDimension::SetProbesampletimedatatype(const std::string& value)
{
    m_Probesampletimedatatype = value;
}

const std::string& ProbeDimension::GetProbecomplexitydatatype() const
{
    return m_Probecomplexitydatatype;
}

void ProbeDimension::SetProbecomplexitydatatype(const std::string& value)
{
    m_Probecomplexitydatatype = value;
}

const std::string& ProbeDimension::GetProbedimensionsdatatype() const
{
    return m_Probedimensionsdatatype;
}

void ProbeDimension::SetProbedimensionsdatatype(const std::string& value)
{
    m_Probedimensionsdatatype = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
