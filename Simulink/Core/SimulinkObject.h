// Copyright 2025-2026 Wissem Chiha
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef SIMULINKOBJECT_H
#define SIMULINKOBJECT_H

#include "ABINamespace.h"
#include "APIExport.h"
#include "ErrorCode.h"
#include "SimulinkArray.h"
#include "SimulinkElementBase.h"
#include "SimulinkParameter.h"
#include "Type.h"
#include <memory>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Class for Simulink objects, which are a construct for structured
 * storage of meta-data in the model.
 */
class APIEXPORT SimulinkObject : public SimulinkElementBase {
public:
  SimulinkObject();
  virtual ~SimulinkObject() = default;
  SimulinkObject(const SimulinkObject &other);
  SimulinkObject(Index id, std::string name, std::string className);
  SimulinkObject(Index id, std::string version, std::string name,
                 std::string className);
  SimulinkObject(std::string version, std::string className);
  SimulinkObject &operator=(const SimulinkObject &other) = delete;
  SimulinkElementType getType() const override;
  Index getID() const override;
  std::string toString() const override;
  ErrorCode remove(std::shared_ptr<SimulinkElementBase> element) override;
  ErrorCode add(std::shared_ptr<SimulinkElementBase> element) override;
  bool contains(const Index &id) const override;
  std::shared_ptr<SimulinkParameter> getParameter(const std::string &name);
  std::string getName();

protected:
  Index objectId;
  std::string objectVersion;
  std::string propName;
  std::string className;

  std::vector<std::shared_ptr<SimulinkObject>> objects;
  std::vector<std::shared_ptr<SimulinkArray>> arrays;
  std::vector<std::shared_ptr<SimulinkParameter>> parameters;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKOBJECT_H