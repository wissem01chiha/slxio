// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKPARAMETERARRAY_H
#define SIMULINKPARAMETERARRAY_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"
#include "SimulinkParameterBase.h"
#include <vector>
#include <string>
#include <memory>

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class SimulinkParameterBase
 * @brief Base class for all built-in or Custom simulink parameters
 */
class SLXIO_APIEXPORT SimulinkParameterArray : public SimulinkParameterBase
{
public:
  /** Returns current parameter name*/
  std::string GetName()  override;

  /** Returns parameter dimensions */
  std::vector<UInt16> GetDimensions() override;

  /** Serlise Parameter to string */
  std::string ToString() const override;

  /** Get code generation data struct*/
  std::shared_ptr<CoderInfo> GetCoderInfo() override;

  /** Parameter minumin value */
Float64 GetMin() override;

  /** Parameter maxiumum value */
  Float64 GetMax() override;

  /** Get the resolved parameter SimulinkDataType */
  SimulinkDataType GetDataType() override;

private:
    std::vector<Float64> Array;
    std::string Name;
    std::vector<UInt16> Dimensions;
    std::shared_ptr<CoderInfo> Coder;
    SimulinkDataType DataType;
};


SLXIO_ABI_NAMESPACE_END
};

#endif // SIMULINKPARAMETERARRAY_H