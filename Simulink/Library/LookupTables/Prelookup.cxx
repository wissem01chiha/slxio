#include "Prelookup.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Prelookup::Prelookup() {}

Prelookup::~Prelookup() {}

const std::string& Prelookup::GetBreakpointsdatasource() const
{
    return m_Breakpointsdatasource;
}

void Prelookup::SetBreakpointsdatasource(const std::string& value)
{
    m_Breakpointsdatasource = value;
}

const std::string& Prelookup::GetBreakpointsdata() const
{
    return m_Breakpointsdata;
}

void Prelookup::SetBreakpointsdata(const std::string& value)
{
    m_Breakpointsdata = value;
}

const std::string& Prelookup::GetBreakpointsspecification() const
{
    return m_Breakpointsspecification;
}

void Prelookup::SetBreakpointsspecification(const std::string& value)
{
    m_Breakpointsspecification = value;
}

const std::string& Prelookup::GetBreakpointobject() const
{
    return m_Breakpointobject;
}

void Prelookup::SetBreakpointobject(const std::string& value)
{
    m_Breakpointobject = value;
}

const std::string& Prelookup::GetBreakpointsnumpoints() const
{
    return m_Breakpointsnumpoints;
}

void Prelookup::SetBreakpointsnumpoints(const std::string& value)
{
    m_Breakpointsnumpoints = value;
}

const std::string& Prelookup::GetBreakpointsfirstpoint() const
{
    return m_Breakpointsfirstpoint;
}

void Prelookup::SetBreakpointsfirstpoint(const std::string& value)
{
    m_Breakpointsfirstpoint = value;
}

const std::string& Prelookup::GetBreakpointsspacing() const
{
    return m_Breakpointsspacing;
}

void Prelookup::SetBreakpointsspacing(const std::string& value)
{
    m_Breakpointsspacing = value;
}

const std::string& Prelookup::GetOutputselection() const
{
    return m_Outputselection;
}

void Prelookup::SetOutputselection(const std::string& value)
{
    m_Outputselection = value;
}

const std::string& Prelookup::GetIndexsearchmethod() const
{
    return m_Indexsearchmethod;
}

void Prelookup::SetIndexsearchmethod(const std::string& value)
{
    m_Indexsearchmethod = value;
}

const std::string&
Prelookup::GetBeginindexsearchusingpreviousindexresult() const
{
    return m_Beginindexsearchusingpreviousindexresult;
}

void Prelookup::SetBeginindexsearchusingpreviousindexresult(
    const std::string& value)
{
    m_Beginindexsearchusingpreviousindexresult = value;
}

const std::string& Prelookup::GetExtrapmethod() const { return m_Extrapmethod; }

void Prelookup::SetExtrapmethod(const std::string& value)
{
    m_Extrapmethod = value;
}

const std::string& Prelookup::GetUselastbreakpoint() const
{
    return m_Uselastbreakpoint;
}

void Prelookup::SetUselastbreakpoint(const std::string& value)
{
    m_Uselastbreakpoint = value;
}

const std::string& Prelookup::GetRemoveprotectioninput() const
{
    return m_Removeprotectioninput;
}

void Prelookup::SetRemoveprotectioninput(const std::string& value)
{
    m_Removeprotectioninput = value;
}

const std::string& Prelookup::GetDiagnosticforoutofrangeinput() const
{
    return m_Diagnosticforoutofrangeinput;
}

void Prelookup::SetDiagnosticforoutofrangeinput(const std::string& value)
{
    m_Diagnosticforoutofrangeinput = value;
}

const std::string& Prelookup::GetBreakpointmin() const
{
    return m_Breakpointmin;
}

void Prelookup::SetBreakpointmin(const std::string& value)
{
    m_Breakpointmin = value;
}

const std::string& Prelookup::GetBreakpointmax() const
{
    return m_Breakpointmax;
}

void Prelookup::SetBreakpointmax(const std::string& value)
{
    m_Breakpointmax = value;
}

const std::string& Prelookup::GetBreakpointdatatypestr() const
{
    return m_Breakpointdatatypestr;
}

void Prelookup::SetBreakpointdatatypestr(const std::string& value)
{
    m_Breakpointdatatypestr = value;
}

const std::string& Prelookup::GetIndexdatatypestr() const
{
    return m_Indexdatatypestr;
}

void Prelookup::SetIndexdatatypestr(const std::string& value)
{
    m_Indexdatatypestr = value;
}

const std::string& Prelookup::GetFractiondatatypestr() const
{
    return m_Fractiondatatypestr;
}

void Prelookup::SetFractiondatatypestr(const std::string& value)
{
    m_Fractiondatatypestr = value;
}

const std::string& Prelookup::GetLockscale() const { return m_Lockscale; }

void Prelookup::SetLockscale(const std::string& value) { m_Lockscale = value; }

const std::string& Prelookup::GetRndmeth() const { return m_Rndmeth; }

void Prelookup::SetRndmeth(const std::string& value) { m_Rndmeth = value; }

const std::string& Prelookup::GetSampletime() const { return m_Sampletime; }

void Prelookup::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Prelookup::GetOutputbusdatatypestr() const
{
    return m_Outputbusdatatypestr;
}

void Prelookup::SetOutputbusdatatypestr(const std::string& value)
{
    m_Outputbusdatatypestr = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
