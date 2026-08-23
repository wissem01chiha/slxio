#include "SimulinkModel.h"
#include "ISimulinkBlock.h"
#include "SimulationSettings.h"
#include "SimulinkArray.h"
#include "SimulinkObject.h"
#include "SimulinkParameter.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkModel::SimulinkModel()
    : m_type(SimulinkModelType::Model), m_workspace(nullptr), m_simSet(nullptr)
{
}

SimulinkModel* SimulinkModel::New() const
{
    return new SimulinkModel(); // NOSONAR
}

SimulinkModel::SimulinkModel(SimulinkModelType Type) : m_type(Type) {}

SId SimulinkModel::GetId() const { return m_id; }

std::string SimulinkModel::ToString() const { return std::string(); }

HError SimulinkModel::AddConfig(const std::string& name,
                                const std::shared_ptr<IConfigurationObject>& p)
{
    return E_OK;
}

HError SimulinkModel::SetConfig(const std::string& name,
                                const std::shared_ptr<IConfigurationObject>& p)
{
    return E_OK;
}

std::shared_ptr<IConfigurationObject>
SimulinkModel::GetConfig(const std::string& name)
{
    return nullptr;
}

void SimulinkModel::AddParam(const std::string& name,
                             const std::shared_ptr<IParameterObjectBase>& p)
{
    if (p == nullptr)
    {
        return;
    }
}

void SimulinkModel::SetParam(const std::string& name,
                             const std::shared_ptr<IParameterObjectBase>& p)
{
    if (p == nullptr)
    {
        return;
    }
}

std::shared_ptr<IParameterObjectBase>
SimulinkModel::GetParam(const std::string& name)
{
    return nullptr;
}

std::shared_ptr<ISimulinkBlock> SimulinkModel::GetBlock(SId blockIdx) const
{

    for (const auto& blk : m_blocks)
    {
        if (blk->GetId() == blockIdx)
        {
            return blk;
        }
    }
    return nullptr;
}

SimulinkModelType SimulinkModel::GetModelType() const { return m_type; }

std::shared_ptr<SimulationSettings> SimulinkModel::GetSimulationSettings() const
{
    return m_simSet;
}

std::shared_ptr<ModelWorkspace> SimulinkModel::GetModelWorkspace() const
{
    return m_workspace;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
