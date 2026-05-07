// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKARRAY_H
#define SIMULINKARRAY_H

#include "AbiNamespaceMacro.h"
#include "Logger.h"
#include "SimulinkElementBase.h"
#include "SimulinkParameter.h"
#include "PlatformTypes.h"
#include <memory>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class SimulinkArray
 * @brief Base class for Simulink Array.
 * An slx Array can contain nested arrays as well as objects derived
 * from the SimulinkObject class. for object references, it maintains
 * a list of object IDs to avoid mutable inclusion, forward
 * declarations, and compiler conflicts.
 */
class SLXIO_APIEXPORT SimulinkArray final : public SimulinkElementBase
{
public:
  SimulinkArray();

  /**
   * 
   */
  SimulinkArray(std::string type, std::string name, std::string dimension);

  /**
   * 
   */
  SimulinkArray(const SimulinkArray& other);

  SimulinkArray& operator=(const SimulinkArray&) = delete;
  
  /**
   * 
   */
  SimulinkElementType GetElementType() const override;

  std::string ToString() const override;

  /**
   * 
   */
  ReturnType AddElement(std::shared_ptr<SimulinkElementBase> elment) override;

  /**
   * 
   */
  ReturnType RemoveElement(std::shared_ptr<SimulinkElementBase> elment) override;

  /**
   * 
   */
  IdType GetElementId() const override;

  /**
   * 
   */
  std::string getName();

  /**
   * 
   */
  std::string getDimension();

  /**
   * 
   */
  std::string getArrayType();

  /**
   * 
   */
  std::shared_ptr<SimulinkParameter> getParameter(std::string name);

  /**
   * 
   */
  bool Contains(const IdType& id) const override;

  /**
   * 
   */
  Logger& GetLogger();

private:
  IdType id;
  Logger& logger;
  std::string type;
  std::string name;
  std::string dimension;
  std::vector<IdType> objects;
  std::vector<std::shared_ptr<SimulinkArray>> subArrays;
  std::vector<std::shared_ptr<SimulinkParameter>> parameters;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKARRAY_H