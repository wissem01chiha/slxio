#include "ExponentialLookup.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

ExponentialLookup::ExponentialLookup() {}

ExponentialLookup::~ExponentialLookup() {}

const std::string& ExponentialLookup::GetFormula() const
{
    return m_Formula;
}

void ExponentialLookup::SetFormula(const std::string& value)
{
    m_Formula = value;
}

const std::string& ExponentialLookup::GetNumdatapoints() const
{
    return m_Numdatapoints;
}

void ExponentialLookup::SetNumdatapoints(const std::string& value)
{
    m_Numdatapoints = value;
}

const std::string& ExponentialLookup::GetOutputwordlength() const
{
    return m_Outputwordlength;
}

void ExponentialLookup::SetOutputwordlength(const std::string& value)
{
    m_Outputwordlength = value;
}

const std::string& ExponentialLookup::GetInternalrulepriority() const
{
    return m_Internalrulepriority;
}

void ExponentialLookup::SetInternalrulepriority(const std::string& value)
{
    m_Internalrulepriority = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
