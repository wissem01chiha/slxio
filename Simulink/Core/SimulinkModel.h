// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKMODEL_H
#define SIMULINKMODEL_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "Logger.h"
#include "ModelWorkspace.h"
#include "SimulationSettings.h"
#include "SimulinkBlock.h"
#include "SimulinkElementBase.h"
#include "SimulinkModelType.h"
#include "SimulinkObject.h"
#include "SimulinkParameter.h"
#include "PlatformTypes.h"
#include <memory>

class SimulinkObject;
class SimulinkArray;
class SImulinkPort;
class SimulinkLine;

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/** 
 * @class SimulinkModel 
 */
class APIEXPORT SimulinkModel final : public SimulinkElementBase
{
public:
  /**
   * Default Constructor
   */
  SimulinkModel();

  /**
   * 
   */
  SimulinkModel(SimulinkModelType Type);

  /**
   * 
   */
  SimulinkModel(const SimulinkModel& other);

  /**
   * 
   */
  SimulinkElementBase& operator=(const SimulinkElementBase&) = delete;

  /**
   * 
   */
  SimulinkElementType GetElementType() const override;

  /**
   * 
   */
  IdType GetElementId() const override;

  /**
   * 
   */
  std::string ToString() const override;

  /**
   * 
   */
  ReturnType RemoveElement(std::shared_ptr<SimulinkElementBase> element);

  /**
   * 
   */
  ReturnType AddElement(std::shared_ptr<SimulinkElementBase> element);

  /**
   * 
   */
  SimulinkBlock GetBlock(IdType blockIdx);

  /**
   * 
   */
  SimulinkModelType GetModelType();

  /**
   * 
   */
  std::shared_ptr<SimulationSettings> GetSimulationSettings();

  /**
   * 
   */
  std::vector<std::shared_ptr<SimulinkParameter>> GetParameters();

  /**
   * 
   */
  UInt32 GetModelVersion();

  /**
   * 
   */
  bool Contains(const IdType& id) const override;

  /**
   * 
   */
  std::shared_ptr<ModelWorkspace> GetModelWorkspace();

  /**
   * 
   */
  Logger& GetLogger();

private:
  Logger& logger;
  IdType id;
  UInt32 version;
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