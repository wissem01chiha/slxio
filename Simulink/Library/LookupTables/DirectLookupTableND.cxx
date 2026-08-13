#include "DirectLookupTableND.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DirectLookupTableND::DirectLookupTableND() {}

DirectLookupTableND::~DirectLookupTableND() {}

const std::string& DirectLookupTableND::GetNumberoftabledimensions() const
{
    return m_Numberoftabledimensions;
}

void DirectLookupTableND::SetNumberoftabledimensions(const std::string& value)
{
    m_Numberoftabledimensions = value;
}

const std::string& DirectLookupTableND::GetInputsselectthisobjectfromtable() const
{
    return m_Inputsselectthisobjectfromtable;
}

void DirectLookupTableND::SetInputsselectthisobjectfromtable(const std::string& value)
{
    m_Inputsselectthisobjectfromtable = value;
}

const std::string& DirectLookupTableND::GetTableisinput() const
{
    return m_Tableisinput;
}

void DirectLookupTableND::SetTableisinput(const std::string& value)
{
    m_Tableisinput = value;
}

const std::string& DirectLookupTableND::GetTable() const
{
    return m_Table;
}

void DirectLookupTableND::SetTable(const std::string& value)
{
    m_Table = value;
}

const std::string& DirectLookupTableND::GetDiagnosticforoutofrangeinput() const
{
    return m_Diagnosticforoutofrangeinput;
}

void DirectLookupTableND::SetDiagnosticforoutofrangeinput(const std::string& value)
{
    m_Diagnosticforoutofrangeinput = value;
}

const std::string& DirectLookupTableND::GetRemoveprotectioninput() const
{
    return m_Removeprotectioninput;
}

void DirectLookupTableND::SetRemoveprotectioninput(const std::string& value)
{
    m_Removeprotectioninput = value;
}

const std::string& DirectLookupTableND::GetSampletime() const
{
    return m_Sampletime;
}

void DirectLookupTableND::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& DirectLookupTableND::GetTablemin() const
{
    return m_Tablemin;
}

void DirectLookupTableND::SetTablemin(const std::string& value)
{
    m_Tablemin = value;
}

const std::string& DirectLookupTableND::GetTablemax() const
{
    return m_Tablemax;
}

void DirectLookupTableND::SetTablemax(const std::string& value)
{
    m_Tablemax = value;
}

const std::string& DirectLookupTableND::GetTabledatatypestr() const
{
    return m_Tabledatatypestr;
}

void DirectLookupTableND::SetTabledatatypestr(const std::string& value)
{
    m_Tabledatatypestr = value;
}

const std::string& DirectLookupTableND::GetLockscale() const
{
    return m_Lockscale;
}

void DirectLookupTableND::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
