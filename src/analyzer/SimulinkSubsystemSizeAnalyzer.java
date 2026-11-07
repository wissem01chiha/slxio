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

import java.util.ArrayList;
import java.util.List;

import org.conqat.engine.commons.node.NodeUtils;
import org.conqat.engine.core.core.AConQATKey;
import org.conqat.engine.core.core.AConQATProcessor;
import org.conqat.engine.core.core.ConQATException;
import org.conqat.engine.simulink.scope.ISimulinkElement;
import org.conqat.engine.simulink.scope.ISimulinkResource;
import org.conqat.lib.commons.collections.CounterSet;
import org.conqat.lib.commons.collections.UnmodifiableCollection;
import org.conqat.lib.commons.math.MathUtils;
import org.conqat.lib.simulink.model.SimulinkBlock;
import org.conqat.lib.simulink.model.SimulinkConstants;

/**
 * {@ConQAT.Doc}
 * 
 * @author $Author: deissenb $
 * @version $Rev: 42206 $
 * @ConQAT.Rating GREEN Hash: C4B6564C2E947B6BAEBCCB8E56F1C313
 */
@AConQATProcessor(description = "Determines the distribution of subsystem size for Simulink models.")
public class SimulinkSubsystemSizeAnalyzer extends SimulinkModelAnalyzerBase {

	/** {@ConQAT.Doc} */
	@AConQATKey(description = "Largest subsystem", type = "java.lang.Integer")
	public static final String LARGEST_SUBSYSTEM_KEY = "Largest subsystem";

	/** {@ConQAT.Doc} */
	@AConQATKey(description = "Distribution of subsystem sizes", type = "org.conqat.lib.commons.collections.CounterSet<Integer>")
	private static final String SUBSYSTEM_SIZES_KEY = "Subsystem sizes";

	/** {@inheritDoc} */
	@Override
	protected void setUp(ISimulinkResource root) throws ConQATException {
		super.setUp(root);
		NodeUtils.addToDisplayList(root, LARGEST_SUBSYSTEM_KEY,
				SUBSYSTEM_SIZES_KEY);
	}

	/** {@inheritDoc} */
	@Override
	protected void analyzeModel(ISimulinkElement element) {
		CounterSet<Integer> sizeDistribution = new CounterSet<Integer>();
		process(element.getModel(), sizeDistribution);
		element.setValue(SUBSYSTEM_SIZES_KEY, sizeDistribution);
		element.setValue(LARGEST_SUBSYSTEM_KEY,
				MathUtils.max(sizeDistribution.getKeys()));

	}

	/** Processes one block */
	private void process(SimulinkBlock block,
			CounterSet<Integer> sizeDistribution) {
		sizeDistribution.inc(filterInOutPorts(block.getSubBlocks()).size());
		UnmodifiableCollection<SimulinkBlock> subBlocks = block.getSubBlocks();
		for (SimulinkBlock subBlock : subBlocks) {
			if (subBlock.getType().equals("SubSystem")) {
				process(subBlock, sizeDistribution);
			}
		}
	}

	/** Filters In and Outports */
	private List<SimulinkBlock> filterInOutPorts(
			UnmodifiableCollection<SimulinkBlock> blocks) {
		List<SimulinkBlock> result = new ArrayList<SimulinkBlock>();
		for (SimulinkBlock block : blocks) {
			if (!block.getType().equals(SimulinkConstants.TYPE_Inport)
					&& !block.getType().equals(SimulinkConstants.TYPE_Outport)) {
				result.add(block);
			}
		}
		return result;
	}

}
