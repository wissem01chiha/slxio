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
package org.conqat.engine.simulink.filters;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Set;

import org.conqat.lib.commons.collections.IdentityHashSet;
import org.conqat.lib.commons.collections.UnmodifiableSet;
import org.conqat.engine.core.core.AConQATProcessor;
import org.conqat.engine.simulink.analyzers.SimulinkBlockTraversingProcessorBase;
import org.conqat.engine.simulink.scope.ISimulinkElement;
import org.conqat.lib.simulink.model.SimulinkBlock;
import org.conqat.lib.simulink.model.SimulinkConstants;
import org.conqat.lib.simulink.model.SimulinkInPort;
import org.conqat.lib.simulink.model.SimulinkLine;
import org.conqat.lib.simulink.model.SimulinkModel;
import org.conqat.lib.simulink.model.SimulinkOutPort;

/**
 * {@ConQAT.Doc}
 * 
 * @author $Author: deissenb $
 * @version $Rev: 34252 $
 * @levd.rating GREEN Hash: 397E71238A44D087368E753A12160D11
 */
@AConQATProcessor(description = "This processor tunnels lines through subsystem boundaries. "
		+ "More exactly for each subsystem it removes the inport and outport sub-blocks and "
		+ "wires the blocks formerly connected to them directly to the corresponding blocks.")
public class PortTunneler extends SimulinkBlockTraversingProcessorBase {

	/** The port parameter. */
	private static final String PARAM_PORT = "Port";

	/** The list of input ports. */
	private final Set<SimulinkBlock> inputs = new IdentityHashSet<SimulinkBlock>();

	/** The list of output ports. */
	private final Set<SimulinkBlock> outputs = new IdentityHashSet<SimulinkBlock>();

	/** Collect all inports and outports. */
	@Override
	protected void visitBlock(SimulinkBlock block, ISimulinkElement element) {

		// do not collect top level ports, as we can not remove them without
		// changing the meaning.
		if (block.getParent() instanceof SimulinkModel) {
			return;
		}

		if (block.getType().equals(SimulinkConstants.TYPE_Outport)) {
			outputs.add(block);
		}
		if (block.getType().equals(SimulinkConstants.TYPE_Inport)) {
			inputs.add(block);
		}
	}

	/**
	 * Clear the lists of inports and outports, to make sure no ports from a
	 * previous model are left over.
	 */
	@Override
	protected void setUpModel(ISimulinkElement element) {
		inputs.clear();
		outputs.clear();
	}

	/**
	 * Remove the blocks collected in
	 * {@link #visitBlock(SimulinkBlock, ISimulinkElement)}.
	 */
	@Override
	protected void finishModel(ISimulinkElement element) {
		for (SimulinkBlock block : outputs) {
			removeOutport(block);
		}

		for (SimulinkBlock block : inputs) {
			removeInport(block);
		}
	}

	/** Removes the given output port. */
	private void removeOutport(SimulinkBlock outPort) {
		SimulinkLine inLine = outPort.getInPorts().iterator().next().getLine();

		String portIndex = outPort.getParameter(PARAM_PORT);
		UnmodifiableSet<SimulinkLine> outLines = outPort.getParent()
				.getOutPort(portIndex).getLines();

		joinLines(inLine, outLines);
		outPort.remove();
	}

	/** Removes the given input port. */
	private void removeInport(SimulinkBlock inPort) {
		String portIndex = inPort.getParameter(PARAM_PORT);
		SimulinkLine inLine = inPort.getParent().getInPort(portIndex).getLine();

		joinLines(inLine, inPort.getOutLines());
		inPort.remove();
	}

	/**
	 * Wires all input with all output lines (i.e. their resp. sources and
	 * targets) and kill these lines.
	 */
	private void joinLines(SimulinkLine inLine,
			Collection<SimulinkLine> outLines) {

		SimulinkOutPort srcPort = null;
		if (inLine != null) {
			srcPort = inLine.getSrcPort();
			inLine.remove();
		}

		for (SimulinkLine line : new ArrayList<SimulinkLine>(outLines)) {
			SimulinkInPort dstPort = line.getDstPort();
			line.remove();

			if (srcPort != null) {
				new SimulinkLine(srcPort, dstPort);
			}
		}
	}

}