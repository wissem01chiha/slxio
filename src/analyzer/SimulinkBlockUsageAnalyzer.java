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

import org.conqat.engine.commons.util.ConQATInputProcessorBase;
import org.conqat.engine.core.core.AConQATProcessor;
import org.conqat.engine.resource.util.ResourceTraversalUtils;
import org.conqat.engine.simulink.scope.ISimulinkElement;
import org.conqat.engine.simulink.scope.ISimulinkResource;
import org.conqat.lib.commons.collections.CounterSet;
import org.conqat.lib.simulink.model.SimulinkBlock;

/**
 * This processor creates a counter set for the distribution of block types
 * through the models.
 * 
 * @author $Author: kinnen $
 * @version $Rev: 41751 $
 * @ConQAT.Rating GREEN Hash: E1CCF4CBE7DF61BABFF504F6ACE3FE3C
 */
@AConQATProcessor(description = "This processor creates a counter set for the "
		+ "distribution of block types through the models.")
public class SimulinkBlockUsageAnalyzer extends
		ConQATInputProcessorBase<ISimulinkResource> {

	/** Created result. */
	private final CounterSet<String> result = new CounterSet<String>();

	/** {@inheritDoc} */
	@Override
	public CounterSet<String> process() {
		for (ISimulinkElement element : ResourceTraversalUtils.listElements(
				input, ISimulinkElement.class)) {
			traverseBlock(element.getModel());
		}
		return result;
	}

	/** Performs traversal of blocks. */
	private void traverseBlock(SimulinkBlock block) {
		for (SimulinkBlock child : block.getSubBlocks()) {
			traverseBlock(child);
		}
		result.inc(block.getResolvedType());
	}
}