#include "ForIterator.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

ForIterator::ForIterator() {}

ForIterator::~ForIterator() {}

const std::string& ForIterator::GetResetstates() const
{
    return m_Resetstates;
}

void ForIterator::SetResetstates(const std::string& value)
{
    m_Resetstates = value;
}

const std::string& ForIterator::GetIterationsource() const
{
    return m_Iterationsource;
}

void ForIterator::SetIterationsource(const std::string& value)
{
    m_Iterationsource = value;
}

const std::string& ForIterator::GetIterationlimit() const
{
    return m_Iterationlimit;
}

void ForIterator::SetIterationlimit(const std::string& value)
{
    m_Iterationlimit = value;
}

const std::string& ForIterator::GetExternalincrement() const
{
    return m_Externalincrement;
}

void ForIterator::SetExternalincrement(const std::string& value)
{
    m_Externalincrement = value;
}

const std::string& ForIterator::GetShowiterationport() const
{
    return m_Showiterationport;
}

void ForIterator::SetShowiterationport(const std::string& value)
{
    m_Showiterationport = value;
}

const std::string& ForIterator::GetIndexmode() const
{
    return m_Indexmode;
}

void ForIterator::SetIndexmode(const std::string& value)
{
    m_Indexmode = value;
}

const std::string& ForIterator::GetIterationvariabledatatype() const
{
    return m_Iterationvariabledatatype;
}

void ForIterator::SetIterationvariabledatatype(const std::string& value)
{
    m_Iterationvariabledatatype = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
