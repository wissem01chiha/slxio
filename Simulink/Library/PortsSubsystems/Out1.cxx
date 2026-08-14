#include "Out1.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Out1::Out1() {}

Out1::~Out1() {}

const std::string& Out1::GetPort() const { return m_Port; }

void Out1::SetPort(const std::string& value) { m_Port = value; }

const std::string& Out1::GetSignalname() const { return m_Signalname; }

void Out1::SetSignalname(const std::string& value) { m_Signalname = value; }

const std::string& Out1::GetSignalobject() const { return m_Signalobject; }

void Out1::SetSignalobject(const std::string& value) { m_Signalobject = value; }

const std::string& Out1::GetStorageclass() const { return m_Storageclass; }

void Out1::SetStorageclass(const std::string& value) { m_Storageclass = value; }

const std::string& Out1::GetIcondisplay() const { return m_Icondisplay; }

void Out1::SetIcondisplay(const std::string& value) { m_Icondisplay = value; }

const std::string& Out1::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void Out1::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& Out1::GetOutmin() const { return m_Outmin; }

void Out1::SetOutmin(const std::string& value) { m_Outmin = value; }

const std::string& Out1::GetOutmax() const { return m_Outmax; }

void Out1::SetOutmax(const std::string& value) { m_Outmax = value; }

const std::string& Out1::GetOutdatatypestr() const { return m_Outdatatypestr; }

void Out1::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Out1::GetLockscale() const { return m_Lockscale; }

void Out1::SetLockscale(const std::string& value) { m_Lockscale = value; }

const std::string& Out1::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void Out1::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& Out1::GetBusvirtuality() const { return m_Busvirtuality; }

void Out1::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& Out1::GetDatamode() const { return m_Datamode; }

void Out1::SetDatamode(const std::string& value) { m_Datamode = value; }

const std::string& Out1::GetUnit() const { return m_Unit; }

void Out1::SetUnit(const std::string& value) { m_Unit = value; }

const std::string& Out1::GetPortdimensions() const { return m_Portdimensions; }

void Out1::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& Out1::GetVarsizesig() const { return m_Varsizesig; }

void Out1::SetVarsizesig(const std::string& value) { m_Varsizesig = value; }

const std::string& Out1::GetSampletime() const { return m_Sampletime; }

void Out1::SetSampletime(const std::string& value) { m_Sampletime = value; }

const std::string& Out1::GetSignaltype() const { return m_Signaltype; }

void Out1::SetSignaltype(const std::string& value) { m_Signaltype = value; }

const std::string& Out1::GetEnsureoutportisvirtual() const
{
    return m_Ensureoutportisvirtual;
}

void Out1::SetEnsureoutportisvirtual(const std::string& value)
{
    m_Ensureoutportisvirtual = value;
}

const std::string& Out1::GetOutputwhendisabled() const
{
    return m_Outputwhendisabled;
}

void Out1::SetOutputwhendisabled(const std::string& value)
{
    m_Outputwhendisabled = value;
}

const std::string& Out1::GetInitialoutput() const { return m_Initialoutput; }

void Out1::SetInitialoutput(const std::string& value)
{
    m_Initialoutput = value;
}

const std::string& Out1::GetMustresolvetosignalobject() const
{
    return m_Mustresolvetosignalobject;
}

void Out1::SetMustresolvetosignalobject(const std::string& value)
{
    m_Mustresolvetosignalobject = value;
}

const std::string& Out1::GetOutputwhenunconnected() const
{
    return m_Outputwhenunconnected;
}

void Out1::SetOutputwhenunconnected(const std::string& value)
{
    m_Outputwhenunconnected = value;
}

const std::string& Out1::GetOutputwhenunconnectedvalue() const
{
    return m_Outputwhenunconnectedvalue;
}

void Out1::SetOutputwhenunconnectedvalue(const std::string& value)
{
    m_Outputwhenunconnectedvalue = value;
}

const std::string& Out1::GetVectorparamsas1dforoutwhenunconnected() const
{
    return m_Vectorparamsas1dforoutwhenunconnected;
}

void Out1::SetVectorparamsas1dforoutwhenunconnected(const std::string& value)
{
    m_Vectorparamsas1dforoutwhenunconnected = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
