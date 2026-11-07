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
import org.conqat.engine.simulink.scope.ISimulinkElement;
import org.conqat.lib.commons.collections.UnmodifiableSet;
import org.conqat.lib.simulink.model.SimulinkBlock;
import org.conqat.lib.simulink.model.stateflow.StateflowBlock;
import org.conqat.lib.simulink.model.stateflow.StateflowNodeBase;
import org.conqat.lib.simulink.model.stateflow.StateflowState;

/**
 * {@ConQAT.Doc}
 * 
 * @author $Author: deissenb $
 * @version $Rev: 42265 $
 * @ConQAT.Rating GREEN Hash: D55865F5D771DE56008B4A20C876BCCA
 */
@AConQATProcessor(description = "Determines the substate depth of Stateflow charts within Simulink models.")
public class StateflowSubstateDepthAnalyzer extends
		SimulinkBlockTraversingProcessorBase {

	/** {@ConQAT.Doc} */
	@AConQATKey(description = "Substate depth", type = "java.lang.Integer")
	public static final String KEY = "Substate depth";

	/** {@inheritDoc} */
	@Override
	protected void visitBlock(SimulinkBlock block, ISimulinkElement element) {
		if (block instanceof StateflowBlock) {
			for (StateflowNodeBase node : ((StateflowBlock) block).getChart()
					.getNodes()) {
				if (node instanceof StateflowState) {
					int depth = depth((StateflowState) node);
					if (element.getValue(KEY) == null
							|| depth > (Integer) element.getValue(KEY)) {
						element.setValue(KEY, depth);
					}
				}
			}
		}
	}

	/** Determines the depth of the given state */
	private static int depth(StateflowState state) {
		UnmodifiableSet<StateflowNodeBase> children = state.getNodes();
		if (children.isEmpty()) {
			return 0;
		}
		int max = 0;
		for (StateflowNodeBase child : children) {
			if (child instanceof StateflowState) {
				max = Math.max(max, depth((StateflowState) child));
			}
		}
		return 1 + max;
	}

}
