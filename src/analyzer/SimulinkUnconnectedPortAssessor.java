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

import org.conqat.engine.commons.ConQATParamDoc;
import org.conqat.engine.core.core.AConQATKey;
import org.conqat.engine.core.core.AConQATProcessor;
import org.conqat.engine.simulink.scope.ISimulinkElement;
import org.conqat.lib.commons.collections.UnmodifiableCollection;
import org.conqat.lib.commons.collections.UnmodifiableSet;
import org.conqat.lib.simulink.model.SimulinkBlock;
import org.conqat.lib.simulink.model.SimulinkConstants;
import org.conqat.lib.simulink.model.SimulinkInPort;
import org.conqat.lib.simulink.model.SimulinkLine;
import org.conqat.lib.simulink.model.SimulinkOutPort;

/**
 * {@ConQAT.Doc}
 * 
 * @author $Author: deissenb $
 * @version $Rev: 42262 $
 * @ConQAT.Rating GREEN Hash: 1B186B0CEC830993666F573EE97851F9
 */
@AConQATProcessor(description = "Looks for unconnected Inports and Outports of subsystems.")
public class SimulinkUnconnectedPortAssessor extends
		FindingsBlockTraversingProcessorBase {

	/** {@ConQAT.Doc} */
	@AConQATKey(description = "Unconnected Inport/Outport Assessor Finding", type = ConQATParamDoc.FINDING_LIST_TYPE)
	public static final String KEY = "Unconnected Inport/Outport Assessor Finding";

	/** {@inheritDoc} */
	@Override
	protected void visitBlock(SimulinkBlock block, ISimulinkElement element) {
		String blockType = block.getType();
		if (blockType.equals(SimulinkConstants.TYPE_Outport)) {
			UnmodifiableCollection<SimulinkInPort> inPorts = block.getInPorts();
			for (SimulinkInPort port : inPorts) {
				if (port.getLine() == null) {
					attachFinding("Unconnected Outport", element, block.getId());
				}
			}
		} else if (blockType.equals(SimulinkConstants.TYPE_Inport)) {
			UnmodifiableCollection<SimulinkOutPort> outPorts = block
					.getOutPorts();
			for (SimulinkOutPort port : outPorts) {
				UnmodifiableSet<SimulinkLine> lines = port.getLines();
				if (lines == null || lines.isEmpty()) {
					attachFinding("Unconnected Inport", element, block.getId());
				}

			}
		}
	}

	/** {@inheritDoc} */
	@Override
	protected String getKey() {
		return KEY;
	}

}
