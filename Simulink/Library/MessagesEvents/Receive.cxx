#include "Receive.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Receive::Receive() {}

Receive::~Receive() {}

const std::string& Receive::GetUseinternalqueue() const
{
    return m_Useinternalqueue;
}

void Receive::SetUseinternalqueue(const std::string& value)
{
    m_Useinternalqueue = value;
}

const std::string& Receive::GetQueueoverwriting() const
{
    return m_Queueoverwriting;
}

void Receive::SetQueueoverwriting(const std::string& value)
{
    m_Queueoverwriting = value;
}

const std::string& Receive::GetQueuelength() const { return m_Queuelength; }

void Receive::SetQueuelength(const std::string& value)
{
    m_Queuelength = value;
}

const std::string& Receive::GetQueuetype() const { return m_Queuetype; }

void Receive::SetQueuetype(const std::string& value) { m_Queuetype = value; }

const std::string& Receive::GetPriorityorder() const { return m_Priorityorder; }

void Receive::SetPriorityorder(const std::string& value)
{
    m_Priorityorder = value;
}

const std::string& Receive::GetShowqueuestatus() const
{
    return m_Showqueuestatus;
}

void Receive::SetShowqueuestatus(const std::string& value)
{
    m_Showqueuestatus = value;
}

const std::string& Receive::GetInitialvalue() const { return m_Initialvalue; }

void Receive::SetInitialvalue(const std::string& value)
{
    m_Initialvalue = value;
}

const std::string& Receive::GetValuesourcewhenqueueisempty() const
{
    return m_Valuesourcewhenqueueisempty;
}

void Receive::SetValuesourcewhenqueueisempty(const std::string& value)
{
    m_Valuesourcewhenqueueisempty = value;
}

const std::string& Receive::GetSampletime() const { return m_Sampletime; }

void Receive::SetSampletime(const std::string& value) { m_Sampletime = value; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
