#include "IParameterizedObject.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

void IParameterizedObject::AddParameter(
  const std::shared_ptr<IParameterObjectBase>& p)
{
  m_parameters[p->GetName()] = p;
}

std::shared_ptr<IParameterObjectBase> IParameterizedObject::GetParameter(
  const std::string& name)
{
  auto it = m_parameters.find(name);
  if (it != m_parameters.end()) {
    return it->second;
  }
  return nullptr;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
