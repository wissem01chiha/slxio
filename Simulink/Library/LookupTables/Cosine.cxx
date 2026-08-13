#include "Cosine.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Cosine::Cosine() {}

Cosine::~Cosine() {}

const std::string& Cosine::GetFormula() const
{
    return m_Formula;
}

void Cosine::SetFormula(const std::string& value)
{
    m_Formula = value;
}

const std::string& Cosine::GetNumdatapoints() const
{
    return m_Numdatapoints;
}

void Cosine::SetNumdatapoints(const std::string& value)
{
    m_Numdatapoints = value;
}

const std::string& Cosine::GetOutputwordlength() const
{
    return m_Outputwordlength;
}

void Cosine::SetOutputwordlength(const std::string& value)
{
    m_Outputwordlength = value;
}

const std::string& Cosine::GetInternalrulepriority() const
{
    return m_Internalrulepriority;
}

void Cosine::SetInternalrulepriority(const std::string& value)
{
    m_Internalrulepriority = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
