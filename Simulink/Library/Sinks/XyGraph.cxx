#include "XyGraph.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

XyGraph::XyGraph() {}

XyGraph::~XyGraph() {}

const std::string& XyGraph::GetNumports() const
{
    return m_Numports;
}

void XyGraph::SetNumports(const std::string& value)
{
    m_Numports = value;
}

const std::string& XyGraph::GetFramesettings() const
{
    return m_Framesettings;
}

void XyGraph::SetFramesettings(const std::string& value)
{
    m_Framesettings = value;
}

const std::string& XyGraph::GetLayout() const
{
    return m_Layout;
}

void XyGraph::SetLayout(const std::string& value)
{
    m_Layout = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
