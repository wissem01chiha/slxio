/*
 * Copyright 2026 Wissem Chiha
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef SIMULINKCONFIGSET_H
#define SIMULINKCONFIGSET_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IConfigurationObject.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * A configuration set in a Simulink model
 */
class SLXIO_APIEXPORT SimulinkConfigSet final : public IConfigurationObject
{
public:
    SimulinkConfigSet();

    bool IsActive() const override;
    HError Activate() override;
    HError Deactivate() override;

    std::string ToString() const override;

    void AddParam(const std::string& name, const std::shared_ptr<IParameterObjectBase>& p) override;
    void SetParam(const std::string& name, const std::shared_ptr<IParameterObjectBase>& p) override;
    std::shared_ptr<IParameterObjectBase> GetParam(const std::string& name) override;

    std::string GetName() const override;

    ~SimulinkConfigSet() = default;

private:
    std::string m_name;
    bool m_status = false;
    std::unordered_map<std::string, std::shared_ptr<IParameterObjectBase>> m_parameters;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULINKCONFIGSET_H
