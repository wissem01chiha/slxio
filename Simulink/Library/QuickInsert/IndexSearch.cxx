#include "IndexSearch.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

IndexSearch::IndexSearch() {}

IndexSearch::~IndexSearch() {}

const std::string& IndexSearch::GetBreakpointsdatasource() const
{
  return m_Breakpointsdatasource;
}

void IndexSearch::SetBreakpointsdatasource(const std::string& value)
{
  m_Breakpointsdatasource = value;
}

const std::string& IndexSearch::GetBreakpointsdata() const
{
  return m_Breakpointsdata;
}

void IndexSearch::SetBreakpointsdata(const std::string& value)
{
  m_Breakpointsdata = value;
}

const std::string& IndexSearch::GetBreakpointsspecification() const
{
  return m_Breakpointsspecification;
}

void IndexSearch::SetBreakpointsspecification(const std::string& value)
{
  m_Breakpointsspecification = value;
}

const std::string& IndexSearch::GetBreakpointobject() const
{
  return m_Breakpointobject;
}

void IndexSearch::SetBreakpointobject(const std::string& value)
{
  m_Breakpointobject = value;
}

const std::string& IndexSearch::GetBreakpointsnumpoints() const
{
  return m_Breakpointsnumpoints;
}

void IndexSearch::SetBreakpointsnumpoints(const std::string& value)
{
  m_Breakpointsnumpoints = value;
}

const std::string& IndexSearch::GetBreakpointsfirstpoint() const
{
  return m_Breakpointsfirstpoint;
}

void IndexSearch::SetBreakpointsfirstpoint(const std::string& value)
{
  m_Breakpointsfirstpoint = value;
}

const std::string& IndexSearch::GetBreakpointsspacing() const
{
  return m_Breakpointsspacing;
}

void IndexSearch::SetBreakpointsspacing(const std::string& value)
{
  m_Breakpointsspacing = value;
}

const std::string& IndexSearch::GetOutputselection() const
{
  return m_Outputselection;
}

void IndexSearch::SetOutputselection(const std::string& value)
{
  m_Outputselection = value;
}

const std::string& IndexSearch::GetIndexsearchmethod() const
{
  return m_Indexsearchmethod;
}

void IndexSearch::SetIndexsearchmethod(const std::string& value)
{
  m_Indexsearchmethod = value;
}

const std::string& IndexSearch::GetBeginindexsearchusingpreviousindexresult()
  const
{
  return m_Beginindexsearchusingpreviousindexresult;
}

void IndexSearch::SetBeginindexsearchusingpreviousindexresult(
  const std::string& value)
{
  m_Beginindexsearchusingpreviousindexresult = value;
}

const std::string& IndexSearch::GetExtrapmethod() const
{
  return m_Extrapmethod;
}

void IndexSearch::SetExtrapmethod(const std::string& value)
{
  m_Extrapmethod = value;
}

const std::string& IndexSearch::GetUselastbreakpoint() const
{
  return m_Uselastbreakpoint;
}

void IndexSearch::SetUselastbreakpoint(const std::string& value)
{
  m_Uselastbreakpoint = value;
}

const std::string& IndexSearch::GetRemoveprotectioninput() const
{
  return m_Removeprotectioninput;
}

void IndexSearch::SetRemoveprotectioninput(const std::string& value)
{
  m_Removeprotectioninput = value;
}

const std::string& IndexSearch::GetDiagnosticforoutofrangeinput() const
{
  return m_Diagnosticforoutofrangeinput;
}

void IndexSearch::SetDiagnosticforoutofrangeinput(const std::string& value)
{
  m_Diagnosticforoutofrangeinput = value;
}

const std::string& IndexSearch::GetBreakpointmin() const
{
  return m_Breakpointmin;
}

void IndexSearch::SetBreakpointmin(const std::string& value)
{
  m_Breakpointmin = value;
}

const std::string& IndexSearch::GetBreakpointmax() const
{
  return m_Breakpointmax;
}

void IndexSearch::SetBreakpointmax(const std::string& value)
{
  m_Breakpointmax = value;
}

const std::string& IndexSearch::GetBreakpointdatatypestr() const
{
  return m_Breakpointdatatypestr;
}

void IndexSearch::SetBreakpointdatatypestr(const std::string& value)
{
  m_Breakpointdatatypestr = value;
}

const std::string& IndexSearch::GetIndexdatatypestr() const
{
  return m_Indexdatatypestr;
}

void IndexSearch::SetIndexdatatypestr(const std::string& value)
{
  m_Indexdatatypestr = value;
}

const std::string& IndexSearch::GetFractiondatatypestr() const
{
  return m_Fractiondatatypestr;
}

void IndexSearch::SetFractiondatatypestr(const std::string& value)
{
  m_Fractiondatatypestr = value;
}

const std::string& IndexSearch::GetLockscale() const
{
  return m_Lockscale;
}

void IndexSearch::SetLockscale(const std::string& value)
{
  m_Lockscale = value;
}

const std::string& IndexSearch::GetRndmeth() const
{
  return m_Rndmeth;
}

void IndexSearch::SetRndmeth(const std::string& value)
{
  m_Rndmeth = value;
}

const std::string& IndexSearch::GetSampletime() const
{
  return m_Sampletime;
}

void IndexSearch::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

const std::string& IndexSearch::GetOutputbusdatatypestr() const
{
  return m_Outputbusdatatypestr;
}

void IndexSearch::SetOutputbusdatatypestr(const std::string& value)
{
  m_Outputbusdatatypestr = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
