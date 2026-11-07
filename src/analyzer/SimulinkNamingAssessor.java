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

import java.util.regex.Pattern;

import org.conqat.engine.commons.ConQATParamDoc;
import org.conqat.engine.core.core.AConQATKey;
import org.conqat.engine.core.core.AConQATProcessor;
import org.conqat.engine.simulink.scope.ISimulinkElement;
import org.conqat.lib.simulink.model.SimulinkBlock;
import org.conqat.lib.simulink.model.SimulinkConstants;

/**
 * {@ConQAT.Doc}
 * 
 * @author $Author: deissenb $
 * @version $Rev: 42265 $
 * @ConQAT.Rating GREEN Hash: 4EEA2AE14E8767A795DD3E7EFD58C43D
 */
@AConQATProcessor(description = "Assesses the conformance of subsystem names to the "
		+ "naming conventions jc_0201, jc_0211 of the MAAB guidelines.")
public class SimulinkNamingAssessor extends
		FindingsBlockTraversingProcessorBase {

	/** {@ConQAT.Doc} */
	@AConQATKey(description = "Illegal name Finding", type = ConQATParamDoc.FINDING_LIST_TYPE)
	public static final String KEY = "Illegal name";

	/** The pattern for jc_0201 and jc_0211 */
	private static final Pattern PATTERN_1 = Pattern
			.compile("^([a-zA-Z](([a-zA-Z0-9]|(_[a-zA-Z0-9]))*))$");

	/** The pattern for jc_0231 */
	private static final Pattern PATTERN_2 = Pattern
			.compile("^([a-zA-Z]([a-zA-Z0-9_\\\\n ]*))$");

	/** {@inheritDoc} */
	@Override
	protected void visitBlock(SimulinkBlock block, ISimulinkElement element) {
		if ((SimulinkConstants.TYPE_SubSystem.equals(block.getType())
				|| SimulinkConstants.TYPE_Inport.equals(block.getType()) || SimulinkConstants.TYPE_Outport
					.equals(block.getType()))
				&& !PATTERN_1.matcher(block.getName()).matches()) {
			attachFinding(
					"Invalid name for " + block.getType() + ": '"
							+ block.getName() + "'", element, block.getId());
		} else if (!PATTERN_2.matcher(block.getName()).matches()) {
			attachFinding("Invalid name for block: '" + block.getName() + "'",
					element, block.getId());
		}

	}

	/** {@inheritDoc} */
	@Override
	protected String getKey() {
		return KEY;
	}
}
