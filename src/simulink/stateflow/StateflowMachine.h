/*
 * Copyright 2025-2026 Wissem Chiha
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include "CommonPCH.h"
#include "StateflowElementBase.h"

namespace slxio
{
    class StateflowChart;
    class StateflowTarget;

    /**
     * The Stateflow machine is the container element of all
     * Stateflow elements of a Simulink model. There is only one machine
     * per model and Stateflow machines do not have a parent element.
     */
    class StateflowMachine : public StateflowElementBase
    {
    public:
        StateflowMachine();
        StateflowMachine(StateflowMachine& orig);

        void AddChart(std::string fqName, StateflowChart& chart);
        void AddTarget(const StateflowTarget& target);

        StateflowChart& GetChart(std::string fqName);
        std::vector<StateflowChart> GetCharts();
        std::vector<StateflowTarget> GetTargets();

        /**
         * @brief Removes the machine from the model. The Machine can be
         * removed from the model only after all {@link StateflowBlock}s
         * were removed.
         */
        void Remove()
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

        void RemoveChart(StateflowChart& chart)
        {
            // CCSMPre.isTrue(chart.getMachine() == this,
            //               "Machine does not contain chart with name " +
            //               chart);

            // String fqName = chart.getStateflowBlock().getId();
            // CCSMAssert.isTrue(charts.get(fqName) == chart, "Error in chart
            // storage.");

            // charts.RemoveElement(fqName);
            // chart.removeNodes();
            // chart.setStateflowBlock(null);
            // chart.setParent(null);
        }

        void RemoveTarget(StateflowTarget& target)
        {
            // targets.RemoveElement(target);
            // target.setParent(null);
        }

    private:
        std::vector<StateflowTarget> m_targets;
        std::map<std::string, StateflowChart> m_charts;
    };

}; // namespace slxio
