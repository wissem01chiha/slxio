#include "ProbeWidth.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

ProbeWidth::ProbeWidth() {}

ProbeWidth::~ProbeWidth() {}

const std::string& ProbeWidth::GetProbewidth() const
{
  return m_Probewidth;
}

void ProbeWidth::SetProbewidth(const std::string& value)
{
  m_Probewidth = value;
}

const std::string& ProbeWidth::GetProbesampletime() const
{
  return m_Probesampletime;
}

void ProbeWidth::SetProbesampletime(const std::string& value)
{
  m_Probesampletime = value;
}

const std::string& ProbeWidth::GetProbecomplexsignal() const
{
  return m_Probecomplexsignal;
}

void ProbeWidth::SetProbecomplexsignal(const std::string& value)
{
  m_Probecomplexsignal = value;
}

const std::string& ProbeWidth::GetProbesignaldimensions() const
{
  return m_Probesignaldimensions;
}

void ProbeWidth::SetProbesignaldimensions(const std::string& value)
{
  m_Probesignaldimensions = value;
}

const std::string& ProbeWidth::GetProbewidthdatatype() const
{
  return m_Probewidthdatatype;
}

void ProbeWidth::SetProbewidthdatatype(const std::string& value)
{
  m_Probewidthdatatype = value;
}

const std::string& ProbeWidth::GetProbesampletimedatatype() const
{
  return m_Probesampletimedatatype;
}

void ProbeWidth::SetProbesampletimedatatype(const std::string& value)
{
  m_Probesampletimedatatype = value;
}

const std::string& ProbeWidth::GetProbecomplexitydatatype() const
{
  return m_Probecomplexitydatatype;
}

void ProbeWidth::SetProbecomplexitydatatype(const std::string& value)
{
  m_Probecomplexitydatatype = value;
}

const std::string& ProbeWidth::GetProbedimensionsdatatype() const
{
  return m_Probedimensionsdatatype;
}

void ProbeWidth::SetProbedimensionsdatatype(const std::string& value)
{
  m_Probedimensionsdatatype = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
