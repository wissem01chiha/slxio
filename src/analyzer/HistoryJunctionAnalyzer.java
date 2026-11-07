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

import org.conqat.engine.commons.ConQATParamDoc;
import org.conqat.engine.core.core.AConQATKey;
import org.conqat.engine.core.core.AConQATProcessor;
import org.conqat.engine.simulink.scope.ISimulinkElement;
import org.conqat.lib.simulink.model.SimulinkConstants;
import org.conqat.lib.simulink.model.stateflow.StateflowJunction;
import org.conqat.lib.simulink.util.SimulinkUtils;

/**
 * {@ConQAT.Doc}
 * 
 * @author $Author: steidl $
 * @version $Rev: 43637 $
 * @ConQAT.Rating GREEN Hash: 3CA8E01A0134D4A9436950D5B9EEBC55
 */
@AConQATProcessor(description = "This processor checks if a model contains "
		+ "history junctions. For models which contain such junctions, a finding is created.")
public class HistoryJunctionAnalyzer extends StateflowAnalyzerBase {

	/** {@ConQAT.Doc} */
	@AConQATKey(description = "History Junction Assessment Findings", type = ConQATParamDoc.FINDING_LIST_TYPE)
	public static final String KEY = "HistoryJunctionFindings";

	/** Constant for junction type. */
	private static String HISTORY_JUNCTION_TYPE = "HISTORY_JUNCTION";

	/** Checks if a junctions is a history junction. */
	@Override
	protected void analyzeJunction(StateflowJunction junction,
			ISimulinkElement element) {

		String type = junction.getParameter(SimulinkConstants.PARAM_type);

		if (type == null) {
            getLogger().warn(
                    "Model " + element.getId()
                            + " contains junction without type");
			return;
		}

		if (HISTORY_JUNCTION_TYPE.equals(type)) {
			String id = SimulinkUtils.getBlock(junction).getId();
			String message = "Prohibited type '" + type + "'.";
			attachFinding(message, element, id);
		}
	}

	/** {@inheritDoc} */
	@Override
	protected String getKey() {
		return KEY;
	}
}