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

import org.conqat.engine.commons.findings.FindingCategory;
import org.conqat.engine.commons.findings.FindingGroup;
import org.conqat.engine.commons.node.NodeUtils;
import org.conqat.engine.core.core.AConQATAttribute;
import org.conqat.engine.core.core.AConQATParameter;
import org.conqat.engine.simulink.scope.ISimulinkElement;
import org.conqat.engine.simulink.scope.ISimulinkResource;
import org.conqat.engine.simulink.util.SimulinkFindingUtils;

/**
 * A base class for simulink processors which produce findings.
 * 
 * @author $Author: junkerm $
 * @version $Rev: 39923 $
 * @ConQAT.Rating YELLOW Hash: C4C1F8F92AD4FBBFEE695E134B91616C
 */
public abstract class FindingsBlockTraversingProcessorBase extends
		SimulinkBlockTraversingProcessorBase {

	/** The group used. */
	private FindingGroup group;

	/** Name of the finding group. */
	private String findingGroupName;

	/** The findings category. */
	private String categoryName = "Simulink Guideline Violation";

	/** {@ConQAT.Doc} */
	@AConQATParameter(name = "finding-category", description = "The category of the finding", minOccurrences = 0, maxOccurrences = 1)
	public void setFindingCategory(
			@AConQATAttribute(name = "name", description = "the name of the category") String categoryName) {
		this.categoryName = categoryName;
	}

	/** {@ConQAT.Doc} */
	@AConQATParameter(name = "finding-group", description = "Name of the finding group "
			+ "the results of this assessment should be associatd with", minOccurrences = 1, maxOccurrences = 1)
	public void setFindingGroupName(
			@AConQATAttribute(name = "name", description = "The group name") String groupName) {
		findingGroupName = groupName;
	}

	/** Add key to display list. */
	@Override
	protected void setUp(ISimulinkResource root) {
		FindingCategory category = NodeUtils.getFindingReport(root)
				.getOrCreateCategory(categoryName);
		group = category.getOrCreateFindingGroup(findingGroupName);
		NodeUtils.addToDisplayList(root, getKey());
	}

	/** Returns the key of the class. */
	protected abstract String getKey();

	/** Attaches a finding */
	protected void attachFinding(String message,
			ISimulinkElement element, String id) {
		SimulinkFindingUtils.createAndAttachFinding(group, getClass(), message,
				element, id, getKey());
	}
}