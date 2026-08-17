#include "Queue.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Queue::Queue() {}

Queue::~Queue() {}

const std::string& Queue::GetOverwriteoldest() const
{
    return m_Overwriteoldest;
}

void Queue::SetOverwriteoldest(const std::string& value)
{
    m_Overwriteoldest = value;
}

const std::string& Queue::GetCapacity() const { return m_Capacity; }

void Queue::SetCapacity(const std::string& value) { m_Capacity = value; }

const std::string& Queue::GetQueuetype() const { return m_Queuetype; }

void Queue::SetQueuetype(const std::string& value) { m_Queuetype = value; }

const std::string& Queue::GetPrioritysource() const { return m_Prioritysource; }

void Queue::SetPrioritysource(const std::string& value)
{
    m_Prioritysource = value;
}

const std::string& Queue::GetSortingdirection() const
{
    return m_Sortingdirection;
}

void Queue::SetSortingdirection(const std::string& value)
{
    m_Sortingdirection = value;
}

const std::string& Queue::GetEntityarrivalsource() const
{
    return m_Entityarrivalsource;
}

void Queue::SetEntityarrivalsource(const std::string& value)
{
    m_Entityarrivalsource = value;
}

const std::string& Queue::GetMulticasttag() const { return m_Multicasttag; }

void Queue::SetMulticasttag(const std::string& value)
{
    m_Multicasttag = value;
}

const std::string& Queue::GetEntryaction() const { return m_Entryaction; }

void Queue::SetEntryaction(const std::string& value) { m_Entryaction = value; }

const std::string& Queue::GetExitaction() const { return m_Exitaction; }

void Queue::SetExitaction(const std::string& value) { m_Exitaction = value; }

const std::string& Queue::GetBlockedaction() const { return m_Blockedaction; }

void Queue::SetBlockedaction(const std::string& value)
{
    m_Blockedaction = value;
}

const std::string& Queue::GetNumberentitiesdeparted() const
{
    return m_Numberentitiesdeparted;
}

void Queue::SetNumberentitiesdeparted(const std::string& value)
{
    m_Numberentitiesdeparted = value;
}

const std::string& Queue::GetNumentitiesextracted() const
{
    return m_Numentitiesextracted;
}

void Queue::SetNumentitiesextracted(const std::string& value)
{
    m_Numentitiesextracted = value;
}

const std::string& Queue::GetNumberentitiesinblock() const
{
    return m_Numberentitiesinblock;
}

void Queue::SetNumberentitiesinblock(const std::string& value)
{
    m_Numberentitiesinblock = value;
}

const std::string& Queue::GetAveragewait() const { return m_Averagewait; }

void Queue::SetAveragewait(const std::string& value) { m_Averagewait = value; }

const std::string& Queue::GetAveragequeuelength() const
{
    return m_Averagequeuelength;
}

void Queue::SetAveragequeuelength(const std::string& value)
{
    m_Averagequeuelength = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
