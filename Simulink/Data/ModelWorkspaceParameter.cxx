#include "ModelWorkspaceParameter.h"
#include "ModelWorkspace.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

ModelWorkspaceParameter::ModelWorkspaceParameter() = default;

ModelWorkspaceParameter::ModelWorkspaceParameter(
    const std::string& name, const std::shared_ptr<ModelWorkspace>& data)
    : m_data(data)
{
    SetName(name);
}

IParameterObjectBase* ModelWorkspaceParameter::New()
{
    return new ModelWorkspaceParameter();
}

DataType ModelWorkspaceParameter::GetDataType() const
{
    return DataType::SLXIO_TYPE_MODELWORKSPACE_PARAMETER;
}

UInt16 ModelWorkspaceParameter::Size() const
{
    if (m_data)
    {
        return m_data->GetVariableCount();
    }

    return (UInt16)0;
}

void ModelWorkspaceParameter::SetData(
    const std::shared_ptr<ModelWorkspace>& data)
{
    m_data = data;
}

std::shared_ptr<ModelWorkspace> ModelWorkspaceParameter::GetData() const
{
    return m_data;
}

SLXIO_ABI_NAMESPACE_END
} // namespace slxio