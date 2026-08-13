#include "Signal1.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Signal1::Signal1() {}

Signal1::~Signal1() {}

const std::string& Signal1::GetPort() const
{
    return m_Port;
}

void Signal1::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& Signal1::GetSignalname() const
{
    return m_Signalname;
}

void Signal1::SetSignalname(const std::string& value)
{
    m_Signalname = value;
}

const std::string& Signal1::GetSignalobject() const
{
    return m_Signalobject;
}

void Signal1::SetSignalobject(const std::string& value)
{
    m_Signalobject = value;
}

const std::string& Signal1::GetStorageclass() const
{
    return m_Storageclass;
}

void Signal1::SetStorageclass(const std::string& value)
{
    m_Storageclass = value;
}

const std::string& Signal1::GetIcondisplay() const
{
    return m_Icondisplay;
}

void Signal1::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& Signal1::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void Signal1::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& Signal1::GetOutmin() const
{
    return m_Outmin;
}

void Signal1::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Signal1::GetOutmax() const
{
    return m_Outmax;
}

void Signal1::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Signal1::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Signal1::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Signal1::GetLockscale() const
{
    return m_Lockscale;
}

void Signal1::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Signal1::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void Signal1::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& Signal1::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void Signal1::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& Signal1::GetDatamode() const
{
    return m_Datamode;
}

void Signal1::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& Signal1::GetUnit() const
{
    return m_Unit;
}

void Signal1::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& Signal1::GetPortdimensions() const
{
    return m_Portdimensions;
}

void Signal1::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& Signal1::GetVarsizesig() const
{
    return m_Varsizesig;
}

void Signal1::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& Signal1::GetSampletime() const
{
    return m_Sampletime;
}

void Signal1::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Signal1::GetSignaltype() const
{
    return m_Signaltype;
}

void Signal1::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& Signal1::GetEnsureoutportisvirtual() const
{
    return m_Ensureoutportisvirtual;
}

void Signal1::SetEnsureoutportisvirtual(const std::string& value)
{
    m_Ensureoutportisvirtual = value;
}

const std::string& Signal1::GetOutputwhendisabled() const
{
    return m_Outputwhendisabled;
}

void Signal1::SetOutputwhendisabled(const std::string& value)
{
    m_Outputwhendisabled = value;
}

const std::string& Signal1::GetInitialoutput() const
{
    return m_Initialoutput;
}

void Signal1::SetInitialoutput(const std::string& value)
{
    m_Initialoutput = value;
}

const std::string& Signal1::GetMustresolvetosignalobject() const
{
    return m_Mustresolvetosignalobject;
}

void Signal1::SetMustresolvetosignalobject(const std::string& value)
{
    m_Mustresolvetosignalobject = value;
}

const std::string& Signal1::GetOutputwhenunconnected() const
{
    return m_Outputwhenunconnected;
}

void Signal1::SetOutputwhenunconnected(const std::string& value)
{
    m_Outputwhenunconnected = value;
}

const std::string& Signal1::GetOutputwhenunconnectedvalue() const
{
    return m_Outputwhenunconnectedvalue;
}

void Signal1::SetOutputwhenunconnectedvalue(const std::string& value)
{
    m_Outputwhenunconnectedvalue = value;
}

const std::string& Signal1::GetVectorparamsas1dforoutwhenunconnected() const
{
    return m_Vectorparamsas1dforoutwhenunconnected;
}

void Signal1::SetVectorparamsas1dforoutwhenunconnected(const std::string& value)
{
    m_Vectorparamsas1dforoutwhenunconnected = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
