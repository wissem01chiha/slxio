// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKOBJECT_H
#define SIMULINKOBJECT_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IParameterObjectBase.h"
#include "ISimulinkElement.h"
#include "PlatformTypes.h"
#include "SimulinkPCH.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Class for Simulink objects, which are a construct for
 * structured storage of meta-data in the model.
 */
class SLXIO_APIEXPORT SimulinkObject final : public ISimulinkElement
{
public:
    SimulinkObject() = default;
    ~SimulinkObject() override;

    ISimulinkElement* New() const override;
    // objects can only be inserted into other objects, so the parent must be an
    // object
    HError AcceptInsert(ISimulinkElement& parent) override;
    HError Insert(const std::shared_ptr<ISimulinkElement>& element) override;
    SId GetId() const override;
    void SetId(const SId& id) override;

    void AddParam(const std::string& name,
                  const std::shared_ptr<IParameterObjectBase>& p) override;
    void SetParam(const std::string& name,
                  const std::shared_ptr<IParameterObjectBase>& p) override;
    std::shared_ptr<IParameterObjectBase>
    GetParam(const std::string& name) override;

    std::string GetName() const;
    void SetName(const std::string& name);
    std::string GetClassName() const;
    std::string GetVersion() const;

    std::string ToString() const override;

    /** Return an array with the current object if not found return nullptr ! */
    std::shared_ptr<ISimulinkElement> GetArray(const SId& id) const;

private:
    SId m_id;
    std::string m_version;
    std::string m_propName;
    std::string m_className;
    std::vector<std::shared_ptr<ISimulinkElement>> m_arrays;
    std::vector<std::shared_ptr<IParameterObjectBase>> m_parameters;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULINKOBJECT_H
