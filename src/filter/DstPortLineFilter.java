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

import org.conqat.engine.commons.pattern.PatternList;
import org.conqat.engine.core.core.AConQATAttribute;
import org.conqat.engine.core.core.AConQATParameter;
import org.conqat.engine.core.core.AConQATProcessor;
import org.conqat.lib.simulink.model.SimulinkLine;

/**
 * Filters lines based on destination port pattern. This can e.g. be used to
 * filter all lines to trigger/enable ports.
 * 
 * @author deissenb
 * @author $Author: kinnen $
 * @version $Rev: 41751 $
 * @levd.rating GREEN Hash: 62918C1959DE109C56FCC5C904F099F5
 */
@AConQATProcessor(description = "Filters lines based on destination "
		+ "port pattern. This can e.g. be used to filter all "
		+ "lines to trigger/enable ports.")
public class DstPortLineFilter extends SimulinkLineFilterBase {

	/** List of port patterns to filter. */
	private PatternList patternList;

	/** Sets the pattern list used. */
	@AConQATParameter(name = "pattern", minOccurrences = 1, maxOccurrences = 1, description = ""
			+ "A line is discarded if any of the regular expressions in the list matches the destination port index.")
	public void setPatternList(
			@AConQATAttribute(name = "list", description = "The pattern list used for matching.")
			PatternList patternList) {
		this.patternList = patternList;
	}

	/** {@inheritDoc} */
	@Override
	protected boolean isFiltered(SimulinkLine line) {
		return patternList.matchesAny(line.getDstPort().getIndex());
	}

}