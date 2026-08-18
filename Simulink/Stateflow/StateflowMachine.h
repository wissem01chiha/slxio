// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef STATEFLOWMACHINE_H
#define STATEFLOWMACHINE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "StateflowChart.h"
#include "StateflowElementBase.h"
#include "StateflowTarget.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SimulinkModel;

/**
 * @brief The Stateflow machine is the container element of all
 * Stateflow elements of a Simulink model. There is only one machine
 * per model and Stateflow machines do not have a parent element.
 */
class StateflowMachine : public StateflowElementBase
{
public:
    StateflowMachine(SimulinkModel& model) {
        // this->model = model;
        // model.setStateflowMachine(this);
    };

    /**
     * @brief Copy constructor. This does not clone the charts as these
     * are cloned via the StateflowBlock they belong to.
     * @param orig original machine
     * @param model model the clone belongs to.
     */
    StateflowMachine(StateflowMachine orig, SimulinkModel model)
    {

        // model = model;
        // model.setStateflowMachine(this);

        // for (StateflowTarget target : orig.targets) {
        //   addTarget(target.deepClone());
        // }
    }

    /**
     * @brief Add chart to the machine.
     * @param fqName full qualified name of the Stateflow block this
     * chart belongs to.
     * @param chart the chart.
     */
    void addChart(std::string fqName, StateflowChart chart)
    {
        // charts.put(fqName, chart);
        // chart.setParent(this);
    }

    void addTarget(StateflowTarget target)
    {
        // targets.AddElement(target);
        // target.setParent(this);
    }

    /**
     * @brief Get chart for full qualified name of the Stateflow block
     * the chart belongs to.
     */
    // StateflowChart getChart(std::string fqName) {
    // return charts.get(fqName);
    //  }

    /** Get charts of this machine. */
    std::vector<StateflowChart> getCharts()
    {
        //   return CollectionUtils.asUnmodifiable(charts.values());
    }

    /** @brief Get the Simulink model this machine belongs to. */
    SimulinkModel getModel() { return model; }

    /** @brief Get targets of this machine. */
    std::vector<StateflowTarget> GetTargets() { return m_targets; }

    /**
     * @brief Removes the machine from the model. The Machine can be
     * removed from the model only after all {@link StateflowBlock}s
     * were removed.
     */
    void RemoveElement()
    {
        // CCSMPre.isTrue(charts.isEmpty(), "All charts must be removed
        // first (via "
        //              "removing the Stateflow blocks).");
        // model.setStateflowMachine(null);
        // model = null;

        // for (StateflowTarget target : new
        // ArrayList<StateflowTarget>(targets)) {
        //   target.RemoveElement();
        // }
    }

    /** @brief Remove chart. */
    void removeChart(StateflowChart chart)
    {
        // CCSMPre.isTrue(chart.getMachine() == this,
        //               "Machine does not contain chart with name " +
        //               chart);

        // String fqName = chart.getStateflowBlock().getId();
        // CCSMAssert.isTrue(charts.get(fqName) == chart, "Error in chart
        // storage.");

        // charts.RemoveElement(fqName);
        chart.removeNodes();
        // chart.setStateflowBlock(null);
        // chart.setParent(null);
    }

    void removeTarget(StateflowTarget target)
    {
        // targets.RemoveElement(target);
        // target.setParent(null);
    }

private:
    SimulinkModel model;
    std::vector<StateflowTarget> m_targets;
    std::map<std::string, StateflowChart> charts;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // STATEFLOWMACHINE_H
