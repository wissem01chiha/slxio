// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKCONFIGSET_H
#define SIMULINKCONFIGSET_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "ConfigurationPCH.h"
#include "IConfigurationObject.h"
#include "ILogger.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class SimulinkConfigSet
 * @brief SimulinkConfigSet represents a configuration set in a Simulink model
 */
class SLXIO_APIEXPORT SimulinkConfigSet final : public IConfigurationObject
{
public:
    SimulinkConfigSet();

    bool IsActive() const override;
    HError Activate() override;
    HError Deactivate() override;
    std::string ToString() const override;

    void AddParam(const std::string& name,
                  const std::shared_ptr<IParameterObjectBase>& p) override;
    void SetParam(const std::string& name,
                  const std::shared_ptr<IParameterObjectBase>& p) override;
    std::shared_ptr<IParameterObjectBase>
    GetParam(const std::string& name) override;

    std::string GetName() const override;

    ~SimulinkConfigSet() = default;

private:
    std::string m_name;
    bool m_status = false;
    std::unordered_map<std::string, std::shared_ptr<IParameterObjectBase>>
        m_parameters;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULINKCONFIGSET_H
