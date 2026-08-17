#include "CosineLookup.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

CosineLookup::CosineLookup() {}

CosineLookup::~CosineLookup() {}

const std::string& CosineLookup::GetFormula() const { return m_Formula; }

void CosineLookup::SetFormula(const std::string& value) { m_Formula = value; }

const std::string& CosineLookup::GetNumdatapoints() const
{
    return m_Numdatapoints;
}

void CosineLookup::SetNumdatapoints(const std::string& value)
{
    m_Numdatapoints = value;
}

const std::string& CosineLookup::GetOutputwordlength() const
{
    return m_Outputwordlength;
}

void CosineLookup::SetOutputwordlength(const std::string& value)
{
    m_Outputwordlength = value;
}

const std::string& CosineLookup::GetInternalrulepriority() const
{
    return m_Internalrulepriority;
}

void CosineLookup::SetInternalrulepriority(const std::string& value)
{
    m_Internalrulepriority = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
