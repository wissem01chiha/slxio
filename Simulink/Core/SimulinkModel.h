// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKMODEL_H
#define SIMULINKMODEL_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "ModelWorkspace.h"
#include "PlatformTypes.h"
#include "SimulinkBlock.h"
#include "SimulinkElementBase.h"
#include "SimulinkModelType.h"

#include <memory>

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SimulinkObject;
class SimulinkArray;
class SImulinkPort;
class SimulinkLine;
class SimulinkBlock;
class SimulinkObject;
class SimulinkParameter;
class SimulationSettings;
class Logger;

/**
 * @class SimulinkModel
 */
class SLXIO_APIEXPORT SimulinkModel final : public SimulinkElementBase
{
public:
    /** Default Constructor */
    SimulinkModel();

    SimulinkModel* New() const override;

    /** Construct a Model by given an explict model type */
    SimulinkModel(SimulinkModelType Type);

    /** Returns the generic type of this element. */
    SimulinkElementType GetType() const override;

    /** Returns the unique identifier of this element. */
    SId GetId() const override;

    /** Returns a string representation of this element. */
    std::string ToString() const override;

    /** Return a Pointer to given Simulink Block by Id*/
    std::shared_ptr<SimulinkBlock> GetBlock(SId blockIdx);

    /** Get Model type */
    SimulinkModelType GetModelType();

    /** Rteuns a pointer to Simulink Settings */
    std::shared_ptr<SimulationSettings> GetSimulationSettings();

    /** Rteurns Model Version number*/
    UInt32 GetModelVersion();

    /** Checks if this element or its children contain the given identifier. */
    bool Contains(const SId& id) const override;

    /** */
    std::shared_ptr<ModelWorkspace> GetModelWorkspace();

    /** */
    Logger& GetLogger();

private:
    Logger& logger;
    SId id;
    UInt32 version;
    SimulinkModelType ModelType;
    std::shared_ptr<ModelWorkspace> workspace;
    std::shared_ptr<SimulationSettings> simSet;
    std::vector<std::shared_ptr<SimulinkBlock>> blocks;
    std::vector<std::shared_ptr<SimulinkLine>> lines;
    std::vector<std::shared_ptr<SimulinkParameter>> parameters;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULINKMODEL_H
