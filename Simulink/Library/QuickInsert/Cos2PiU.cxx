#include "Cos2PiU.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Cos2PiU::Cos2PiU() {}

Cos2PiU::~Cos2PiU() {}

const std::string& Cos2PiU::GetPort() const
{
    return m_Port;
}

void Cos2PiU::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& Cos2PiU::GetSignalname() const
{
    return m_Signalname;
}

void Cos2PiU::SetSignalname(const std::string& value)
{
    m_Signalname = value;
}

const std::string& Cos2PiU::GetSignalobject() const
{
    return m_Signalobject;
}

void Cos2PiU::SetSignalobject(const std::string& value)
{
    m_Signalobject = value;
}

const std::string& Cos2PiU::GetStorageclass() const
{
    return m_Storageclass;
}

void Cos2PiU::SetStorageclass(const std::string& value)
{
    m_Storageclass = value;
}

const std::string& Cos2PiU::GetIcondisplay() const
{
    return m_Icondisplay;
}

void Cos2PiU::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& Cos2PiU::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void Cos2PiU::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& Cos2PiU::GetOutmin() const
{
    return m_Outmin;
}

void Cos2PiU::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& Cos2PiU::GetOutmax() const
{
    return m_Outmax;
}

void Cos2PiU::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& Cos2PiU::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Cos2PiU::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Cos2PiU::GetLockscale() const
{
    return m_Lockscale;
}

void Cos2PiU::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Cos2PiU::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void Cos2PiU::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& Cos2PiU::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void Cos2PiU::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& Cos2PiU::GetDatamode() const
{
    return m_Datamode;
}

void Cos2PiU::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& Cos2PiU::GetUnit() const
{
    return m_Unit;
}

void Cos2PiU::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& Cos2PiU::GetPortdimensions() const
{
    return m_Portdimensions;
}

void Cos2PiU::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& Cos2PiU::GetVarsizesig() const
{
    return m_Varsizesig;
}

void Cos2PiU::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& Cos2PiU::GetSampletime() const
{
    return m_Sampletime;
}

void Cos2PiU::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Cos2PiU::GetSignaltype() const
{
    return m_Signaltype;
}

void Cos2PiU::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& Cos2PiU::GetEnsureoutportisvirtual() const
{
    return m_Ensureoutportisvirtual;
}

void Cos2PiU::SetEnsureoutportisvirtual(const std::string& value)
{
    m_Ensureoutportisvirtual = value;
}

const std::string& Cos2PiU::GetOutputwhendisabled() const
{
    return m_Outputwhendisabled;
}

void Cos2PiU::SetOutputwhendisabled(const std::string& value)
{
    m_Outputwhendisabled = value;
}

const std::string& Cos2PiU::GetInitialoutput() const
{
    return m_Initialoutput;
}

void Cos2PiU::SetInitialoutput(const std::string& value)
{
    m_Initialoutput = value;
}

const std::string& Cos2PiU::GetMustresolvetosignalobject() const
{
    return m_Mustresolvetosignalobject;
}

void Cos2PiU::SetMustresolvetosignalobject(const std::string& value)
{
    m_Mustresolvetosignalobject = value;
}

const std::string& Cos2PiU::GetOutputwhenunconnected() const
{
    return m_Outputwhenunconnected;
}

void Cos2PiU::SetOutputwhenunconnected(const std::string& value)
{
    m_Outputwhenunconnected = value;
}

const std::string& Cos2PiU::GetOutputwhenunconnectedvalue() const
{
    return m_Outputwhenunconnectedvalue;
}

void Cos2PiU::SetOutputwhenunconnectedvalue(const std::string& value)
{
    m_Outputwhenunconnectedvalue = value;
}

const std::string& Cos2PiU::GetVectorparamsas1dforoutwhenunconnected() const
{
    return m_Vectorparamsas1dforoutwhenunconnected;
}

void Cos2PiU::SetVectorparamsas1dforoutwhenunconnected(const std::string& value)
{
    m_Vectorparamsas1dforoutwhenunconnected = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
