#include "If.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

If::If() {}

If::~If() {}

const std::string& If::GetNuminputs() const
{
    return m_Numinputs;
}

void If::SetNuminputs(const std::string& value)
{
    m_Numinputs = value;
}

const std::string& If::GetIfexpression() const
{
    return m_Ifexpression;
}

void If::SetIfexpression(const std::string& value)
{
    m_Ifexpression = value;
}

const std::string& If::GetElseifexpressions() const
{
    return m_Elseifexpressions;
}

void If::SetElseifexpressions(const std::string& value)
{
    m_Elseifexpressions = value;
}

const std::string& If::GetShowelse() const
{
    return m_Showelse;
}

void If::SetShowelse(const std::string& value)
{
    m_Showelse = value;
}

const std::string& If::GetZerocross() const
{
    return m_Zerocross;
}

void If::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& If::GetSampletime() const
{
    return m_Sampletime;
}

void If::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
