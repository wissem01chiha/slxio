// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKARRAY_H
#define SIMULINKARRAY_H

#include "ABINamespaceMacro.h"
#include "IErrorHandler.h"
#include "ILogger.h"
#include "IObservable.h"
#include "IParameterObjectBase.h"
#include "ISimulinkElement.h"
#include "PlatformTypes.h"
#include "SimulinkPCH.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SimulinkParameter;

/**
 * @class SimulinkArray
 * @brief Base class for Simulink Array.
 * A Simulink Array can contain nested arrays as well as objects derived
 * from the SimulinkObject class. for object references, it maintains
 * a list of object Ids to avoid mutable inclusion, forward
 * declarations, and compiler conflicts.
 */
class SLXIO_APIEXPORT SimulinkArray final : public ISimulinkElement
{
public:
    SimulinkArray();
    ~SimulinkArray() override;

    ISimulinkElement* New() const override;
    // Arrays can only be inserted into other arrays, or objects
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

private:
    SId m_id{SId(0)};
    IErrorHandler* handler = nullptr;
    std::string m_type;
    std::string m_name;
    std::string m_dimension;
    std::vector<SId> m_objects;
    std::vector<std::shared_ptr<IParameterObjectBase>> m_parameters;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULINKARRAY_H
