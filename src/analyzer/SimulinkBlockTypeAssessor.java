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

import java.util.HashSet;

import org.conqat.engine.commons.ConQATParamDoc;
import org.conqat.engine.core.core.AConQATAttribute;
import org.conqat.engine.core.core.AConQATKey;
import org.conqat.engine.core.core.AConQATParameter;
import org.conqat.engine.core.core.AConQATProcessor;
import org.conqat.engine.simulink.scope.ISimulinkElement;
import org.conqat.lib.simulink.model.SimulinkBlock;

/**
 * {@ConQAT.Doc}
 * 
 * @author $Author: kinnen $
 * @version $Rev: 41751 $
 * @levd.rating GREEN Hash: 8EDF620183AD203EE8CB7B6B82E11307
 */
@AConQATProcessor(description = "This processor attaches findings to blocks of specified types.")
public class SimulinkBlockTypeAssessor extends
		FindingsBlockTraversingProcessorBase {

	/** {@ConQAT.Doc} */
	@AConQATKey(description = "Block Type Assessment Findings", type = ConQATParamDoc.FINDING_LIST_TYPE)
	public static final String KEY = "BlockTypeFindings";

	/** Set of prohibited types. */
	private final HashSet<String> prohibitedTypes = new HashSet<String>();

	/** Add prohibited type. */
	@AConQATParameter(name = "prohibit", description = "Add prohibited type", minOccurrences = 1)
	public void addProhibitedType(
			@AConQATAttribute(name = "type", description = "Name of of prohibited "
					+ "type. Use 'Reference.<type>' for library types.") String blockType) {
		prohibitedTypes.add(blockType);
	}

	/** Check if block has prohibited type. */
	@Override
	protected void visitBlock(SimulinkBlock block, ISimulinkElement element) {
		String type = block.getResolvedType();

		if (prohibitedTypes.contains(type)) {
			String message = "Prohibited type '" + type + "'.";
			String id = block.getId();
			attachFinding(message, element, id);
		}
	}

	/** {@inheritDoc} */
	@Override
	protected String getKey() {
		return KEY;
	}
}