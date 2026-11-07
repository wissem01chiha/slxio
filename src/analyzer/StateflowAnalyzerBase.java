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

import org.conqat.lib.commons.assertion.CCSMAssert;
import org.conqat.engine.core.core.ConQATException;
import org.conqat.engine.simulink.scope.ISimulinkElement;
import org.conqat.lib.simulink.model.SimulinkBlock;
import org.conqat.lib.simulink.model.stateflow.StateflowBlock;
import org.conqat.lib.simulink.model.stateflow.StateflowChart;
import org.conqat.lib.simulink.model.stateflow.StateflowJunction;
import org.conqat.lib.simulink.model.stateflow.StateflowNodeBase;
import org.conqat.lib.simulink.model.stateflow.StateflowState;
import org.conqat.lib.simulink.model.stateflow.StateflowTransition;

/**
 * Base class for Stateflow analyzers.
 * 
 * @author $Author: kinnen $
 * @version $Rev: 41751 $
 * @levd.rating GREEN Hash: 2758DF25413A1EF2F7249508A70C6D83
 */
public abstract class StateflowAnalyzerBase extends
		FindingsBlockTraversingProcessorBase {

	/**
	 * Checks if block is a Stateflow block and calls
	 * {@link #visitChart(StateflowChart, ISimulinkElement)} if it is.
	 * 
	 * @throws ConQATException
	 *             if analysis threw an exception
	 */
	@Override
	protected void visitBlock(SimulinkBlock block, ISimulinkElement element)
			throws ConQATException {

		if (block instanceof StateflowBlock) {
			visitChart(((StateflowBlock) block).getChart(), element);
		}
	}

	/**
	 * Recursively visits Stateflow model and calls the appropriate
	 * <code>analyze*()</code>-methods.
	 * 
	 * @throws ConQATException
	 *             if any of the <code>analyze*()</code>-methods throws an
	 *             exception
	 */
	private void visitChart(StateflowChart chart, ISimulinkElement element)
			throws ConQATException {
		analyzeChart(chart, element);
		for (StateflowNodeBase node : chart.getNodes()) {
			visitNode(node, element);
		}
	}

	/**
	 * Recursively visits Stateflow model and calls the appropriate
	 * <code>analyze*()</code>-methods.
	 * 
	 * @throws ConQATException
	 *             if any of the <code>analyze*()</code>-methods throws an
	 *             exception
	 */
	private void visitNode(StateflowNodeBase node, ISimulinkElement element)
			throws ConQATException {

		for (StateflowTransition transition : node.getOutTransitions()) {
			analyzeTransition(transition, element);
		}

		if (node instanceof StateflowJunction) {
			analyzeJunction((StateflowJunction) node, element);
			return;
		}

		if (node instanceof StateflowState) {
			StateflowState state = (StateflowState) node;
			analyzeState(state, element);
			for (StateflowNodeBase child : state.getNodes()) {
				visitNode(child, element);
			}
			return;
		}

		CCSMAssert.fail("Unkown subclass :" + node.getClass().getName());
	}

	/** Override to analyze a transition. This implementation is empty. */
	@SuppressWarnings("unused")
	protected void analyzeTransition(StateflowTransition transition,
			ISimulinkElement element) throws ConQATException {
		// do nothing
	}

	/** Override to analyze a state. This implementation is empty. */
	@SuppressWarnings("unused")
	protected void analyzeState(StateflowState state, ISimulinkElement element)
			throws ConQATException {
		// do nothing
	}

	/** Override to analyze a junction. This implementation is empty. */
	@SuppressWarnings("unused")
	protected void analyzeJunction(StateflowJunction junction,
			ISimulinkElement element) throws ConQATException {
		// do nothing
	}

	/** Override to analyze a chart. This implementation is empty. */
	@SuppressWarnings("unused")
	protected void analyzeChart(StateflowChart chart, ISimulinkElement element)
			throws ConQATException {
		// do nothing
	}

}