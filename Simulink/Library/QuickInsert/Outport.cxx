#include "Outport.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Outport::Outport() {}

Outport::~Outport() {}

const std::string& Outport::GetPort() const { return m_Port; }

void Outport::SetPort(const std::string& value) { m_Port = value; }

const std::string& Outport::GetSignalname() const { return m_Signalname; }

void Outport::SetSignalname(const std::string& value) { m_Signalname = value; }

const std::string& Outport::GetSignalobject() const { return m_Signalobject; }

void Outport::SetSignalobject(const std::string& value)
{
    m_Signalobject = value;
}

const std::string& Outport::GetStorageclass() const { return m_Storageclass; }

void Outport::SetStorageclass(const std::string& value)
{
    m_Storageclass = value;
}

const std::string& Outport::GetIcondisplay() const { return m_Icondisplay; }

void Outport::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& Outport::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void Outport::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& Outport::GetOutmin() const { return m_Outmin; }

void Outport::SetOutmin(const std::string& value) { m_Outmin = value; }

const std::string& Outport::GetOutmax() const { return m_Outmax; }

void Outport::SetOutmax(const std::string& value) { m_Outmax = value; }

const std::string& Outport::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Outport::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Outport::GetLockscale() const { return m_Lockscale; }

void Outport::SetLockscale(const std::string& value) { m_Lockscale = value; }

const std::string& Outport::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void Outport::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& Outport::GetBusvirtuality() const { return m_Busvirtuality; }

void Outport::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& Outport::GetDatamode() const { return m_Datamode; }

void Outport::SetDatamode(const std::string& value) { m_Datamode = value; }

const std::string& Outport::GetUnit() const { return m_Unit; }

void Outport::SetUnit(const std::string& value) { m_Unit = value; }

const std::string& Outport::GetPortdimensions() const
{
    return m_Portdimensions;
}

void Outport::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& Outport::GetVarsizesig() const { return m_Varsizesig; }

void Outport::SetVarsizesig(const std::string& value) { m_Varsizesig = value; }

const std::string& Outport::GetSampletime() const { return m_Sampletime; }

void Outport::SetSampletime(const std::string& value) { m_Sampletime = value; }

const std::string& Outport::GetSignaltype() const { return m_Signaltype; }

void Outport::SetSignaltype(const std::string& value) { m_Signaltype = value; }

const std::string& Outport::GetEnsureoutportisvirtual() const
{
    return m_Ensureoutportisvirtual;
}

void Outport::SetEnsureoutportisvirtual(const std::string& value)
{
    m_Ensureoutportisvirtual = value;
}

const std::string& Outport::GetOutputwhendisabled() const
{
    return m_Outputwhendisabled;
}

void Outport::SetOutputwhendisabled(const std::string& value)
{
    m_Outputwhendisabled = value;
}

const std::string& Outport::GetInitialoutput() const { return m_Initialoutput; }

void Outport::SetInitialoutput(const std::string& value)
{
    m_Initialoutput = value;
}

const std::string& Outport::GetMustresolvetosignalobject() const
{
    return m_Mustresolvetosignalobject;
}

void Outport::SetMustresolvetosignalobject(const std::string& value)
{
    m_Mustresolvetosignalobject = value;
}

const std::string& Outport::GetOutputwhenunconnected() const
{
    return m_Outputwhenunconnected;
}

void Outport::SetOutputwhenunconnected(const std::string& value)
{
    m_Outputwhenunconnected = value;
}

const std::string& Outport::GetOutputwhenunconnectedvalue() const
{
    return m_Outputwhenunconnectedvalue;
}

void Outport::SetOutputwhenunconnectedvalue(const std::string& value)
{
    m_Outputwhenunconnectedvalue = value;
}

const std::string& Outport::GetVectorparamsas1dforoutwhenunconnected() const
{
    return m_Vectorparamsas1dforoutwhenunconnected;
}

void Outport::SetVectorparamsas1dforoutwhenunconnected(const std::string& value)
{
    m_Vectorparamsas1dforoutwhenunconnected = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
