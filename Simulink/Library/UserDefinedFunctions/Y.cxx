#include "Y.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Y::Y() {}

Y::~Y() {}

const std::string& Y::GetPort() const
{
    return m_Port;
}

void Y::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& Y::GetSignalname() const
{
    return m_Signalname;
}

void Y::SetSignalname(const std::string& value)
{
    m_Signalname = value;
}

const std::string& Y::GetSignalobject() const
{
    return m_Signalobject;
}

void Y::SetSignalobject(const std::string& value)
{
    m_Signalobject = value;
}

const std::string& Y::GetStorageclass() const
{
    return m_Storageclass;
}

void Y::SetStorageclass(const std::string& value)
{
    m_Storageclass = value;
}

const std::string& Y::GetIcondisplay() const
{
    return m_Icondisplay;
}

void Y::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& Y::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void Y::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& Y::GetOutmin() const
{
    return m_Outmin;
}

void Y::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Y::GetOutmax() const
{
    return m_Outmax;
}

void Y::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Y::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Y::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Y::GetLockscale() const
{
    return m_Lockscale;
}

void Y::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Y::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void Y::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& Y::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void Y::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& Y::GetDatamode() const
{
    return m_Datamode;
}

void Y::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& Y::GetUnit() const
{
    return m_Unit;
}

void Y::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& Y::GetPortdimensions() const
{
    return m_Portdimensions;
}

void Y::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& Y::GetVarsizesig() const
{
    return m_Varsizesig;
}

void Y::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& Y::GetSampletime() const
{
    return m_Sampletime;
}

void Y::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Y::GetSignaltype() const
{
    return m_Signaltype;
}

void Y::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& Y::GetEnsureoutportisvirtual() const
{
    return m_Ensureoutportisvirtual;
}

void Y::SetEnsureoutportisvirtual(const std::string& value)
{
    m_Ensureoutportisvirtual = value;
}

const std::string& Y::GetOutputwhendisabled() const
{
    return m_Outputwhendisabled;
}

void Y::SetOutputwhendisabled(const std::string& value)
{
    m_Outputwhendisabled = value;
}

const std::string& Y::GetInitialoutput() const
{
    return m_Initialoutput;
}

void Y::SetInitialoutput(const std::string& value)
{
    m_Initialoutput = value;
}

const std::string& Y::GetMustresolvetosignalobject() const
{
    return m_Mustresolvetosignalobject;
}

void Y::SetMustresolvetosignalobject(const std::string& value)
{
    m_Mustresolvetosignalobject = value;
}

const std::string& Y::GetOutputwhenunconnected() const
{
    return m_Outputwhenunconnected;
}

void Y::SetOutputwhenunconnected(const std::string& value)
{
    m_Outputwhenunconnected = value;
}

const std::string& Y::GetOutputwhenunconnectedvalue() const
{
    return m_Outputwhenunconnectedvalue;
}

void Y::SetOutputwhenunconnectedvalue(const std::string& value)
{
    m_Outputwhenunconnectedvalue = value;
}

const std::string& Y::GetVectorparamsas1dforoutwhenunconnected() const
{
    return m_Vectorparamsas1dforoutwhenunconnected;
}

void Y::SetVectorparamsas1dforoutwhenunconnected(const std::string& value)
{
    m_Vectorparamsas1dforoutwhenunconnected = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
