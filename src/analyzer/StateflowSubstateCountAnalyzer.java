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

import org.conqat.engine.commons.node.NodeUtils;
import org.conqat.engine.core.core.AConQATKey;
import org.conqat.engine.core.core.AConQATProcessor;
import org.conqat.engine.core.core.ConQATException;
import org.conqat.engine.simulink.scope.ISimulinkElement;
import org.conqat.engine.simulink.scope.ISimulinkResource;
import org.conqat.lib.commons.collections.CounterSet;
import org.conqat.lib.commons.collections.UnmodifiableSet;
import org.conqat.lib.commons.math.MathUtils;
import org.conqat.lib.simulink.model.SimulinkBlock;
import org.conqat.lib.simulink.model.stateflow.StateflowBlock;
import org.conqat.lib.simulink.model.stateflow.StateflowNodeBase;
import org.conqat.lib.simulink.model.stateflow.StateflowState;

/**
 * {@ConQAT.Doc}
 * 
 * @author $Author: deissenb $
 * @version $Rev: 42264 $
 * @ConQAT.Rating GREEN Hash: BAD108130049A69547FD91FB2ADC3255
 */
@AConQATProcessor(description = "Analyzes the number of substates (excluding junctions) for the states.")
public class StateflowSubstateCountAnalyzer extends
		SimulinkBlockTraversingProcessorBase {

	/** {@ConQAT.Doc} */
	@AConQATKey(description = "Substate Count Distribution", type = "org.conqat.lib.commons.collections.CounterSet<Integer>")
	private static final String SUBSTATE_COUNT_DISTRIBUTION_KEY = "Substate Count Distribution";

	/** {@ConQAT.Doc} */
	@AConQATKey(description = "Max Substate Count", type = "java.lang.Integer")
	private static final String MAX_SUBSTATE_COUNT_KEY = "Max Substate Count";

	/** {@inheritDoc} */
	@Override
	protected void setUp(ISimulinkResource root) throws ConQATException {
		super.setUp(root);
		NodeUtils.addToDisplayList(root, SUBSTATE_COUNT_DISTRIBUTION_KEY,
				MAX_SUBSTATE_COUNT_KEY);
	}

	/** {@inheritDoc} */
	@Override
	protected void visitBlock(SimulinkBlock block, ISimulinkElement element) {
		if (block instanceof StateflowBlock) {
			for (StateflowNodeBase node : ((StateflowBlock) block).getChart()
					.getNodes()) {
				visitStateflowNode(node, element);
			}
		}
	}

	/** Visits the given node */
	private void visitStateflowNode(StateflowNodeBase node,
			ISimulinkElement element) {
		if (node instanceof StateflowState) {
			StateflowState state = (StateflowState) node;
			analyzeState(state, element);
			for (StateflowNodeBase child : state.getNodes()) {
				visitStateflowNode(child, element);
			}
		}
	}

	/** Analyzes the given state */
	protected void analyzeState(StateflowState state, ISimulinkElement element) {
		int childCount = countSubStates(state);
		if (childCount > 0) {
			getOrCreateCounterSet(element).inc(childCount);
		}
	}

	/** {@inheritDoc} */
	@Override
	protected void finishModel(ISimulinkElement element) throws ConQATException {
		UnmodifiableSet<Integer> counts = getOrCreateCounterSet(element)
				.getKeys();
		if (!counts.isEmpty()) {
			element.setValue(MAX_SUBSTATE_COUNT_KEY, MathUtils.max(counts));
		}
		super.finishModel(element);
	}

	/** Gets or creates the CounterSet */
	@SuppressWarnings("unchecked")
	private static CounterSet<Integer> getOrCreateCounterSet(
			ISimulinkElement element) {
		if (element.getValue(SUBSTATE_COUNT_DISTRIBUTION_KEY) == null) {
			element.setValue(SUBSTATE_COUNT_DISTRIBUTION_KEY,
					new CounterSet<Integer>());
		}
		return (CounterSet<Integer>) element
				.getValue(SUBSTATE_COUNT_DISTRIBUTION_KEY);

	}

	/** Counts the number of substates for the given state */
	private static int countSubStates(StateflowState state) {
		int subStateCount = 0;
		for (StateflowNodeBase node : state.getNodes()) {
			if (node instanceof StateflowState) {
				subStateCount++;
			}
		}
		return subStateCount;
	}

}
