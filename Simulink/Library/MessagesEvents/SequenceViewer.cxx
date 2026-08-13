#include "SequenceViewer.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

SequenceViewer::SequenceViewer() {}

SequenceViewer::~SequenceViewer() {}

const std::string& SequenceViewer::GetVariablesteptimeprecision() const
{
    return m_Variablesteptimeprecision;
}

void SequenceViewer::SetVariablesteptimeprecision(const std::string& value)
{
    m_Variablesteptimeprecision = value;
}

const std::string& SequenceViewer::GetHistory() const
{
    return m_History;
}

void SequenceViewer::SetHistory(const std::string& value)
{
    m_History = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
