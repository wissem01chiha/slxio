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

import java.util.ArrayList;
import java.util.List;

import org.conqat.engine.commons.ConQATParamDoc;
import org.conqat.engine.core.core.AConQATAttribute;
import org.conqat.engine.core.core.AConQATKey;
import org.conqat.engine.core.core.AConQATParameter;
import org.conqat.engine.core.core.AConQATProcessor;
import org.conqat.engine.simulink.scope.ISimulinkElement;
import org.conqat.lib.simulink.model.stateflow.StateflowNodeBase;
import org.conqat.lib.simulink.model.stateflow.StateflowState;
import org.conqat.lib.simulink.util.SimulinkUtils;

/**
 * {@ConQAT.Doc}
 * 
 * @author $Author: kinnen $
 * @version $Rev: 41751 $
 * @levd.rating GREEN Hash: 10B3E9B0E19AE7EA446B9C6B38C56921
 */
@AConQATProcessor(description = "This processor counts the number of substates "
		+ "of each state. A finding is attached if a node has only one substates "
		+ "or more then the specified threshold. If threshold is unspecified only "
		+ "states with exactly one substate are rated. Additionally a "
		+ "threshold for the sum of transitions of the sub states of the state can "
		+ "specified.")
public class SubStateAnalyzer extends StateflowAnalyzerBase {

	/** {@ConQAT.Doc} */
	@AConQATKey(description = "Sub State Analyzer Findings", type = ConQATParamDoc.FINDING_LIST_TYPE)
	public static final String KEY = "SubStateFindings";

	/** Maximum number of substates, <code>null</code> for no threshold. */
	private Integer subStateThreshold = null;

	/** Maximum number of transitions, <code>null</code> for no threshold. */
	private Integer transitionThreshold = null;

	/** ConQAT Parameter */
	@AConQATParameter(name = "sub-state", minOccurrences = 0, maxOccurrences = 1, description = "Maximum number of allowed substates.")
	public void setSubStateThreshold(
			@AConQATAttribute(name = "threshold", description = "Number of allowed substates") int threshold) {
		subStateThreshold = threshold;
	}

	/** ConQAT Parameter */
	@AConQATParameter(name = "transition", minOccurrences = 0, maxOccurrences = 1, description = "Maximum number of allowed substates.")
	public void setTransitionThreshold(
			@AConQATAttribute(name = "threshold", description = "Number of allowed transitions") int threshold) {
		transitionThreshold = threshold;
	}

	/** Check if a state has exactly one sub state. */
	@Override
	protected void analyzeState(StateflowState state, ISimulinkElement element) {

		String id = SimulinkUtils.getFQStateName(state);
		ArrayList<String> messages = new ArrayList<String>();

		checkOneSubstate(state, messages);
		checkSubStateThreshold(state, messages);
		checkTransitions(state, messages);

		for (String message : messages) {
			attachFinding(message, element, id);
		}
	}

	/** Check if state has exactly one sub state (or junction). */
	private void checkOneSubstate(StateflowState state, List<String> messages) {
		if (state.getNodes().size() == 1) {
			messages.add("State has ONE sub state.");
		}
	}

	/** Check if the number of sub states is above the threshold. */
	private void checkSubStateThreshold(StateflowState state,
			List<String> messages) {
		if (subStateThreshold == null) {
			return;
		}
		int subStateCount = countSubStates(state);
		if (subStateCount > subStateThreshold) {
			messages.add("State contains " + subStateCount + " substates.");
		}
	}

	/** Check if the number of transitions is above the threshold. */
	private void checkTransitions(StateflowState state, List<String> messages) {
		if (transitionThreshold == null) {
			return;
		}
		int transitionCount = countTransitions(state);
		if (transitionCount > transitionThreshold) {
			messages.add("State contains " + transitionCount + " transitions.");
		}
	}

	/**
	 * Count substates. In contrast to {@link StateflowState#getNodes()}
	 * .getSize() this counts only states does not include junctions.
	 */
	private int countSubStates(StateflowState state) {
		int subStateCount = 0;
		for (StateflowNodeBase node : state.getNodes()) {
			if (node instanceof StateflowState) {
				subStateCount++;
			}
		}
		return subStateCount;
	}

	/**
	 * Counts the number of transitions under this state, i.e. the sum of all
	 * transitions of all substates.
	 */
	private int countTransitions(StateflowState state) {
		int transitionCount = 0;

		for (StateflowNodeBase node : state.getNodes()) {
			transitionCount += node.getInTransitions().size();
		}

		return transitionCount;
	}

	/** {@inheritDoc} */
	@Override
	protected String getKey() {
		return KEY;
	}
}