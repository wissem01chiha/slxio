#include "Derivative.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Derivative::Derivative(const std::string& coefficientintfapproximation)
    : m_coefficientintfapproximation(coefficientintfapproximation)
{
}

std::shared_ptr<ISignalAttributes> Derivative::GetSignalAttributes() const
{
    return nullptr;
}

std::shared_ptr<ILogging> Derivative::GetLogging() const { return nullptr; }

std::shared_ptr<IBlockParametersInformation>
Derivative::GetBlockParametersInformation() const
{
    return nullptr;
}

std::shared_ptr<ICodeGenration> Derivative::GetCodeGeneration() const
{
    return nullptr;
}

std::shared_ptr<IBlockParametersInformation> Derivative::GetInformation() const
{
    return nullptr;
}

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
