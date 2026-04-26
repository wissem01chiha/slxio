// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKARRAY_H
#define SIMULINKARRAY_H

#include "ABINamespaceMacro.h"
#include "Logger.h"
#include "SimulinkElementBase.h"
#include "SimulinkParameter.h"
#include "PlatformTypes.h"
#include <memory>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Base class for Simulink Array.
 * An slx Array can contain nested arrays as well as objects derived
 * from the SimulinkObject class. for object references, it maintains
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
  Index id;
  Logger& l;
  std::string type;
  std::string name;
  std::string dimension;
  std::vector<uint32> objects;
  std::vector<std::shared_ptr<SimulinkArray>> subArrays;
  std::vector<std::shared_ptr<SimulinkParameter>> parameters;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKARRAY_H