#include "Y1.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Y1::Y1() {}

Y1::~Y1() {}

const std::string& Y1::GetPort() const
{
    return m_Port;
}

void Y1::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& Y1::GetSignalname() const
{
    return m_Signalname;
}

void Y1::SetSignalname(const std::string& value)
{
    m_Signalname = value;
}

const std::string& Y1::GetSignalobject() const
{
    return m_Signalobject;
}

void Y1::SetSignalobject(const std::string& value)
{
    m_Signalobject = value;
}

const std::string& Y1::GetStorageclass() const
{
    return m_Storageclass;
}

void Y1::SetStorageclass(const std::string& value)
{
    m_Storageclass = value;
}

const std::string& Y1::GetIcondisplay() const
{
    return m_Icondisplay;
}

void Y1::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& Y1::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void Y1::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& Y1::GetOutmin() const
{
    return m_Outmin;
}

void Y1::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Y1::GetOutmax() const
{
    return m_Outmax;
}

void Y1::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Y1::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Y1::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Y1::GetLockscale() const
{
    return m_Lockscale;
}

void Y1::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Y1::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void Y1::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& Y1::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void Y1::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& Y1::GetDatamode() const
{
    return m_Datamode;
}

void Y1::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& Y1::GetUnit() const
{
    return m_Unit;
}

void Y1::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& Y1::GetPortdimensions() const
{
    return m_Portdimensions;
}

void Y1::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& Y1::GetVarsizesig() const
{
    return m_Varsizesig;
}

void Y1::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& Y1::GetSampletime() const
{
    return m_Sampletime;
}

void Y1::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Y1::GetSignaltype() const
{
    return m_Signaltype;
}

void Y1::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& Y1::GetEnsureoutportisvirtual() const
{
    return m_Ensureoutportisvirtual;
}

void Y1::SetEnsureoutportisvirtual(const std::string& value)
{
    m_Ensureoutportisvirtual = value;
}

const std::string& Y1::GetOutputwhendisabled() const
{
    return m_Outputwhendisabled;
}

void Y1::SetOutputwhendisabled(const std::string& value)
{
    m_Outputwhendisabled = value;
}

const std::string& Y1::GetInitialoutput() const
{
    return m_Initialoutput;
}

void Y1::SetInitialoutput(const std::string& value)
{
    m_Initialoutput = value;
}

const std::string& Y1::GetMustresolvetosignalobject() const
{
    return m_Mustresolvetosignalobject;
}

void Y1::SetMustresolvetosignalobject(const std::string& value)
{
    m_Mustresolvetosignalobject = value;
}

const std::string& Y1::GetOutputwhenunconnected() const
{
    return m_Outputwhenunconnected;
}

void Y1::SetOutputwhenunconnected(const std::string& value)
{
    m_Outputwhenunconnected = value;
}

const std::string& Y1::GetOutputwhenunconnectedvalue() const
{
    return m_Outputwhenunconnectedvalue;
}

void Y1::SetOutputwhenunconnectedvalue(const std::string& value)
{
    m_Outputwhenunconnectedvalue = value;
}

const std::string& Y1::GetVectorparamsas1dforoutwhenunconnected() const
{
    return m_Vectorparamsas1dforoutwhenunconnected;
}

void Y1::SetVectorparamsas1dforoutwhenunconnected(const std::string& value)
{
    m_Vectorparamsas1dforoutwhenunconnected = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
