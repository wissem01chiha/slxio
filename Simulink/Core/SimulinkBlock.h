// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKBLOCK_H
#define SIMULINKBLOCK_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "ISimulinkElement.h"
#include "PlatformTypes.h"
#include "SimulinkBlockType.h"
#include "SimulinkPCH.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

enum class SimulinkPortType;

/**
 * @class SimulinkBlock
 * @brief a general reprsentation of an elementary simulink block, all block
 * library inhertit from this interface as well as all SimulinkSubsystem based
 * ones derived from ISimulinkSubsystem
 */
class SLXIO_APIEXPORT SimulinkBlock : public ISimulinkElement
{
public:
    /** Default constructor.*/
    SimulinkBlock();
    ~SimulinkBlock() override;

    ISimulinkElement* New() const override;
    // blocks can be inserted into other subsystems of type ISimulinkSubsystem
    HError AcceptInsert(ISimulinkElement& parent) override;
    HError Insert(const std::shared_ptr<ISimulinkElement>& element) override;
    SId GetId() const override;

    void AddParam(const std::string& name,
                  const std::shared_ptr<IParameterObjectBase>& p) override;
    void SetParam(const std::string& name,
                  const std::shared_ptr<IParameterObjectBase>& p) override;
    std::shared_ptr<IParameterObjectBase>
    GetParam(const std::string& name) override;

    std::string GetName() const;
    void SetName(const std::string& name);
    std::string GetDimension() const;

    std::string ToString() const override;

    /** Retrieve the block type of the Simulink block.*/
    SimulinkBlockType GetBlockType();

private:
    SId m_id;
    std::string m_name;
    SimulinkBlockType m_type;
    std::map<SId, SimulinkPortType> m_ports;
    std::vector<std::shared_ptr<IParameterObjectBase>> m_parameters;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULINKBLOCK_H
