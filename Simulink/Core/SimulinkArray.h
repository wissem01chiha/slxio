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
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
// implied. See the License for the specific language governing
// permissions and limitations under the License.

#ifndef SIMULINKARRAY_H
#define SIMULINKARRAY_H

#include "ABINamespace.h"
#include "SimulinkElementBase.h"
#include "SimulinkParameter.h"
#include "Type.h"
#include <memory>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Base class for Simulink Array.
 * An SLX Array can contain nested arrays as well as objects derived
 * from the SimulinkObject class. For object references, it maintains
 * a list of object IDs to avoid mutable inclusion, forward
 * declarations, and compiler conflicts.
 */
class APIEXPORT SimulinkArray final : public SimulinkElementBase
{
public:
  SimulinkArray();
  SimulinkArray(std::string type, std::string name, std::string dimension);
  SimulinkArray(const SimulinkArray& other);
  SimulinkArray& operator=(const SimulinkArray&) = delete;
  SimulinkElementType getType() const override;
  std::string toString() const override;
  ErrorCode add(std::shared_ptr<SimulinkElementBase> elment) override;
  ErrorCode remove(std::shared_ptr<SimulinkElementBase> elment) override;
  Index getID() const override;
  std::string getName();
  std::string getDimension();
  std::string getArrayType();
  std::shared_ptr<SimulinkParameter> getParameter(std::string name);
  bool contains(const Index& id) const override;

private:
  Index arrayId;
  std::string arrayType;
  std::string arrayName;
  std::string arrayDimension;
  std::vector<uint32> objects;
  std::vector<std::shared_ptr<SimulinkArray>> subArrays;
  std::vector<std::shared_ptr<SimulinkParameter>> parameters;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKARRAY_H