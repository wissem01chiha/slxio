#include "SignalSpecification.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

SignalSpecification::SignalSpecification() {}

SignalSpecification::~SignalSpecification() {}

const std::string& SignalSpecification::GetOutmin() const
{
  return m_Outmin;
}

void SignalSpecification::SetOutmin(const std::string& value)
{
  m_Outmin = value;
}

const std::string& SignalSpecification::GetOutmax() const
{
  return m_Outmax;
}

void SignalSpecification::SetOutmax(const std::string& value)
{
  m_Outmax = value;
}

const std::string& SignalSpecification::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void SignalSpecification::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

const std::string& SignalSpecification::GetLockscale() const
{
  return m_Lockscale;
}

void SignalSpecification::SetLockscale(const std::string& value)
{
  m_Lockscale = value;
}

const std::string& SignalSpecification::GetBusoutputasstruct() const
{
  return m_Busoutputasstruct;
}

void SignalSpecification::SetBusoutputasstruct(const std::string& value)
{
  m_Busoutputasstruct = value;
}

const std::string& SignalSpecification::GetUnit() const
{
  return m_Unit;
}

void SignalSpecification::SetUnit(const std::string& value)
{
  m_Unit = value;
}

const std::string& SignalSpecification::GetDimensions() const
{
  return m_Dimensions;
}

void SignalSpecification::SetDimensions(const std::string& value)
{
  m_Dimensions = value;
}

const std::string& SignalSpecification::GetVarsizesig() const
{
  return m_Varsizesig;
}

void SignalSpecification::SetVarsizesig(const std::string& value)
{
  m_Varsizesig = value;
}

const std::string& SignalSpecification::GetSampletime() const
{
  return m_Sampletime;
}

void SignalSpecification::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

const std::string& SignalSpecification::GetSignaltype() const
{
  return m_Signaltype;
}

void SignalSpecification::SetSignaltype(const std::string& value)
{
  m_Signaltype = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
