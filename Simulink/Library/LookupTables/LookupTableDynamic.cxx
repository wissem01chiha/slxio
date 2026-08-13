#include "LookupTableDynamic.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

LookupTableDynamic::LookupTableDynamic() {}

LookupTableDynamic::~LookupTableDynamic() {}

const std::string& LookupTableDynamic::GetLookupmeth() const
{
    return m_Lookupmeth;
}

void LookupTableDynamic::SetLookupmeth(const std::string& value)
{
    m_Lookupmeth = value;
}

const std::string& LookupTableDynamic::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void LookupTableDynamic::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& LookupTableDynamic::GetLockscale() const
{
    return m_Lockscale;
}

void LookupTableDynamic::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& LookupTableDynamic::GetRndmeth() const
{
    return m_Rndmeth;
}

void LookupTableDynamic::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& LookupTableDynamic::GetDosatur() const
{
    return m_Dosatur;
}

void LookupTableDynamic::SetDosatur(const std::string& value)
{
    m_Dosatur = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
