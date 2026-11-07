/*-------------------------------------------------------------------------+
|                                                                          |
| Copyright 2005-2011 The ConQAT Project                                   |
|                                                                          |
| Licensed under the Apache License, Version 2.0 (the "License");          |
| you may not use this file except in compliance with the License.         |
| You may obtain a copy of the License at                                  |
|                                                                          |
|    http://www.apache.org/licenses/LICENSE-2.0                            |
|                                                                          |
| Unless required by applicable law or agreed to in writing, software      |
| distributed under the License is distributed on an "AS IS" BASIS,        |
| WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. |
| See the License for the specific language governing permissions and      |
| limitations under the License.                                           |
+-------------------------------------------------------------------------*/
package org.conqat.engine.simulink.analyzers;

import org.conqat.engine.commons.node.NodeUtils;
import org.conqat.engine.core.core.AConQATKey;
import org.conqat.engine.core.core.AConQATProcessor;
import org.conqat.engine.simulink.scope.ISimulinkElement;
import org.conqat.engine.simulink.scope.ISimulinkResource;
import org.conqat.lib.simulink.model.stateflow.StateflowMachine;
import org.conqat.lib.simulink.util.SimulinkUtils;

/**
 * This processor counts block, charts and states.
 * 
 * @author $Author: kinnen $
 * @version $Rev: 41751 $
 * @levd.rating GREEN Hash: AD824FA4B758151C7A861470672C66E6
 */
@AConQATProcessor(description = "This processor counts block, charts and states of Simulink models.")
public class SimulinkSizeAnalyzer extends SimulinkModelAnalyzerBase {

	/** {@ConQAT.Doc} */
	@AConQATKey(description = "Number of blocks", type = "java.lang.Integer")
	public static final String BLOCKS_KEY = "#Blocks";

	/** {@ConQAT.Doc} */
	@AConQATKey(description = "Number of states", type = "java.lang.Integer")
	public static final String STATES_KEY = "#States";

	/** {@ConQAT.Doc} */
	@AConQATKey(description = "Number of charts", type = "java.lang.Integer")
	public static final String CHARTS_KEY = "#Charts";

	/** Add keys to display list. */
	@Override
	protected void setUp(ISimulinkResource root) {
		NodeUtils.addToDisplayList(root, BLOCKS_KEY, CHARTS_KEY, STATES_KEY);
	}

	/** Analyze model sizes. */
	@Override
	protected void analyzeModel(ISimulinkElement element) {
		element.setValue(BLOCKS_KEY, SimulinkUtils.countSubBlocks(element
				.getModel()));

		StateflowMachine machine = element.getModel().getStateflowMachine();

		if (machine == null) {
			element.setValue(CHARTS_KEY, 0);
			element.setValue(STATES_KEY, 0);
		} else {
			element.setValue(CHARTS_KEY, element.getModel()
					.getStateflowMachine().getCharts().size());
			element.setValue(STATES_KEY, SimulinkUtils.countStates(element
					.getModel().getStateflowMachine()));
		}
	}
}