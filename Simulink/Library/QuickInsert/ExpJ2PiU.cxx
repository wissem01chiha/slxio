#include "ExpJ2PiU.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

ExpJ2PiU::ExpJ2PiU() {}

ExpJ2PiU::~ExpJ2PiU() {}

const std::string& ExpJ2PiU::GetPort() const
{
    return m_Port;
}

void ExpJ2PiU::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& ExpJ2PiU::GetSignalname() const
{
    return m_Signalname;
}

void ExpJ2PiU::SetSignalname(const std::string& value)
{
    m_Signalname = value;
}

const std::string& ExpJ2PiU::GetSignalobject() const
{
    return m_Signalobject;
}

void ExpJ2PiU::SetSignalobject(const std::string& value)
{
    m_Signalobject = value;
}

const std::string& ExpJ2PiU::GetStorageclass() const
{
    return m_Storageclass;
}

void ExpJ2PiU::SetStorageclass(const std::string& value)
{
    m_Storageclass = value;
}

const std::string& ExpJ2PiU::GetIcondisplay() const
{
    return m_Icondisplay;
}

void ExpJ2PiU::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& ExpJ2PiU::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void ExpJ2PiU::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& ExpJ2PiU::GetOutmin() const
{
    return m_Outmin;
}

void ExpJ2PiU::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& ExpJ2PiU::GetOutmax() const
{
    return m_Outmax;
}

void ExpJ2PiU::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& ExpJ2PiU::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void ExpJ2PiU::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& ExpJ2PiU::GetLockscale() const
{
    return m_Lockscale;
}

void ExpJ2PiU::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& ExpJ2PiU::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void ExpJ2PiU::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& ExpJ2PiU::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void ExpJ2PiU::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& ExpJ2PiU::GetDatamode() const
{
    return m_Datamode;
}

void ExpJ2PiU::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& ExpJ2PiU::GetUnit() const
{
    return m_Unit;
}

void ExpJ2PiU::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& ExpJ2PiU::GetPortdimensions() const
{
    return m_Portdimensions;
}

void ExpJ2PiU::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& ExpJ2PiU::GetVarsizesig() const
{
    return m_Varsizesig;
}

void ExpJ2PiU::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& ExpJ2PiU::GetSampletime() const
{
    return m_Sampletime;
}

void ExpJ2PiU::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& ExpJ2PiU::GetSignaltype() const
{
    return m_Signaltype;
}

void ExpJ2PiU::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& ExpJ2PiU::GetEnsureoutportisvirtual() const
{
    return m_Ensureoutportisvirtual;
}

void ExpJ2PiU::SetEnsureoutportisvirtual(const std::string& value)
{
    m_Ensureoutportisvirtual = value;
}

const std::string& ExpJ2PiU::GetOutputwhendisabled() const
{
    return m_Outputwhendisabled;
}

void ExpJ2PiU::SetOutputwhendisabled(const std::string& value)
{
    m_Outputwhendisabled = value;
}

const std::string& ExpJ2PiU::GetInitialoutput() const
{
    return m_Initialoutput;
}

void ExpJ2PiU::SetInitialoutput(const std::string& value)
{
    m_Initialoutput = value;
}

const std::string& ExpJ2PiU::GetMustresolvetosignalobject() const
{
    return m_Mustresolvetosignalobject;
}

void ExpJ2PiU::SetMustresolvetosignalobject(const std::string& value)
{
    m_Mustresolvetosignalobject = value;
}

const std::string& ExpJ2PiU::GetOutputwhenunconnected() const
{
    return m_Outputwhenunconnected;
}

void ExpJ2PiU::SetOutputwhenunconnected(const std::string& value)
{
    m_Outputwhenunconnected = value;
}

const std::string& ExpJ2PiU::GetOutputwhenunconnectedvalue() const
{
    return m_Outputwhenunconnectedvalue;
}

void ExpJ2PiU::SetOutputwhenunconnectedvalue(const std::string& value)
{
    m_Outputwhenunconnectedvalue = value;
}

const std::string& ExpJ2PiU::GetVectorparamsas1dforoutwhenunconnected() const
{
    return m_Vectorparamsas1dforoutwhenunconnected;
}

void ExpJ2PiU::SetVectorparamsas1dforoutwhenunconnected(const std::string& value)
{
    m_Vectorparamsas1dforoutwhenunconnected = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
