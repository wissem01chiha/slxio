// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKCONFIGSET_H
#define SIMULINKCONFIGSET_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "ConfigurationPCH.h"
#include "IConfigurationObject.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SimulinkSolver;
class SimulinkOptimization;
class SimulinkSFSim;
class SimulinkDebugging;
class SimulinkHardware;
class SimulinkModelReference;
class SimulinkRTW;

/**
 * @brief SimulinkConfigSet represents a configuration set in a Simulink model
 */
class SLXIO_APIEXPORT SimulinkConfigSet final : public IConfigurationObject
{
public:
    /** Default Constructor */
    SimulinkConfigSet();

    /**
     * disbale copy constructor
     * nstead use clone to create a copy of the configuration set
     */
    SimulinkConfigSet(const SimulinkConfigSet&) = delete;

    /** checks if this configuration set is active */
    bool IsActive() const;

    /** Creates a copy of this configuration set.*/
    HError Copy();

    /** Create a deep copy of this configuration set.*/
    HError Clone();

    /** Deletes this configuration set.*/
    HError Clear();

    /** Attaches this configuration set to a Simulink model.*/
    HError Attach(SimulinkModel& model);

    /** Detaches this configuration set from a Simulink model.*/
    HError Detach(SimulinkModel& model);

    /** Activates this configuration set.*/
    void Activate();

    /** Deactivates this configuration set.*/
    void Deactivate();

    /** Retrieves the name of the configuration set.*/
    std::string GetName();

    /**
     * Retrive the underlying SimulinkObject representing this
     * configuration set.
     */
    std::shared_ptr<SimulinkObject> GetObject() const;

    /** forward to underlying SimulinkObject GetId*/
    SId GetId() const;

    /** Creates a configuration set from a file.*/
    HError FromFile(const char* path);

    /** Saves the configuration set to a file. */
    HError SaveToFile(const char* path);

    /** Converts to a string representation. */
    std::string ToString() const;

    /** Get a Pointer to Solver Configuration struct */
    std::shared_ptr<SimulinkSolver> GetSolver();

    /** Default destructor */
    ~SimulinkConfigSet() = default;

private:
    Logger& logger;
    bool status = false;
    std::shared_ptr<SimulinkObject> object;
    std::shared_ptr<SimulinkSolver> solver;
    std::shared_ptr<SimulinkOptimization> optimization;
    std::shared_ptr<SimulinkSFSim> sfSim;
    std::shared_ptr<SimulinkDebugging> debugging;
    std::shared_ptr<SimulinkHardware> hardware;
    std::shared_ptr<SimulinkModelReference> modelReference;
    std::shared_ptr<SimulinkRTW> rtw;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULINKCONFIGSET_H
