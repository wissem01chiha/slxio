#include "ProbeSampleTime.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

ProbeSampleTime::ProbeSampleTime() {}

ProbeSampleTime::~ProbeSampleTime() {}

const std::string& ProbeSampleTime::GetProbewidth() const
{
  return m_Probewidth;
}

void ProbeSampleTime::SetProbewidth(const std::string& value)
{
  m_Probewidth = value;
}

const std::string& ProbeSampleTime::GetProbesampletime() const
{
  return m_Probesampletime;
}

void ProbeSampleTime::SetProbesampletime(const std::string& value)
{
  m_Probesampletime = value;
}

const std::string& ProbeSampleTime::GetProbecomplexsignal() const
{
  return m_Probecomplexsignal;
}

void ProbeSampleTime::SetProbecomplexsignal(const std::string& value)
{
  m_Probecomplexsignal = value;
}

const std::string& ProbeSampleTime::GetProbesignaldimensions() const
{
  return m_Probesignaldimensions;
}

void ProbeSampleTime::SetProbesignaldimensions(const std::string& value)
{
  m_Probesignaldimensions = value;
}

const std::string& ProbeSampleTime::GetProbewidthdatatype() const
{
  return m_Probewidthdatatype;
}

void ProbeSampleTime::SetProbewidthdatatype(const std::string& value)
{
  m_Probewidthdatatype = value;
}

const std::string& ProbeSampleTime::GetProbesampletimedatatype() const
{
  return m_Probesampletimedatatype;
}

void ProbeSampleTime::SetProbesampletimedatatype(const std::string& value)
{
  m_Probesampletimedatatype = value;
}

const std::string& ProbeSampleTime::GetProbecomplexitydatatype() const
{
  return m_Probecomplexitydatatype;
}

void ProbeSampleTime::SetProbecomplexitydatatype(const std::string& value)
{
  m_Probecomplexitydatatype = value;
}

const std::string& ProbeSampleTime::GetProbedimensionsdatatype() const
{
  return m_Probedimensionsdatatype;
}

void ProbeSampleTime::SetProbedimensionsdatatype(const std::string& value)
{
  m_Probedimensionsdatatype = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
