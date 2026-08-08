// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKPARAMETERARRAY_H
#define SIMULINKPARAMETERARRAY_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "SimulinkParameterBase.h"
#include <memory>
#include <string>
#include <vector>

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class SimulinkParameterArray
 */
class SLXIO_APIEXPORT SimulinkParameterArray : public SimulinkParameterBase {
public:
  /** Returns current parameter name*/
  std::string GetName() override;

  /** Returns parameter dimensions */
  std::vector<UInt16> GetDimensions() override;

  /** Serlise Parameter to string */
  std::string ToString() const override;

  /** Parser the array given a string representation */
  HError FromString(const char *value);

  /** Get code generation data struct*/
  std::shared_ptr<CoderInfo> GetCoderInfo() override;

  /** Parameter minumin value */
  Float32 GetMin() override;

  /** Parameter maxiumum value */
  Float32 GetMax() override;

  /** Get the resolved parameter SimulinkDataType */
  SimulinkDataType GetDataType() override;

private:
  std::vector<Float32> Data;
  std::string Name;
  std::vector<UInt16> Dimensions;
  std::shared_ptr<CoderInfo> Coder;
  SimulinkDataType DataType;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULINKPARAMETERARRAY_H