// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKPARAMETERBASE_H
#define SIMULINKPARAMETERBASE_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"
#include <memory>
#include <string>
#include <vector>

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class CoderInfo;
enum class SimulinkDataType;

/**
 * @class SimulinkParameterBase
 * @brief Base class for all built-in or Custom simulink parameters
 */
class SLXIO_APIEXPORT SimulinkParameterBase
{
public:
  /** Returns current parameter name*/
  virtual std::string GetName() = 0;

  /** Returns parameter dimensions */
  virtual std::vector<UInt16> GetDimensions() = 0;

  /** Serlise Parameter to string */
  virtual std::string ToString() const = 0;

  /** Get code generation data struct*/
  virtual std::shared_ptr<CoderInfo> GetCoderInfo() = 0;

  /** Parameter minumin value */
  virtual Float32 GetMin() = 0;

  /** Parameter maxiumum value */
  virtual Float32 GetMax() = 0;

  /** Get the resolved parameter SimulinkDataType */
  virtual SimulinkDataType GetDataType() = 0;

protected:
  /** Default constructor. */
  SimulinkParameterBase() = default;

  /** Deleted copy constructor. */
  SimulinkParameterBase(const SimulinkParameterBase&) = delete;
};

SLXIO_ABI_NAMESPACE_END
};

#endif // SIMULINKPARAMETERBASE_H