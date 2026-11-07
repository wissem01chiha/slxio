/*-------------------------------------------------------------------------+
|                                                                          |
| Copyright 2005-2011 the ConQAT Project                                   |
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

import org.conqat.engine.core.core.AConQATKey;
import org.conqat.engine.core.core.AConQATProcessor;
import org.conqat.engine.core.core.ConQATException;
import org.conqat.engine.simulink.scope.ISimulinkElement;
import org.conqat.lib.simulink.model.SimulinkBlock;
import org.conqat.lib.simulink.model.stateflow.StateflowBlock;
import org.conqat.lib.simulink.model.stateflow.StateflowNodeBase;
import org.conqat.lib.simulink.model.stateflow.StateflowState;

/**
 * {@ConQAT.Doc}
 * 
 * @author $Author: deissenb $
 * @version $Rev: 43969 $
 * @ConQAT.Rating GREEN Hash: 5CC31F86C2931FEBC1B26BF83EA0874B
 */
@AConQATProcessor(description = "Counts the transitions over all charts.")
public class StateflowTransitionCounter extends
		SimulinkBlockTraversingProcessorBase {

	/** {@ConQAT.Doc} */
	@AConQATKey(description = "Transitions", type = "java.lang.Double")
	public static final String KEY = "Transitions";

	/** Variable used to accumulate the transition count. */
	private double transitions;

	/** {@inheritDoc} */
	@Override
	protected void analyzeModel(ISimulinkElement element)
			throws ConQATException {
		transitions = 0;
		super.analyzeModel(element);
		element.setValue(KEY, transitions);
	}

	/** {@inheritDoc} */
	@Override
	protected void visitBlock(SimulinkBlock block, ISimulinkElement element) {
		if (!(block instanceof StateflowBlock)) {
			return;
		}
		for (StateflowNodeBase node : ((StateflowBlock) block).getChart()
				.getNodes()) {
			transitions += determineTransitionCount(node);
		}
	}

	/** Returns the number of transitions for a node and its children. */
	private double determineTransitionCount(StateflowNodeBase node) {
		double transitions = node.getOutTransitions().size();

		if (node instanceof StateflowState) {
			for (StateflowNodeBase child : ((StateflowState) node).getNodes()) {
				transitions += determineTransitionCount(child);
			}
		}

		return transitions;
	}

}
