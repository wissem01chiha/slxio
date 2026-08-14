#include "ProbeComplexity.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

ProbeComplexity::ProbeComplexity() {}

ProbeComplexity::~ProbeComplexity() {}

const std::string& ProbeComplexity::GetProbewidth() const
{
  return m_Probewidth;
}

void ProbeComplexity::SetProbewidth(const std::string& value)
{
  m_Probewidth = value;
}

const std::string& ProbeComplexity::GetProbesampletime() const
{
  return m_Probesampletime;
}

void ProbeComplexity::SetProbesampletime(const std::string& value)
{
  m_Probesampletime = value;
}

const std::string& ProbeComplexity::GetProbecomplexsignal() const
{
  return m_Probecomplexsignal;
}

void ProbeComplexity::SetProbecomplexsignal(const std::string& value)
{
  m_Probecomplexsignal = value;
}

const std::string& ProbeComplexity::GetProbesignaldimensions() const
{
  return m_Probesignaldimensions;
}

void ProbeComplexity::SetProbesignaldimensions(const std::string& value)
{
  m_Probesignaldimensions = value;
}

const std::string& ProbeComplexity::GetProbewidthdatatype() const
{
  return m_Probewidthdatatype;
}

void ProbeComplexity::SetProbewidthdatatype(const std::string& value)
{
  m_Probewidthdatatype = value;
}

const std::string& ProbeComplexity::GetProbesampletimedatatype() const
{
  return m_Probesampletimedatatype;
}

void ProbeComplexity::SetProbesampletimedatatype(const std::string& value)
{
  m_Probesampletimedatatype = value;
}

const std::string& ProbeComplexity::GetProbecomplexitydatatype() const
{
  return m_Probecomplexitydatatype;
}

void ProbeComplexity::SetProbecomplexitydatatype(const std::string& value)
{
  m_Probecomplexitydatatype = value;
}

const std::string& ProbeComplexity::GetProbedimensionsdatatype() const
{
  return m_Probedimensionsdatatype;
}

void ProbeComplexity::SetProbedimensionsdatatype(const std::string& value)
{
  m_Probedimensionsdatatype = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
