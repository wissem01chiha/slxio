#include "BusElementOut.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

BusElementOut::BusElementOut() {}

BusElementOut::~BusElementOut() {}

const std::string& BusElementOut::GetPort() const { return m_Port; }

void BusElementOut::SetPort(const std::string& value) { m_Port = value; }

const std::string& BusElementOut::GetPortname() const { return m_Portname; }

void BusElementOut::SetPortname(const std::string& value)
{
    m_Portname = value;
}

const std::string& BusElementOut::GetElement() const { return m_Element; }

void BusElementOut::SetElement(const std::string& value) { m_Element = value; }

const std::string& BusElementOut::GetIsbuselementport() const
{
    return m_Isbuselementport;
}

void BusElementOut::SetIsbuselementport(const std::string& value)
{
    m_Isbuselementport = value;
}

const std::string& BusElementOut::GetSignalname() const { return m_Signalname; }

void BusElementOut::SetSignalname(const std::string& value)
{
    m_Signalname = value;
}

const std::string& BusElementOut::GetSignalobject() const
{
    return m_Signalobject;
}

void BusElementOut::SetSignalobject(const std::string& value)
{
    m_Signalobject = value;
}

const std::string& BusElementOut::GetStorageclass() const
{
    return m_Storageclass;
}

void BusElementOut::SetStorageclass(const std::string& value)
{
    m_Storageclass = value;
}

const std::string& BusElementOut::GetIcondisplay() const
{
    return m_Icondisplay;
}

void BusElementOut::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& BusElementOut::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void BusElementOut::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& BusElementOut::GetOutmin() const { return m_Outmin; }

void BusElementOut::SetOutmin(const std::string& value) { m_Outmin = value; }

const std::string& BusElementOut::GetOutmax() const { return m_Outmax; }

void BusElementOut::SetOutmax(const std::string& value) { m_Outmax = value; }

const std::string& BusElementOut::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void BusElementOut::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& BusElementOut::GetLockscale() const { return m_Lockscale; }

void BusElementOut::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& BusElementOut::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void BusElementOut::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& BusElementOut::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void BusElementOut::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& BusElementOut::GetDatamode() const { return m_Datamode; }

void BusElementOut::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& BusElementOut::GetUnit() const { return m_Unit; }

void BusElementOut::SetUnit(const std::string& value) { m_Unit = value; }

const std::string& BusElementOut::GetPortdimensions() const
{
    return m_Portdimensions;
}

void BusElementOut::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& BusElementOut::GetVarsizesig() const { return m_Varsizesig; }

void BusElementOut::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& BusElementOut::GetSampletime() const { return m_Sampletime; }

void BusElementOut::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& BusElementOut::GetSignaltype() const { return m_Signaltype; }

void BusElementOut::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& BusElementOut::GetEnsureoutportisvirtual() const
{
    return m_Ensureoutportisvirtual;
}

void BusElementOut::SetEnsureoutportisvirtual(const std::string& value)
{
    m_Ensureoutportisvirtual = value;
}

const std::string& BusElementOut::GetOutputwhendisabled() const
{
    return m_Outputwhendisabled;
}

void BusElementOut::SetOutputwhendisabled(const std::string& value)
{
    m_Outputwhendisabled = value;
}

const std::string& BusElementOut::GetInitialoutput() const
{
    return m_Initialoutput;
}

void BusElementOut::SetInitialoutput(const std::string& value)
{
    m_Initialoutput = value;
}

const std::string& BusElementOut::GetMustresolvetosignalobject() const
{
    return m_Mustresolvetosignalobject;
}

void BusElementOut::SetMustresolvetosignalobject(const std::string& value)
{
    m_Mustresolvetosignalobject = value;
}

const std::string& BusElementOut::GetOutputwhenunconnected() const
{
    return m_Outputwhenunconnected;
}

void BusElementOut::SetOutputwhenunconnected(const std::string& value)
{
    m_Outputwhenunconnected = value;
}

const std::string& BusElementOut::GetOutputwhenunconnectedvalue() const
{
    return m_Outputwhenunconnectedvalue;
}

void BusElementOut::SetOutputwhenunconnectedvalue(const std::string& value)
{
    m_Outputwhenunconnectedvalue = value;
}

const std::string&
BusElementOut::GetVectorparamsas1dforoutwhenunconnected() const
{
    return m_Vectorparamsas1dforoutwhenunconnected;
}

void BusElementOut::SetVectorparamsas1dforoutwhenunconnected(
    const std::string& value)
{
    m_Vectorparamsas1dforoutwhenunconnected = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
