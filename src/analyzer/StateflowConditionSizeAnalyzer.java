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
import org.conqat.lib.simulink.model.stateflow.StateflowTransition;

/**
 * {@ConQAT.Doc}
 * 
 * @author $Author: deissenb $
 * @version $Rev: 43969 $
 * @ConQAT.Rating GREEN Hash: 0B6BC0FCE9C9A188B68E578501C8F918
 */
@AConQATProcessor(description = "Determines the condition size by adding the number of primitive condition expressions over all transitions in all charts. "
		+ "In this context, a expression is primitive, if it contains no further && or ||. For example the condition (a && (b || c)) has condition size 3.")
public class StateflowConditionSizeAnalyzer extends
		SimulinkBlockTraversingProcessorBase {

	/** {@ConQAT.Doc} */
	@AConQATKey(description = "Condition Size", type = "java.lang.Double")
	public static final String KEY = "Condition size";

	/** Accumulated condition size for a */
	private double conditionSize;

	/** {@inheritDoc} */
	@Override
	protected void analyzeModel(ISimulinkElement element)
			throws ConQATException {
		conditionSize = 0;

		super.analyzeModel(element);

		element.setValue(KEY, conditionSize);
	}

	/** {@inheritDoc} */
	@Override
	protected void visitBlock(SimulinkBlock block, ISimulinkElement element) {
		if (!(block instanceof StateflowBlock)) {
			return;
		}

		for (StateflowNodeBase node : ((StateflowBlock) block).getChart()
				.getNodes()) {
			conditionSize += determineConditionSize(node);
		}
	}

	/**
	 * Calculates the condition size of all outgoing transitions of a node and
	 * its children.
	 */
	private double determineConditionSize(StateflowNodeBase node) {
		double conditionSize = 0;
		for (StateflowTransition transition : node.getOutTransitions()) {
			conditionSize += determineConditionSize(transition);
		}

		if (node instanceof StateflowState) {
			for (StateflowNodeBase child : ((StateflowState) node).getNodes()) {
				conditionSize += determineConditionSize(child);
			}
		}

		return conditionSize;
	}

	/** Calculates the condition size for a single transition. */
	private double determineConditionSize(StateflowTransition transition) {
		String label = transition.getLabel();
		if (label == null) {
			return 0;
		}

		return label.split("&&|\\|\\|").length;
	}
}
