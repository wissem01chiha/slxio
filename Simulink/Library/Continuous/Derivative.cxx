#include "Derivative.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Derivative::Derivative(Float64 coefficientintfapproximation) {}

SimulinkBlockType Derivative::GetBlockType() const
{
    return SimulinkBlockType::Derivative;
}

SimulinkBlockCategory Derivative::GetBlockCategory() const
{
    return SimulinkBlockCategory(
        SimulinkBlockCategory::DefaultCategory::Continuous);
}

void Derivative::AddParam(const std::string& name,
                          const std::shared_ptr<IParameterObjectBase>& p)
{
    if (p == nullptr)
    {
        return;
    }
}

void Derivative::SetParam(const std::string& name,
                          const std::shared_ptr<IParameterObjectBase>& p)
{
    if (p == nullptr)
    {
        return;
    }
}

std::shared_ptr<IParameterObjectBase>
Derivative::GetParam(const std::string& name)
{
    return nullptr;
}

std::string Derivative::ToString() const { return std::string(); }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
