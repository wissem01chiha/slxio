#include "Sine.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Sine::Sine() {}

Sine::~Sine() {}

const std::string& Sine::GetFormula() const { return m_Formula; }

void Sine::SetFormula(const std::string& value) { m_Formula = value; }

const std::string& Sine::GetNumdatapoints() const { return m_Numdatapoints; }

void Sine::SetNumdatapoints(const std::string& value)
{
    m_Numdatapoints = value;
}

const std::string& Sine::GetOutputwordlength() const
{
    return m_Outputwordlength;
}

void Sine::SetOutputwordlength(const std::string& value)
{
    m_Outputwordlength = value;
}

const std::string& Sine::GetInternalrulepriority() const
{
    return m_Internalrulepriority;
}

void Sine::SetInternalrulepriority(const std::string& value)
{
    m_Internalrulepriority = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
