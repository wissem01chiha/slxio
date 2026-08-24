// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKMODEL_H
#define SIMULINKMODEL_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IConfigurableObject.h"
#include "IErrorHandler.h"
#include "ILogger.h"
#include "ISimulinkElement.h"
#include "PlatformTypes.h"
#include "SimulinkModelType.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class ISimulinkBlock;
class ModelWorkspace;
class SimulinkObject;
class SimulinkArray;
class SImulinkPort;
class SimulinkLine;
class SimulinkBlock;
class SimulinkParameter;
class SimulationSettings;

/**
 * @class SimulinkModel
 * @brief This is the main class definition for a SimulinkModel based
 */
class SLXIO_APIEXPORT SimulinkModel final : public ISimulinkElement,
                                            public IConfigurableObject
{
public:
    /** Default Constructor */
    SimulinkModel();

    SimulinkModel* New() const override;

    /** Construct a Model by given an explict model type */
    explicit SimulinkModel(SimulinkModelType Type);

    HError AcceptInsert(ISimulinkElement& parent) override;
    HError Insert(const std::shared_ptr<ISimulinkElement>& element) override;

    SId GetId() const override;
    SimulinkModelType GetModelType() const;
    std::shared_ptr<SimulationSettings> GetSimulationSettings() const;
    std::shared_ptr<ModelWorkspace> GetModelWorkspace() const;
    /** Return a Pointer to given Simulink Block by Id*/
    std::shared_ptr<ISimulinkBlock> GetBlock(SId blockIdx) const;

    /** Returns a string representation of this element. */
    std::string ToString() const override;

    HError AddConfig(const std::string& name,
                     const std::shared_ptr<IConfigurationObject>& p) override;
    HError SetConfig(const std::string& name,
                     const std::shared_ptr<IConfigurationObject>& p) override;
    std::shared_ptr<IConfigurationObject>
    GetConfig(const std::string& name) override;

    void AddParam(const std::string& name,
                  const std::shared_ptr<IParameterObjectBase>& p) override;
    void SetParam(const std::string& name,
                  const std::shared_ptr<IParameterObjectBase>& p) override;
    std::shared_ptr<IParameterObjectBase>
    GetParam(const std::string& name) override;

private:
    SId m_id{SId(0)};
    SimulinkModelType m_type;
    std::shared_ptr<ModelWorkspace> m_workspace;
    std::shared_ptr<SimulationSettings> m_simSet;
    std::vector<std::shared_ptr<ISimulinkBlock>> m_blocks;
    std::vector<std::shared_ptr<SimulinkLine>> m_lines;
    std::vector<std::shared_ptr<SimulinkParameter>> m_parameters;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULINKMODEL_H
