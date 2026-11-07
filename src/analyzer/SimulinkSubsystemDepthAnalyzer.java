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

import java.util.HashSet;
import java.util.Set;

import org.conqat.engine.core.core.AConQATKey;
import org.conqat.engine.core.core.AConQATProcessor;
import org.conqat.engine.simulink.scope.ISimulinkElement;
import org.conqat.lib.commons.collections.UnmodifiableCollection;
import org.conqat.lib.commons.math.MathUtils;
import org.conqat.lib.simulink.model.SimulinkBlock;
import org.conqat.lib.simulink.model.SimulinkConstants;

/**
 * {@ConQAT.Doc}
 * 
 * @author $Author: deissenb $
 * @version $Rev: 42206 $
 * @ConQAT.Rating GREEN Hash: FBCCF68ADD667B89CCBCB4FA94E4FD78
 */
@AConQATProcessor(description = "Determines the maximum subsystem depth for Simulink models.")
public class SimulinkSubsystemDepthAnalyzer extends SimulinkModelAnalyzerBase {

	/** {@ConQAT.Doc} */
	@AConQATKey(description = "Subsystem depth", type = "java.lang.Integer")
	public static final String KEY = "Subsystem depth";

	/** {@inheritDoc} */
	@Override
	protected void analyzeModel(ISimulinkElement element) {
		element.setValue(KEY, depth(element.getModel()));
	}

	/** Determines the depth of the given block */
	private int depth(SimulinkBlock block) {
		if (block.getType().equals(SimulinkConstants.TYPE_SubSystem)
				|| block.getType().equals(SimulinkConstants.TYPE_Model)) {
			UnmodifiableCollection<SimulinkBlock> subBlocks = block
					.getSubBlocks();
			if (subBlocks.isEmpty()) {
				// empty subsystem; count as an additional level
				return 1;
			}
			Set<Integer> depths = new HashSet<Integer>();
			for (SimulinkBlock subBlock : subBlocks) {
				depths.add(depth(subBlock));
			}
			return 1 + (int) MathUtils.max(depths);
		}

		// block level
		return 0;
	}

}
