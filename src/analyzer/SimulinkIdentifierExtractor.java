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

import java.util.List;

import org.conqat.engine.commons.util.ConQATInputProcessorBase;
import org.conqat.engine.core.core.AConQATProcessor;
import org.conqat.engine.resource.util.ResourceTraversalUtils;
import org.conqat.engine.simulink.scope.ISimulinkElement;
import org.conqat.engine.simulink.scope.ISimulinkResource;
import org.conqat.lib.commons.collections.CounterSet;
import org.conqat.lib.simulink.model.SimulinkBlock;

/**
 * {@ConQAT.Doc}
 * 
 * @author $Author: deissenb $
 * @version $Rev: 42266 $
 * @ConQAT.Rating GREEN Hash: 5D990BE9DA26A75634EB5C2F43A171D1
 */
@AConQATProcessor(description = "Extracts the identifiers used in the model as a CounterSet of String. "
		+ "Currently this only considers block names.")
public class SimulinkIdentifierExtractor extends
		ConQATInputProcessorBase<ISimulinkResource> {

	/** {@inheritDoc} */
	@Override
	public CounterSet<String> process() {
		CounterSet<String> result = new CounterSet<String>();
		List<ISimulinkElement> elements = ResourceTraversalUtils.listElements(
				input, ISimulinkElement.class);
		for (ISimulinkElement element : elements) {
			process(element.getModel(), result);
		}
		return result;
	}

	/** Processes one block */
	private void process(SimulinkBlock block, CounterSet<String> identifiers) {
		if (block.hasSubBlocks()) {
			for (SimulinkBlock subBlock : block.getSubBlocks()) {
				process(subBlock, identifiers);
			}
		}
		identifiers.inc(block.getName());
	}

}
