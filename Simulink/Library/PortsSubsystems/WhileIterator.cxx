#include "WhileIterator.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

WhileIterator::WhileIterator() {}

WhileIterator::~WhileIterator() {}

const std::string& WhileIterator::GetMaxiters() const
{
    return m_Maxiters;
}

void WhileIterator::SetMaxiters(const std::string& value)
{
    m_Maxiters = value;
}

const std::string& WhileIterator::GetWhileblocktype() const
{
    return m_Whileblocktype;
}

void WhileIterator::SetWhileblocktype(const std::string& value)
{
    m_Whileblocktype = value;
}

const std::string& WhileIterator::GetResetstates() const
{
    return m_Resetstates;
}

void WhileIterator::SetResetstates(const std::string& value)
{
    m_Resetstates = value;
}

const std::string& WhileIterator::GetShowiterationport() const
{
    return m_Showiterationport;
}

void WhileIterator::SetShowiterationport(const std::string& value)
{
    m_Showiterationport = value;
}

const std::string& WhileIterator::GetOutputdatatype() const
{
    return m_Outputdatatype;
}

void WhileIterator::SetOutputdatatype(const std::string& value)
{
    m_Outputdatatype = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
