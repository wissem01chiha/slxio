#include "OutBusElement.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

OutBusElement::OutBusElement() {}

OutBusElement::~OutBusElement() {}

const std::string& OutBusElement::GetPort() const
{
    return m_Port;
}

void OutBusElement::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& OutBusElement::GetPortname() const
{
    return m_Portname;
}

void OutBusElement::SetPortname(const std::string& value)
{
    m_Portname = value;
}

const std::string& OutBusElement::GetElement() const
{
    return m_Element;
}

void OutBusElement::SetElement(const std::string& value)
{
    m_Element = value;
}

const std::string& OutBusElement::GetIsbuselementport() const
{
    return m_Isbuselementport;
}

void OutBusElement::SetIsbuselementport(const std::string& value)
{
    m_Isbuselementport = value;
}

const std::string& OutBusElement::GetSignalname() const
{
    return m_Signalname;
}

void OutBusElement::SetSignalname(const std::string& value)
{
    m_Signalname = value;
}

const std::string& OutBusElement::GetSignalobject() const
{
    return m_Signalobject;
}

void OutBusElement::SetSignalobject(const std::string& value)
{
    m_Signalobject = value;
}

const std::string& OutBusElement::GetStorageclass() const
{
    return m_Storageclass;
}

void OutBusElement::SetStorageclass(const std::string& value)
{
    m_Storageclass = value;
}

const std::string& OutBusElement::GetIcondisplay() const
{
    return m_Icondisplay;
}

void OutBusElement::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& OutBusElement::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void OutBusElement::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& OutBusElement::GetOutmin() const
{
    return m_Outmin;
}

void OutBusElement::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& OutBusElement::GetOutmax() const
{
    return m_Outmax;
}

void OutBusElement::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& OutBusElement::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void OutBusElement::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& OutBusElement::GetLockscale() const
{
    return m_Lockscale;
}

void OutBusElement::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& OutBusElement::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void OutBusElement::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& OutBusElement::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void OutBusElement::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& OutBusElement::GetDatamode() const
{
    return m_Datamode;
}

void OutBusElement::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& OutBusElement::GetUnit() const
{
    return m_Unit;
}

void OutBusElement::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& OutBusElement::GetPortdimensions() const
{
    return m_Portdimensions;
}

void OutBusElement::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& OutBusElement::GetVarsizesig() const
{
    return m_Varsizesig;
}

void OutBusElement::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& OutBusElement::GetSampletime() const
{
    return m_Sampletime;
}

void OutBusElement::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& OutBusElement::GetSignaltype() const
{
    return m_Signaltype;
}

void OutBusElement::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& OutBusElement::GetEnsureoutportisvirtual() const
{
    return m_Ensureoutportisvirtual;
}

void OutBusElement::SetEnsureoutportisvirtual(const std::string& value)
{
    m_Ensureoutportisvirtual = value;
}

const std::string& OutBusElement::GetOutputwhendisabled() const
{
    return m_Outputwhendisabled;
}

void OutBusElement::SetOutputwhendisabled(const std::string& value)
{
    m_Outputwhendisabled = value;
}

const std::string& OutBusElement::GetInitialoutput() const
{
    return m_Initialoutput;
}

void OutBusElement::SetInitialoutput(const std::string& value)
{
    m_Initialoutput = value;
}

const std::string& OutBusElement::GetMustresolvetosignalobject() const
{
    return m_Mustresolvetosignalobject;
}

void OutBusElement::SetMustresolvetosignalobject(const std::string& value)
{
    m_Mustresolvetosignalobject = value;
}

const std::string& OutBusElement::GetOutputwhenunconnected() const
{
    return m_Outputwhenunconnected;
}

void OutBusElement::SetOutputwhenunconnected(const std::string& value)
{
    m_Outputwhenunconnected = value;
}

const std::string& OutBusElement::GetOutputwhenunconnectedvalue() const
{
    return m_Outputwhenunconnectedvalue;
}

void OutBusElement::SetOutputwhenunconnectedvalue(const std::string& value)
{
    m_Outputwhenunconnectedvalue = value;
}

const std::string& OutBusElement::GetVectorparamsas1dforoutwhenunconnected() const
{
    return m_Vectorparamsas1dforoutwhenunconnected;
}

void OutBusElement::SetVectorparamsas1dforoutwhenunconnected(const std::string& value)
{
    m_Vectorparamsas1dforoutwhenunconnected = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
