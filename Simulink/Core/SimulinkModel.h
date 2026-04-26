// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKMODEL_H
#define SIMULINKMODEL_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "Logger.h"
#include "ModelWorkspace.h"
#include "SimulationSettings.h"
#include "SimulinkArray.h"
#include "SimulinkBlock.h"
#include "SimulinkElementBase.h"
#include "SimulinkLine.h"
#include "SimulinkModelType.h"
#include "SimulinkObject.h"
#include "SimulinkParameter.h"
#include "SimulinkPort.h"
#include "PlatformTypes.h"
#include <memory>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/** @brief A Simulink model  */
class APIEXPORT SimulinkModel final : public SimulinkElementBase
{
public:
  SimulinkModel();
  SimulinkModel(SimulinkModelType Type);
  SimulinkModel(const SimulinkModel& other);
  SimulinkElementBase& operator=(const SimulinkElementBase&) = delete;
  SimulinkElementType getType() const override;
  Index getID() const override;
  std::string toString() const override;
  ErrorCode remove(std::shared_ptr<SimulinkElementBase> element);
  ErrorCode add(std::shared_ptr<SimulinkElementBase> element);

  SimulinkBlock getBlock(uint32 blockIdx);
  SimulinkModelType getModelType();
  std::shared_ptr<SimulationSettings> getSimulationSettings();

  std::vector<std::shared_ptr<SimulinkParameter>> getParameters();

  uint32 getVersion();
  bool contains(const Index& id) const override;

  std::shared_ptr<ModelWorkspace> getWorkspace();

private:
  Logger& l;
  Index id;
  uint32 version;
  SimulinkModelType type;
  std::shared_ptr<ModelWorkspace> workspace;
  std::shared_ptr<SimulationSettings> simSet;
  std::vector<std::shared_ptr<SimulinkBlock>> blocks;
  std::vector<std::shared_ptr<SimulinkLine>> lines;
  std::vector<std::shared_ptr<SimulinkParameter>> parameters;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKMODEL_H