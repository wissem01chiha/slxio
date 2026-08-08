// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKARRAYWRITER_H
#define SIMULINKARRAYWRITER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "SimulinkWriter.h"

class SimulinkArray;
class Logger;

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class SimulinkArrayWriter
 * @brief Abstract Serliser of SimulinkArray object to a file or stream
 */
class SLXIO_APIEXPORT SimulinkArrayWriter : public SimulinkWriter {
public:
  SimulinkArrayWriter *New() override;
  HError Write() override;
  HError SetInputData(const DataObject &data) override;
  HError SetInputData(SId idx, const DataObject &data) override;

private:
  DataObject &InputDataObject;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULINKARRAYWRITER_H
