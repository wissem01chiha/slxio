#include "Sin2PiU.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Sin2PiU::Sin2PiU() {}

Sin2PiU::~Sin2PiU() {}

const std::string& Sin2PiU::GetPort() const
{
    return m_Port;
}

void Sin2PiU::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& Sin2PiU::GetSignalname() const
{
    return m_Signalname;
}

void Sin2PiU::SetSignalname(const std::string& value)
{
    m_Signalname = value;
}

const std::string& Sin2PiU::GetSignalobject() const
{
    return m_Signalobject;
}

void Sin2PiU::SetSignalobject(const std::string& value)
{
    m_Signalobject = value;
}

const std::string& Sin2PiU::GetStorageclass() const
{
    return m_Storageclass;
}

void Sin2PiU::SetStorageclass(const std::string& value)
{
    m_Storageclass = value;
}

const std::string& Sin2PiU::GetIcondisplay() const
{
    return m_Icondisplay;
}

void Sin2PiU::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& Sin2PiU::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void Sin2PiU::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& Sin2PiU::GetOutmin() const
{
    return m_Outmin;
}

void Sin2PiU::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Sin2PiU::GetOutmax() const
{
    return m_Outmax;
}

void Sin2PiU::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Sin2PiU::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Sin2PiU::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Sin2PiU::GetLockscale() const
{
    return m_Lockscale;
}

void Sin2PiU::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Sin2PiU::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void Sin2PiU::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& Sin2PiU::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void Sin2PiU::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& Sin2PiU::GetDatamode() const
{
    return m_Datamode;
}

void Sin2PiU::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& Sin2PiU::GetUnit() const
{
    return m_Unit;
}

void Sin2PiU::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& Sin2PiU::GetPortdimensions() const
{
    return m_Portdimensions;
}

void Sin2PiU::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& Sin2PiU::GetVarsizesig() const
{
    return m_Varsizesig;
}

void Sin2PiU::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& Sin2PiU::GetSampletime() const
{
    return m_Sampletime;
}

void Sin2PiU::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Sin2PiU::GetSignaltype() const
{
    return m_Signaltype;
}

void Sin2PiU::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& Sin2PiU::GetEnsureoutportisvirtual() const
{
    return m_Ensureoutportisvirtual;
}

void Sin2PiU::SetEnsureoutportisvirtual(const std::string& value)
{
    m_Ensureoutportisvirtual = value;
}

const std::string& Sin2PiU::GetOutputwhendisabled() const
{
    return m_Outputwhendisabled;
}

void Sin2PiU::SetOutputwhendisabled(const std::string& value)
{
    m_Outputwhendisabled = value;
}

const std::string& Sin2PiU::GetInitialoutput() const
{
    return m_Initialoutput;
}

void Sin2PiU::SetInitialoutput(const std::string& value)
{
    m_Initialoutput = value;
}

const std::string& Sin2PiU::GetMustresolvetosignalobject() const
{
    return m_Mustresolvetosignalobject;
}

void Sin2PiU::SetMustresolvetosignalobject(const std::string& value)
{
    m_Mustresolvetosignalobject = value;
}

const std::string& Sin2PiU::GetOutputwhenunconnected() const
{
    return m_Outputwhenunconnected;
}

void Sin2PiU::SetOutputwhenunconnected(const std::string& value)
{
    m_Outputwhenunconnected = value;
}

const std::string& Sin2PiU::GetOutputwhenunconnectedvalue() const
{
    return m_Outputwhenunconnectedvalue;
}

void Sin2PiU::SetOutputwhenunconnectedvalue(const std::string& value)
{
    m_Outputwhenunconnectedvalue = value;
}

const std::string& Sin2PiU::GetVectorparamsas1dforoutwhenunconnected() const
{
    return m_Vectorparamsas1dforoutwhenunconnected;
}

void Sin2PiU::SetVectorparamsas1dforoutwhenunconnected(const std::string& value)
{
    m_Vectorparamsas1dforoutwhenunconnected = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
