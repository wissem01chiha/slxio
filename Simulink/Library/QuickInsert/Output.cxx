#include "Output.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Output::Output() {}

Output::~Output() {}

const std::string& Output::GetPort() const { return m_Port; }

void Output::SetPort(const std::string& value) { m_Port = value; }

const std::string& Output::GetSignalname() const { return m_Signalname; }

void Output::SetSignalname(const std::string& value) { m_Signalname = value; }

const std::string& Output::GetSignalobject() const { return m_Signalobject; }

void Output::SetSignalobject(const std::string& value)
{
    m_Signalobject = value;
}

const std::string& Output::GetStorageclass() const { return m_Storageclass; }

void Output::SetStorageclass(const std::string& value)
{
    m_Storageclass = value;
}

const std::string& Output::GetIcondisplay() const { return m_Icondisplay; }

void Output::SetIcondisplay(const std::string& value) { m_Icondisplay = value; }

const std::string& Output::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void Output::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& Output::GetOutmin() const { return m_Outmin; }

void Output::SetOutmin(const std::string& value) { m_Outmin = value; }

const std::string& Output::GetOutmax() const { return m_Outmax; }

void Output::SetOutmax(const std::string& value) { m_Outmax = value; }

const std::string& Output::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Output::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Output::GetLockscale() const { return m_Lockscale; }

void Output::SetLockscale(const std::string& value) { m_Lockscale = value; }

const std::string& Output::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void Output::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& Output::GetBusvirtuality() const { return m_Busvirtuality; }

void Output::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& Output::GetDatamode() const { return m_Datamode; }

void Output::SetDatamode(const std::string& value) { m_Datamode = value; }

const std::string& Output::GetUnit() const { return m_Unit; }

void Output::SetUnit(const std::string& value) { m_Unit = value; }

const std::string& Output::GetPortdimensions() const
{
    return m_Portdimensions;
}

void Output::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& Output::GetVarsizesig() const { return m_Varsizesig; }

void Output::SetVarsizesig(const std::string& value) { m_Varsizesig = value; }

const std::string& Output::GetSampletime() const { return m_Sampletime; }

void Output::SetSampletime(const std::string& value) { m_Sampletime = value; }

const std::string& Output::GetSignaltype() const { return m_Signaltype; }

void Output::SetSignaltype(const std::string& value) { m_Signaltype = value; }

const std::string& Output::GetEnsureoutportisvirtual() const
{
    return m_Ensureoutportisvirtual;
}

void Output::SetEnsureoutportisvirtual(const std::string& value)
{
    m_Ensureoutportisvirtual = value;
}

const std::string& Output::GetOutputwhendisabled() const
{
    return m_Outputwhendisabled;
}

void Output::SetOutputwhendisabled(const std::string& value)
{
    m_Outputwhendisabled = value;
}

const std::string& Output::GetInitialoutput() const { return m_Initialoutput; }

void Output::SetInitialoutput(const std::string& value)
{
    m_Initialoutput = value;
}

const std::string& Output::GetMustresolvetosignalobject() const
{
    return m_Mustresolvetosignalobject;
}

void Output::SetMustresolvetosignalobject(const std::string& value)
{
    m_Mustresolvetosignalobject = value;
}

const std::string& Output::GetOutputwhenunconnected() const
{
    return m_Outputwhenunconnected;
}

void Output::SetOutputwhenunconnected(const std::string& value)
{
    m_Outputwhenunconnected = value;
}

const std::string& Output::GetOutputwhenunconnectedvalue() const
{
    return m_Outputwhenunconnectedvalue;
}

void Output::SetOutputwhenunconnectedvalue(const std::string& value)
{
    m_Outputwhenunconnectedvalue = value;
}

const std::string& Output::GetVectorparamsas1dforoutwhenunconnected() const
{
    return m_Vectorparamsas1dforoutwhenunconnected;
}

void Output::SetVectorparamsas1dforoutwhenunconnected(const std::string& value)
{
    m_Vectorparamsas1dforoutwhenunconnected = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
