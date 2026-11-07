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

import org.conqat.engine.core.core.ConQATException;
import org.conqat.engine.simulink.scope.ISimulinkElement;
import org.conqat.lib.simulink.model.SimulinkBlock;

/**
 * Base class for processors which traverse the blocks of a Simulink model.
 * 
 * @author $Author: deissenb $
 * @version $Rev: 43969 $
 * @ConQAT.Rating GREEN Hash: B5AB9A04D981E25FF940C15EA50FA369
 */
public abstract class SimulinkBlockTraversingProcessorBase extends
		SimulinkModelAnalyzerBase {

	/** Performs traversal of blocks. */
	private void traverse(SimulinkBlock block, ISimulinkElement element)
			throws ConQATException {
		for (SimulinkBlock child : block.getSubBlocks()) {
			traverse(child, element);
		}

		visitBlock(block, element);
	}

	/** Forwards to {@link #traverse(SimulinkBlock, ISimulinkElement)}. */
	@Override
	protected void analyzeModel(ISimulinkElement element)
			throws ConQATException {
		traverse(element.getModel(), element);
	}

	/**
	 * Visits the given block. The containing model node is given to support
	 * adding keys. When this is called for a block, all its children have
	 * already been visited before.
	 */
	protected abstract void visitBlock(SimulinkBlock block,
			ISimulinkElement element) throws ConQATException;

}