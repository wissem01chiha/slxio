#include "FunctionElement.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

FunctionElement::FunctionElement() {}

FunctionElement::~FunctionElement() {}

const std::string& FunctionElement::GetPort() const { return m_Port; }

void FunctionElement::SetPort(const std::string& value) { m_Port = value; }

const std::string& FunctionElement::GetPortname() const { return m_Portname; }

void FunctionElement::SetPortname(const std::string& value)
{
    m_Portname = value;
}

const std::string& FunctionElement::GetElement() const { return m_Element; }

void FunctionElement::SetElement(const std::string& value)
{
    m_Element = value;
}

const std::string& FunctionElement::GetIsbuselementport() const
{
    return m_Isbuselementport;
}

void FunctionElement::SetIsbuselementport(const std::string& value)
{
    m_Isbuselementport = value;
}

const std::string& FunctionElement::GetSignalname() const
{
    return m_Signalname;
}

void FunctionElement::SetSignalname(const std::string& value)
{
    m_Signalname = value;
}

const std::string& FunctionElement::GetSignalobject() const
{
    return m_Signalobject;
}

void FunctionElement::SetSignalobject(const std::string& value)
{
    m_Signalobject = value;
}

const std::string& FunctionElement::GetStorageclass() const
{
    return m_Storageclass;
}

void FunctionElement::SetStorageclass(const std::string& value)
{
    m_Storageclass = value;
}

const std::string& FunctionElement::GetIcondisplay() const
{
    return m_Icondisplay;
}

void FunctionElement::SetIcondisplay(const std::string& value)
{
    m_Icondisplay = value;
}

const std::string& FunctionElement::GetOutputfunctioncall() const
{
    return m_Outputfunctioncall;
}

void FunctionElement::SetOutputfunctioncall(const std::string& value)
{
    m_Outputfunctioncall = value;
}

const std::string& FunctionElement::GetOutmin() const { return m_Outmin; }

void FunctionElement::SetOutmin(const std::string& value) { m_Outmin = value; }

const std::string& FunctionElement::GetOutmax() const { return m_Outmax; }

void FunctionElement::SetOutmax(const std::string& value) { m_Outmax = value; }

const std::string& FunctionElement::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void FunctionElement::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& FunctionElement::GetLockscale() const { return m_Lockscale; }

void FunctionElement::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& FunctionElement::GetBusoutputasstruct() const
{
    return m_Busoutputasstruct;
}

void FunctionElement::SetBusoutputasstruct(const std::string& value)
{
    m_Busoutputasstruct = value;
}

const std::string& FunctionElement::GetBusvirtuality() const
{
    return m_Busvirtuality;
}

void FunctionElement::SetBusvirtuality(const std::string& value)
{
    m_Busvirtuality = value;
}

const std::string& FunctionElement::GetDatamode() const { return m_Datamode; }

void FunctionElement::SetDatamode(const std::string& value)
{
    m_Datamode = value;
}

const std::string& FunctionElement::GetUnit() const { return m_Unit; }

void FunctionElement::SetUnit(const std::string& value) { m_Unit = value; }

const std::string& FunctionElement::GetPortdimensions() const
{
    return m_Portdimensions;
}

void FunctionElement::SetPortdimensions(const std::string& value)
{
    m_Portdimensions = value;
}

const std::string& FunctionElement::GetVarsizesig() const
{
    return m_Varsizesig;
}

void FunctionElement::SetVarsizesig(const std::string& value)
{
    m_Varsizesig = value;
}

const std::string& FunctionElement::GetSampletime() const
{
    return m_Sampletime;
}

void FunctionElement::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& FunctionElement::GetSignaltype() const
{
    return m_Signaltype;
}

void FunctionElement::SetSignaltype(const std::string& value)
{
    m_Signaltype = value;
}

const std::string& FunctionElement::GetEnsureoutportisvirtual() const
{
    return m_Ensureoutportisvirtual;
}

void FunctionElement::SetEnsureoutportisvirtual(const std::string& value)
{
    m_Ensureoutportisvirtual = value;
}

const std::string& FunctionElement::GetOutputwhendisabled() const
{
    return m_Outputwhendisabled;
}

void FunctionElement::SetOutputwhendisabled(const std::string& value)
{
    m_Outputwhendisabled = value;
}

const std::string& FunctionElement::GetInitialoutput() const
{
    return m_Initialoutput;
}

void FunctionElement::SetInitialoutput(const std::string& value)
{
    m_Initialoutput = value;
}

const std::string& FunctionElement::GetMustresolvetosignalobject() const
{
    return m_Mustresolvetosignalobject;
}

void FunctionElement::SetMustresolvetosignalobject(const std::string& value)
{
    m_Mustresolvetosignalobject = value;
}

const std::string& FunctionElement::GetOutputwhenunconnected() const
{
    return m_Outputwhenunconnected;
}

void FunctionElement::SetOutputwhenunconnected(const std::string& value)
{
    m_Outputwhenunconnected = value;
}

const std::string& FunctionElement::GetOutputwhenunconnectedvalue() const
{
    return m_Outputwhenunconnectedvalue;
}

void FunctionElement::SetOutputwhenunconnectedvalue(const std::string& value)
{
    m_Outputwhenunconnectedvalue = value;
}

const std::string&
FunctionElement::GetVectorparamsas1dforoutwhenunconnected() const
{
    return m_Vectorparamsas1dforoutwhenunconnected;
}

void FunctionElement::SetVectorparamsas1dforoutwhenunconnected(
    const std::string& value)
{
    m_Vectorparamsas1dforoutwhenunconnected = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
