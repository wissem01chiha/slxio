#include "RepeatingSequence.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

RepeatingSequence::RepeatingSequence() {}

RepeatingSequence::~RepeatingSequence() {}

const std::string& RepeatingSequence::GetRepSeqT() const
{
    return m_RepSeqT;
}

void RepeatingSequence::SetRepSeqT(const std::string& value)
{
    m_RepSeqT = value;
}

const std::string& RepeatingSequence::GetRepSeqY() const
{
    return m_RepSeqY;
}

void RepeatingSequence::SetRepSeqY(const std::string& value)
{
    m_RepSeqY = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
