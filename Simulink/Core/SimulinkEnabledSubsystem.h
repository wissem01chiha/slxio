// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKENABLEDSUBSYSTEM_H
#define SIMULINKENABLEDSUBSYSTEM_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"
#include "SimulinkElementBase.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class SimulinkEnabledSubsystem
 * @brief Represents a Simulink Enabled Subsystem element in a Simulink model.
 */
class SLXIO_APIEXPORT SimulinkEnabledSubsystem : public SimulinkElementBase
{
public:
  SimulinkEnabledSubsystem() = default;

  SimulinkEnabledSubsystem* New() const override;
  SimulinkElementType GetElementType() const override;
  std::string ToString() const override;
  ReturnType Erase(const IdType& id) override;
  ReturnType Erase(
    const std::shared_ptr<SimulinkElementBase>& element) override;
  std::shared_ptr<SimulinkElementBase> Find(const IdType& id) override;
  std::shared_ptr<SimulinkElementBase> at(IdType index) override;
  std::shared_ptr<const SimulinkElementBase> at(IdType index) const override;
  bool Contains(const IdType& id) const override;
  UInt32 Size() const override;
  bool Empty() const override;
  void Clear() override;
  ReturnType Insert(
    const std::shared_ptr<SimulinkElementBase>& element) override;

private:
};

SLXIO_ABI_NAMESPACE_END
};

#endif // SIMULINKENABLEDSUBSYSTEM_H