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

import org.conqat.engine.commons.CommonUtils;
import org.conqat.engine.core.core.ConQATException;

/**
 * Base class for processors that assess simulink models using patterns.
 * 
 * @author $Author: junkerm$
 * @version $Rev: 39923 $
 * @ConQAT.Rating YELLOW Hash: 89FFBF009C0C56801EA5E8471A9EBEE6
 */
public abstract class PatternBasedBlockTraversingProcessorBase extends
		FindingsBlockTraversingProcessorBase {

	/** Type constant used if rule is specified for all block types. */
	protected static final String ALL_BLOCKS_TYPE =
			"_ALL_BLOCKS_";

	/**
	 * Constant that stand for a pattern that matches everything. Note: This
	 * pattern is not actually used, it serves as marker only.
	 */
	protected static final String ALLOW_EVERYTHING_PATTERN = ".*";

	/**
	 * Constant that stand for a pattern that matches nothing. Note: This
	 * pattern is not actually used, it serves as marker only.
	 */
	protected static final String DENY_EVERYTHING_PATTERN = 	"**";

	/**
	 * Create pattern from string. Returns <code>null</code> if the the pattern
	 * string equals the marker string.
	 */
	protected Pattern createPattern(String patternString, String markerString)
			throws ConQATException {
		if (markerString.equals(patternString)) {
			return null;
		}

		return CommonUtils.compilePattern(patternString);
	}

	/** Checks if value is allowed. */
	protected boolean isAllowed(Pattern allowPattern, String value) {
		if (allowPattern == null) {
			return true;
		}
		return allowPattern.matcher(value).matches();
	}

	/** Checks if value is denied. */
	protected boolean isDenied(Pattern denyPattern, String value) {
		if (denyPattern == null) {
			return false;
		}
		return denyPattern.matcher(value).matches();
	}
}
