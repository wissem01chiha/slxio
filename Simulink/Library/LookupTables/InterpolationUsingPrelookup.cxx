#include "InterpolationUsingPrelookup.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

InterpolationUsingPrelookup::InterpolationUsingPrelookup() {}

InterpolationUsingPrelookup::~InterpolationUsingPrelookup() {}

const std::string& InterpolationUsingPrelookup::GetNumberoftabledimensions() const
{
    return m_Numberoftabledimensions;
}

void InterpolationUsingPrelookup::SetNumberoftabledimensions(const std::string& value)
{
    m_Numberoftabledimensions = value;
}

const std::string& InterpolationUsingPrelookup::GetTablesource() const
{
    return m_Tablesource;
}

void InterpolationUsingPrelookup::SetTablesource(const std::string& value)
{
    m_Tablesource = value;
}

const std::string& InterpolationUsingPrelookup::GetTable() const
{
    return m_Table;
}

void InterpolationUsingPrelookup::SetTable(const std::string& value)
{
    m_Table = value;
}

const std::string& InterpolationUsingPrelookup::GetTablespecification() const
{
    return m_Tablespecification;
}

void InterpolationUsingPrelookup::SetTablespecification(const std::string& value)
{
    m_Tablespecification = value;
}

const std::string& InterpolationUsingPrelookup::GetLookuptableobject() const
{
    return m_Lookuptableobject;
}

void InterpolationUsingPrelookup::SetLookuptableobject(const std::string& value)
{
    m_Lookuptableobject = value;
}

const std::string& InterpolationUsingPrelookup::GetInterpmethod() const
{
    return m_Interpmethod;
}

void InterpolationUsingPrelookup::SetInterpmethod(const std::string& value)
{
    m_Interpmethod = value;
}

const std::string& InterpolationUsingPrelookup::GetExtrapmethod() const
{
    return m_Extrapmethod;
}

void InterpolationUsingPrelookup::SetExtrapmethod(const std::string& value)
{
    m_Extrapmethod = value;
}

const std::string& InterpolationUsingPrelookup::GetDiagnosticforoutofrangeinput() const
{
    return m_Diagnosticforoutofrangeinput;
}

void InterpolationUsingPrelookup::SetDiagnosticforoutofrangeinput(const std::string& value)
{
    m_Diagnosticforoutofrangeinput = value;
}

const std::string& InterpolationUsingPrelookup::GetRequireindexfractionasbus() const
{
    return m_Requireindexfractionasbus;
}

void InterpolationUsingPrelookup::SetRequireindexfractionasbus(const std::string& value)
{
    m_Requireindexfractionasbus = value;
}

const std::string& InterpolationUsingPrelookup::GetRemoveprotectionindex() const
{
    return m_Removeprotectionindex;
}

void InterpolationUsingPrelookup::SetRemoveprotectionindex(const std::string& value)
{
    m_Removeprotectionindex = value;
}

const std::string& InterpolationUsingPrelookup::GetValidindexmayreachlast() const
{
    return m_Validindexmayreachlast;
}

void InterpolationUsingPrelookup::SetValidindexmayreachlast(const std::string& value)
{
    m_Validindexmayreachlast = value;
}

const std::string& InterpolationUsingPrelookup::GetNumselectiondims() const
{
    return m_Numselectiondims;
}

void InterpolationUsingPrelookup::SetNumselectiondims(const std::string& value)
{
    m_Numselectiondims = value;
}

const std::string& InterpolationUsingPrelookup::GetSampletime() const
{
    return m_Sampletime;
}

void InterpolationUsingPrelookup::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& InterpolationUsingPrelookup::GetOutmin() const
{
    return m_Outmin;
}

void InterpolationUsingPrelookup::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& InterpolationUsingPrelookup::GetOutmax() const
{
    return m_Outmax;
}

void InterpolationUsingPrelookup::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& InterpolationUsingPrelookup::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void InterpolationUsingPrelookup::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& InterpolationUsingPrelookup::GetInternalrulepriority() const
{
    return m_Internalrulepriority;
}

void InterpolationUsingPrelookup::SetInternalrulepriority(const std::string& value)
{
    m_Internalrulepriority = value;
}

const std::string& InterpolationUsingPrelookup::GetLockscale() const
{
    return m_Lockscale;
}

void InterpolationUsingPrelookup::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& InterpolationUsingPrelookup::GetRndmeth() const
{
    return m_Rndmeth;
}

void InterpolationUsingPrelookup::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& InterpolationUsingPrelookup::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void InterpolationUsingPrelookup::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& InterpolationUsingPrelookup::GetTablemin() const
{
    return m_Tablemin;
}

void InterpolationUsingPrelookup::SetTablemin(const std::string& value)
{
    m_Tablemin = value;
}

const std::string& InterpolationUsingPrelookup::GetTablemax() const
{
    return m_Tablemax;
}

void InterpolationUsingPrelookup::SetTablemax(const std::string& value)
{
    m_Tablemax = value;
}

const std::string& InterpolationUsingPrelookup::GetTabledatatypestr() const
{
    return m_Tabledatatypestr;
}

void InterpolationUsingPrelookup::SetTabledatatypestr(const std::string& value)
{
    m_Tabledatatypestr = value;
}

const std::string& InterpolationUsingPrelookup::GetIntermediateresultsdatatypestr() const
{
    return m_Intermediateresultsdatatypestr;
}

void InterpolationUsingPrelookup::SetIntermediateresultsdatatypestr(const std::string& value)
{
    m_Intermediateresultsdatatypestr = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
