#include "SimulinkConfigSet.h"
#include "ConfigurationECH.h"
#include "SimulinkHardware.h"
#include "SimulinkModelReference.h"
#include "SimulinkOptimization.h"
#include "SimulinkRTW.h"
#include "SimulinkSFSim.h"
#include "SimulinkSolver.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkConfigSet::SimulinkConfigSet() : m_name(""), m_status(false) {}

std::string SimulinkConfigSet::ToString() const { return {}; }

void SimulinkConfigSet::AddParam(const std::string& name,
                                 const std::shared_ptr<IParameterObjectBase>& p)
{
    if (p == nullptr)
    {
        return;
    }
}

void SimulinkConfigSet::SetParam(const std::string& name,
                                 const std::shared_ptr<IParameterObjectBase>& p)
{
    if (p == nullptr)
    {
        return;
    }
}

std::shared_ptr<IParameterObjectBase>
SimulinkConfigSet::GetParam(const std::string& name)
{

    return nullptr;
}

std::string SimulinkConfigSet::GetName() const { return m_name; }

HError SimulinkConfigSet::Deactivate()
{
    if (!m_status)
    {
        // logger.log(Logger::V_INFO, "Deactivating Simulink configuration set
        // ",
        //  object->getName());
    }
    m_status = false;
    return E_OK;
}

bool SimulinkConfigSet::IsActive() const { return m_status; }

HError SimulinkConfigSet::Activate()
{
    if (m_status)
    {
        return E_CONFIG_ALREADY_ACTIVE;
    }
    m_status = true;
    return E_OK;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
