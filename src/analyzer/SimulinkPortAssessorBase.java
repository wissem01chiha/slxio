package org.conqat.engine.simulink.analyzers;
import org.conqat.engine.simulink.scope.ISimulinkElement;
import org.conqat.lib.simulink.model.SimulinkBlock;
import org.conqat.lib.simulink.model.SimulinkInPort;
import org.conqat.lib.simulink.model.SimulinkOutPort;

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

/**
 * A base class for simulink processors which assess ports.
 * 
 * @author $Author: junkerm $
 * @version $Rev: 39923 $
 * @ConQAT.Rating YELLOW Hash: 816600ED13754129EFB1CBE94256E1C4
 */
public abstract class SimulinkPortAssessorBase
		extends
			FindingsBlockTraversingProcessorBase {

	/** {@inheritDoc} */
	@Override
	protected void visitBlock(SimulinkBlock block, ISimulinkElement element) {
		for (SimulinkInPort port : block.getInPorts()) {
			assessInPort(port, element);
		}
		for (SimulinkOutPort port : block.getOutPorts()) {
			assessOutPort(port, element);
		}
	}

	/**
	 * Assesses an input port
	 * 
	 * @param element
	 */
	protected abstract void assessInPort(SimulinkInPort port,
			ISimulinkElement element);

	/**
	 * Assesses an output port
	 * 
	 * @param element
	 */
	protected abstract void assessOutPort(SimulinkOutPort port,
			ISimulinkElement element);

}
