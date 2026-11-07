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

import org.conqat.lib.commons.string.StringUtils;
import org.conqat.engine.commons.ConQATParamDoc;
import org.conqat.engine.core.core.AConQATAttribute;
import org.conqat.engine.core.core.AConQATKey;
import org.conqat.engine.core.core.AConQATParameter;
import org.conqat.engine.core.core.AConQATProcessor;
import org.conqat.engine.simulink.scope.ISimulinkElement;
import org.conqat.lib.simulink.model.SimulinkBlock;
import org.conqat.lib.simulink.model.SimulinkLine;
import org.conqat.lib.simulink.util.SimulinkUtils;

/**
 * {@ConQAT.Doc}
 * 
 * @author $Author: kinnen $
 * @version $Rev: 41751 $
 * @levd.rating GREEN Hash: 7D6A2D254436FF8B6DD3FB9872D9BEFE
 */
@AConQATProcessor(description = "This processor checks if the "
		+ "ratio of lines routed from right to left to all lines "
		+ "does not cross a given threshold.")
public class LeftRightOrientationAssessor extends
		FindingsBlockTraversingProcessorBase {

	/** {@ConQAT.Doc} */
	@AConQATKey(description = "Left-Right Orientation Assessment Findings", type = ConQATParamDoc.FINDING_LIST_TYPE)
	public static final String KEY = "LeftRightOrientationFindings";

	/** Default threshold that is used if no threshold was specified. */
	private static final double DEFAULT_THRESHOLD = 0.2;

	/** The threshold. */
	private double threshold = DEFAULT_THRESHOLD;

	/** Total number of lines (per model). */
	private int totalLineCount;

	/** Number of lines with right-left orientation (per model). */
	private int rlLineCount;

	/** {@ConQAT.Doc} */
	@AConQATParameter(name = "threshold", description = "Set threshold "
			+ "(ratio of line with right-left orienation to"
			+ "toal number of lines)", maxOccurrences = 1)
	public void setThreshold(
			@AConQATAttribute(name = "value", description = "Threshold value [default: "
					+ DEFAULT_THRESHOLD + "]") double value) {
		threshold = value;
	}

	/** Reset counter values. */
	@Override
	protected void setUpModel(ISimulinkElement element) {
		totalLineCount = 0;
		rlLineCount = 0;
	}

	/** Evaluate result and create message if necessary. */
	@Override
	protected void finishModel(ISimulinkElement model) {
		if (totalLineCount == 0) {
			return;
		}
		double ratio = (double) rlLineCount / totalLineCount;

		if (ratio > threshold) {
			String message = rlLineCount + " of " + totalLineCount
					+ " lines have right to left orientation ("
					+ StringUtils.formatAsPercentage(ratio) + ")";
			attachFinding(message, model, model.getId());
		}
	}

	/** Count lines and lines with left-right orientation. */
	@Override
	protected void visitBlock(SimulinkBlock block, ISimulinkElement element) {
		for (SimulinkLine line : block.getOutLines()) {
			totalLineCount++;
			if (isRightToLeft(line)) {
				rlLineCount++;
			}
		}
	}

	/** Checks if a line a has right to left orientation . */
	private boolean isRightToLeft(SimulinkLine line) {
		String srcPosition = line.getSrcPort().getBlock().getParameter(
				"Position");
		int srcX = SimulinkUtils.getIntParameterArray(srcPosition)[0];

		String dstPosition = line.getDstPort().getBlock().getParameter(
				"Position");
		int dstX = SimulinkUtils.getIntParameterArray(dstPosition)[0];

		return srcX > dstX;
	}

	/** {@inheritDoc} */
	@Override
	protected String getKey() {
		return KEY;
	}
}