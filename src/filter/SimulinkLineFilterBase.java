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

import org.conqat.engine.simulink.analyzers.SimulinkBlockTraversingProcessorBase;
import org.conqat.engine.simulink.scope.ISimulinkElement;
import org.conqat.lib.simulink.model.SimulinkBlock;
import org.conqat.lib.simulink.model.SimulinkLine;

/**
 * Base class for filters on lines.
 * 
 * @author $Author: kinnen $
 * @version $Rev: 41751 $
 * @levd.rating GREEN Hash: 72788412245D24BA55527E78D9374711
 */
public abstract class SimulinkLineFilterBase extends
		SimulinkBlockTraversingProcessorBase {

	/** {@inheritDoc} */
	@Override
	public void visitBlock(SimulinkBlock block, ISimulinkElement element) {
		for (SimulinkLine line : block.getOutLines()) {
			if (isFiltered(line)) {
				line.remove();
			}
		}

	}

	/** Returns whether the given line should be filtered. */
	protected abstract boolean isFiltered(SimulinkLine line);
}