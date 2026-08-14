#include "ModelInfo.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

ModelInfo::ModelInfo() {}

ModelInfo::~ModelInfo() {}

const std::string& ModelInfo::GetFrame() const { return m_Frame; }

void ModelInfo::SetFrame(const std::string& value) { m_Frame = value; }

const std::string& ModelInfo::GetDisplaystringwithtags() const
{
    return m_Displaystringwithtags;
}

void ModelInfo::SetDisplaystringwithtags(const std::string& value)
{
    m_Displaystringwithtags = value;
}

const std::string& ModelInfo::GetMaskdisplaystring() const
{
    return m_Maskdisplaystring;
}

void ModelInfo::SetMaskdisplaystring(const std::string& value)
{
    m_Maskdisplaystring = value;
}

const std::string& ModelInfo::GetHorizontaltextalignment() const
{
    return m_Horizontaltextalignment;
}

void ModelInfo::SetHorizontaltextalignment(const std::string& value)
{
    m_Horizontaltextalignment = value;
}

const std::string& ModelInfo::GetLeftalignmentvalue() const
{
    return m_Leftalignmentvalue;
}

void ModelInfo::SetLeftalignmentvalue(const std::string& value)
{
    m_Leftalignmentvalue = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
