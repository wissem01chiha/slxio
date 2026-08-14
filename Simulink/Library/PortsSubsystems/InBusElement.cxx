#include "InBusElement.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

InBusElement::InBusElement() {}

InBusElement::~InBusElement() {}

const std::string& InBusElement::GetPort() const
{
  return m_Port;
}

void InBusElement::SetPort(const std::string& value)
{
  m_Port = value;
}

const std::string& InBusElement::GetPortname() const
{
  return m_Portname;
}

void InBusElement::SetPortname(const std::string& value)
{
  m_Portname = value;
}

const std::string& InBusElement::GetElement() const
{
  return m_Element;
}

void InBusElement::SetElement(const std::string& value)
{
  m_Element = value;
}

const std::string& InBusElement::GetIsbuselementport() const
{
  return m_Isbuselementport;
}

void InBusElement::SetIsbuselementport(const std::string& value)
{
  m_Isbuselementport = value;
}

const std::string& InBusElement::GetIcondisplay() const
{
  return m_Icondisplay;
}

void InBusElement::SetIcondisplay(const std::string& value)
{
  m_Icondisplay = value;
}

const std::string& InBusElement::GetOutputfunctioncall() const
{
  return m_Outputfunctioncall;
}

void InBusElement::SetOutputfunctioncall(const std::string& value)
{
  m_Outputfunctioncall = value;
}

const std::string& InBusElement::GetOutmin() const
{
  return m_Outmin;
}

void InBusElement::SetOutmin(const std::string& value)
{
  m_Outmin = value;
}

const std::string& InBusElement::GetOutmax() const
{
  return m_Outmax;
}

void InBusElement::SetOutmax(const std::string& value)
{
  m_Outmax = value;
}

const std::string& InBusElement::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void InBusElement::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

const std::string& InBusElement::GetLockscale() const
{
  return m_Lockscale;
}

void InBusElement::SetLockscale(const std::string& value)
{
  m_Lockscale = value;
}

const std::string& InBusElement::GetBusoutputasstruct() const
{
  return m_Busoutputasstruct;
}

void InBusElement::SetBusoutputasstruct(const std::string& value)
{
  m_Busoutputasstruct = value;
}

const std::string& InBusElement::GetBusvirtuality() const
{
  return m_Busvirtuality;
}

void InBusElement::SetBusvirtuality(const std::string& value)
{
  m_Busvirtuality = value;
}

const std::string& InBusElement::GetUnit() const
{
  return m_Unit;
}

void InBusElement::SetUnit(const std::string& value)
{
  m_Unit = value;
}

const std::string& InBusElement::GetPortdimensions() const
{
  return m_Portdimensions;
}

void InBusElement::SetPortdimensions(const std::string& value)
{
  m_Portdimensions = value;
}

const std::string& InBusElement::GetVarsizesig() const
{
  return m_Varsizesig;
}

void InBusElement::SetVarsizesig(const std::string& value)
{
  m_Varsizesig = value;
}

const std::string& InBusElement::GetSampletime() const
{
  return m_Sampletime;
}

void InBusElement::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

const std::string& InBusElement::GetSignaltype() const
{
  return m_Signaltype;
}

void InBusElement::SetSignaltype(const std::string& value)
{
  m_Signaltype = value;
}

const std::string& InBusElement::GetLatchbydelayingoutsidesignal() const
{
  return m_Latchbydelayingoutsidesignal;
}

void InBusElement::SetLatchbydelayingoutsidesignal(const std::string& value)
{
  m_Latchbydelayingoutsidesignal = value;
}

const std::string& InBusElement::GetLatchinputforfeedbacksignals() const
{
  return m_Latchinputforfeedbacksignals;
}

void InBusElement::SetLatchinputforfeedbacksignals(const std::string& value)
{
  m_Latchinputforfeedbacksignals = value;
}

const std::string& InBusElement::GetInterpolate() const
{
  return m_Interpolate;
}

void InBusElement::SetInterpolate(const std::string& value)
{
  m_Interpolate = value;
}

const std::string& InBusElement::GetInputconnect() const
{
  return m_Inputconnect;
}

void InBusElement::SetInputconnect(const std::string& value)
{
  m_Inputconnect = value;
}

const std::string& InBusElement::GetDatamode() const
{
  return m_Datamode;
}

void InBusElement::SetDatamode(const std::string& value)
{
  m_Datamode = value;
}

const std::string& InBusElement::GetMessagequeueusedefaultattributes() const
{
  return m_Messagequeueusedefaultattributes;
}

void InBusElement::SetMessagequeueusedefaultattributes(const std::string& value)
{
  m_Messagequeueusedefaultattributes = value;
}

const std::string& InBusElement::GetMessagequeuecapacity() const
{
  return m_Messagequeuecapacity;
}

void InBusElement::SetMessagequeuecapacity(const std::string& value)
{
  m_Messagequeuecapacity = value;
}

const std::string& InBusElement::GetMessagequeuetype() const
{
  return m_Messagequeuetype;
}

void InBusElement::SetMessagequeuetype(const std::string& value)
{
  m_Messagequeuetype = value;
}

const std::string& InBusElement::GetMessagequeueoverwriting() const
{
  return m_Messagequeueoverwriting;
}

void InBusElement::SetMessagequeueoverwriting(const std::string& value)
{
  m_Messagequeueoverwriting = value;
}

const std::string& InBusElement::GetEventtriggers() const
{
  return m_Eventtriggers;
}

void InBusElement::SetEventtriggers(const std::string& value)
{
  m_Eventtriggers = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
