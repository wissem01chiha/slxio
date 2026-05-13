// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKARRAYWRITER_H
#define SIMULINKARRAYWRITER_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "SimulinkWriter.h"

class SimulinkArray;
class Logger;

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class SimulinkArrayWriter
 * @brief Abstract Serliser of SimulinkArray object to a file or stream
 */
class SLXIO_APIEXPORT SimulinkArrayWriter
  : public SimulinkWriter
{
public:
  SimulinkArrayWriter* New() override;
  ReturnType Write() override;
  ReturnType SetInputData(const DataObject& data) override;
  ReturnType SetInputData(IdType idx, const DataObject& data) override;
private:
  DataObject& InputDataObject;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKARRAYWRITER_H