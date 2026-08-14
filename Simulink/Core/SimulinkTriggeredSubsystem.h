// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKTRIGGEREDSUBSYSTEM_H
#define SIMULINKTRIGGEREDSUBSYSTEM_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "SimulinkElementBase.h"
#include "SimulinkSubsystem.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class SimulinkTriggeredSubsystem
 * @brief Represents a Simulink Triggered Subsystem element in a Simulink model.
 */
class SLXIO_APIEXPORT SimulinkTriggeredSubsystem : public SimulinkElementBase,
                                                   SimulinkSubsystem
{
public:
    SimulinkTriggeredSubsystem() = default;

    SimulinkTriggeredSubsystem* New() const override;
    SimulinkElementType GetType() const override;
    std::string ToString() const override;
    HError Erase(const SId& id) override;
    HError Erase(const std::shared_ptr<SimulinkElementBase>& element) override;
    std::shared_ptr<SimulinkElementBase> Find(const SId& id) override;
    std::shared_ptr<SimulinkElementBase> at(SId index) override;
    std::shared_ptr<const SimulinkElementBase> at(SId index) const override;
    bool Contains(const SId& id) const override;
    UInt32 Size() const override;
    bool Empty() const override;
    void Clear() override;
    HError Insert(const std::shared_ptr<SimulinkElementBase>& element) override;

private:
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULINKTRIGGEREDSUBSYSTEM_H