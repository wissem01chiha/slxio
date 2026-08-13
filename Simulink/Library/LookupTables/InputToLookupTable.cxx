#include "InputToLookupTable.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

InputToLookupTable::InputToLookupTable() {}

InputToLookupTable::~InputToLookupTable() {}

const std::string& InputToLookupTable::GetPort() const
{
    return m_Port;
}

void InputToLookupTable::SetPort(const std::string& value)
{
    m_Port = value;
}

const std::string& InputToLookupTable::GetSignalname() const
{
    return m_Signalname;
}

void InputToLookupTable::SetSignalname(const std::string& value)
{
    m_Signalname = value;
}

const std::string& InputToLookupTable::GetSignalobject() const
{
    return m_Signalobject;
}

void InputToLookupTable::SetSignalobject(const std::string& value)
{
    m_Signalobject = value;
}

const std::string& InputToLookupTable::GetStorageclass() const
{
    return m_Storageclass;
}

void InputToLookupTable::SetStorageclass(const std::string& value)
{
    m_Storageclass = value;
}

const std::string& InputToLookupTable::GetIcondisplay() const
{
    return m_Icondisplay;
}

void InputToLookupTable::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& InputToLookupTable::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void InputToLookupTable::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& InputToLookupTable::GetOutmin() const
{
    return m_Outmin;
}

void InputToLookupTable::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& InputToLookupTable::GetOutmax() const
{
    return m_Outmax;
}

void InputToLookupTable::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& InputToLookupTable::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void InputToLookupTable::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& InputToLookupTable::GetLockscale() const
{
    return m_Lockscale;
}

void InputToLookupTable::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& InputToLookupTable::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void InputToLookupTable::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& InputToLookupTable::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void InputToLookupTable::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& InputToLookupTable::GetDatamode() const
{
    return m_Datamode;
}

void InputToLookupTable::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& InputToLookupTable::GetUnit() const
{
    return m_Unit;
}

void InputToLookupTable::SetUnit(const std::string& value)
{
    m_Unit = value;
}

const std::string& InputToLookupTable::GetPortdimensions() const
{
    return m_Portdimensions;
}

void InputToLookupTable::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& InputToLookupTable::GetVarsizesig() const
{
    return m_Varsizesig;
}

void InputToLookupTable::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& InputToLookupTable::GetSampletime() const
{
    return m_Sampletime;
}

void InputToLookupTable::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& InputToLookupTable::GetSignaltype() const
{
    return m_Signaltype;
}

void InputToLookupTable::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& InputToLookupTable::GetEnsureoutportisvirtual() const
{
    return m_Ensureoutportisvirtual;
}

void InputToLookupTable::SetEnsureoutportisvirtual(const std::string& value)
{
    m_Ensureoutportisvirtual = value;
}

const std::string& InputToLookupTable::GetOutputwhendisabled() const
{
    return m_Outputwhendisabled;
}

void InputToLookupTable::SetOutputwhendisabled(const std::string& value)
{
    m_Outputwhendisabled = value;
}

const std::string& InputToLookupTable::GetInitialoutput() const
{
    return m_Initialoutput;
}

void InputToLookupTable::SetInitialoutput(const std::string& value)
{
    m_Initialoutput = value;
}

const std::string& InputToLookupTable::GetMustresolvetosignalobject() const
{
    return m_Mustresolvetosignalobject;
}

void InputToLookupTable::SetMustresolvetosignalobject(const std::string& value)
{
    m_Mustresolvetosignalobject = value;
}

const std::string& InputToLookupTable::GetOutputwhenunconnected() const
{
    return m_Outputwhenunconnected;
}

void InputToLookupTable::SetOutputwhenunconnected(const std::string& value)
{
    m_Outputwhenunconnected = value;
}

const std::string& InputToLookupTable::GetOutputwhenunconnectedvalue() const
{
    return m_Outputwhenunconnectedvalue;
}

void InputToLookupTable::SetOutputwhenunconnectedvalue(const std::string& value)
{
    m_Outputwhenunconnectedvalue = value;
}

const std::string& InputToLookupTable::GetVectorparamsas1dforoutwhenunconnected() const
{
    return m_Vectorparamsas1dforoutwhenunconnected;
}

void InputToLookupTable::SetVectorparamsas1dforoutwhenunconnected(const std::string& value)
{
    m_Vectorparamsas1dforoutwhenunconnected = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
