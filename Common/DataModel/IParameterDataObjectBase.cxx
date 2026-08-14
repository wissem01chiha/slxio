#include "IParameterDataObjectBase.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

IParameterDataObjectBase* IParameterDataObjectBase::New()
{
    return new IParameterDataObjectBase();
}

void IParameterDataObjectBase::Initialize(void* implDataObject)
{
    m_param = std::shared_ptr<IParameterObjectBase>(
        static_cast<IParameterObjectBase*>(implDataObject));
    m_updateTime = 0;
}

void* IParameterDataObjectBase::GetImplDataObject() const
{
    return m_param.get();
}

std::string IParameterDataObjectBase::ToString() const
{
    return "IParameterDataObjectBase(" +
           (m_param ? m_param->GetName() : "null") + ")";
}

bool IParameterDataObjectBase::Empty() const
{
    return (m_param == nullptr || m_param->Size() == 0);
}

bool IParameterDataObjectBase::operator==(const IDataObject& other) const
{
    const auto* rhs = dynamic_cast<const IParameterDataObjectBase*>(&other);
    if (!rhs)
        return false;
    return m_param->GetName() == rhs->m_param->GetName() &&
           m_param->GetDataType() == rhs->m_param->GetDataType();
}

DataType IParameterDataObjectBase::GetDataType() const
{
    return m_param ? m_param->GetDataType()
                   : DataType::SLXIO_TYPE_GENERIC_PARAMETER_DATA_OBJECT;
}

IParameterDataObjectBase::~IParameterDataObjectBase() = default;

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
