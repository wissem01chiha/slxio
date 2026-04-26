// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKOBJECT_H
#define SIMULINKOBJECT_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "ErrorCode.h"
#include "Logger.h"
#include "SimulinkArray.h"
#include "SimulinkElementBase.h"
#include "SimulinkParameter.h"
#include "PlatformTypes.h"
#include <memory>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Class for Simulink objects, which are a construct for
 * structured storage of meta-data in the model.
 */
class APIEXPORT SimulinkObject : public SimulinkElementBase
{
public:
  SimulinkObject();
  virtual ~SimulinkObject() = default;
  SimulinkObject(const SimulinkObject& other);
  SimulinkObject(Index id, std::string name, std::string className);
  SimulinkObject(
    Index id, std::string version, std::string name, std::string className);
  SimulinkObject(std::string version, std::string className);
  SimulinkObject& operator=(const SimulinkObject& other) = delete;
  SimulinkElementType getType() const override;
  Index getID() const override;
  std::string toString() const override;
  ErrorCode remove(std::shared_ptr<SimulinkElementBase> element) override;
  ErrorCode add(std::shared_ptr<SimulinkElementBase> element) override;
  bool contains(const Index& id) const override;
  std::shared_ptr<SimulinkParameter> getParameter(const std::string& name);
  std::string getName();

protected:
  Logger& l;
  Index id;
  std::string version;
  std::string propName;
  std::string className;
  std::vector<std::shared_ptr<SimulinkObject>> objects;
  std::vector<std::shared_ptr<SimulinkArray>> arrays;
  std::vector<std::shared_ptr<SimulinkParameter>> parameters;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKOBJECT_H