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

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.regex.Pattern;

import org.conqat.engine.commons.ConQATParamDoc;
import org.conqat.engine.core.core.AConQATAttribute;
import org.conqat.engine.core.core.AConQATKey;
import org.conqat.engine.core.core.AConQATParameter;
import org.conqat.engine.core.core.AConQATProcessor;
import org.conqat.engine.core.core.ConQATException;
import org.conqat.engine.simulink.scope.ISimulinkElement;
import org.conqat.lib.simulink.model.SimulinkBlock;

/**
 * {@ConQAT.Doc}
 * 
 * @author Florian Deissenboeck
 * @author $Author: kinnen $
 * @version $Rev: 41751 $
 * @ConQAT.Rating YELLOW Hash: 457157E474A2C029AA1C2A473CDDEE7E
 */
@AConQATProcessor(description = "This processor checks if block parameters "
		+ "conform to a set of rules and creates findings if a block has "
		+ "parameters that are not conform to the rules.")
public class SimulinkBlockParameterAssessor extends PatternBasedBlockTraversingProcessorBase {

	/** {@ConQAT.Doc} */
	@AConQATKey(description = "Parameter Assessment Findings", type = ConQATParamDoc.FINDING_LIST_TYPE)
	public static final String KEY =
			"Parameter Assessment Findings";

	/** default value for the condition parameter **/
	public static final String NONE = "NONE";

	/**
	 * This map from (Block type X parameter name) to rules.  Implementation would be way more elegant if
	 * there was pattern that match no string at all.
	 */
	private final HashMap<String, List<Rule>> patterns =
			new HashMap<String,  List<Rule>>();
	

	/** {@ConQAT.Doc} */
	@AConQATParameter(name = "rule", description = "Add rule to be checked by the processor.", minOccurrences = 1)
	public void addRule(
			@AConQATAttribute(name = "conditionParam", defaultValue=NONE, description="This rule only applies if the condition " +
					"parameter has the value matching conditionPattern") String conditionParameter,
			@AConQATAttribute(name = "conditionPattern", defaultValue=ALLOW_EVERYTHING_PATTERN, description="Pattern against which" +
					" the value of conditionParam is matched") String conditionPatternString,
		    @AConQATAttribute(name = "paramMustExist", defaultValue="false", description="The parameter param must exist") boolean paramMustBePresent,
			@AConQATAttribute(name = "type", description = "Defines block type "
					+ "this rule applies for. Use 'Reference.<type>' for library "
					+ "types. Omit attribute if rule " + "applies for all block types.", defaultValue = ALL_BLOCKS_TYPE) String blockType,
			@AConQATAttribute(name = "param", description = "Defines parameter this "
					+ "rule applies for.") String parameterName,
			@AConQATAttribute(name = "allow", description = "Define legal expressions "
					+ "for this parameter. Omit attribute to allow " + "all values. "
					+ ConQATParamDoc.REGEX_PATTERN_DESC, defaultValue = ALLOW_EVERYTHING_PATTERN) String allowPatternString,
			@AConQATAttribute(name = "deny", description = "Define illegal expressions "
					+ "for this parameter. Omit attribute to deny " + "no values. "
					+ ConQATParamDoc.REGEX_PATTERN_DESC, defaultValue = DENY_EVERYTHING_PATTERN) String denyPatternString)
			throws ConQATException {

		List<Rule> ruleList =
				patterns.get(blockType);

		if (ruleList == null) {
			ruleList =
					new ArrayList<Rule>();
			patterns.put(blockType, ruleList);
		}

		Pattern allowPattern =
				createPattern(allowPatternString, ALLOW_EVERYTHING_PATTERN);

		Pattern denyPattern =
				createPattern(denyPatternString, DENY_EVERYTHING_PATTERN);
		
		Pattern conditionPattern = 
				createPattern(conditionPatternString, ALLOW_EVERYTHING_PATTERN);
		
		ruleList.add(new Rule(conditionParameter, conditionPattern, paramMustBePresent, parameterName, allowPattern, denyPattern));
	}

	/** Check parameters of a block. */
	@Override
	protected void visitBlock(SimulinkBlock block, ISimulinkElement element) {

		
		checkRules(block,patterns.get(block.getResolvedType()),element);
		checkRules(block, patterns.get(ALL_BLOCKS_TYPE),element);
		
	}
	

	/**
	 * Checks if {@code block} conforms to the rules given in {@code rules}.
	 */
	private void checkRules(SimulinkBlock block, List<Rule> rules,
			ISimulinkElement element) {
		if (rules == null) {
			return;
		}
		// getParameterNames() also returns default parameters
		for (Rule rule : rules) {
			if (checkCondition(rule, block)) {
				if (rule.paramMustBePresent
						&& !block.getParameterNames().contains(rule.param)) {
					attachFinding(String.format("Parameter %s not present",
							rule.param), element, block.getId());
				} else {
					String parameterValue = block.getParameter(rule.param);
					if(parameterValue==null){
						continue;
					}

					if (!isAllowed(rule.allow, parameterValue)
							|| isDenied(rule.deny, parameterValue)) {
						String message = "Parameter '" + rule.param
								+ "' has illegal value '" + parameterValue
								+ "'.";

						attachFinding(message, element, block.getId());
					}
				}
			}
		}
	}
		

	/**
	 * Checks if the condition in {@Code rule} holds on block
	 */
	private boolean checkCondition(Rule rule, SimulinkBlock block) {
		if (!rule.conditionParameter.equals(NONE)) {
			String paramValue = block.getParameter(rule.conditionParameter);
			if (paramValue == null) {
				return false;
			}
			return isAllowed(rule.conditionPattern, paramValue);
		}
		return true;
	}

	/** {@inheritDoc} */
	@Override
	protected String getKey() {
		return KEY;
	}
	
	/** 
	 * Class to represent rules. <code>null</code> values are stored to signal
	 * allow-all/deny-all patterns.
	 */
	private class Rule {
		/** Parameter on which a condition is evaluated */
		public String conditionParameter;
		
		/** Pattern that constitutes the condition */
		public Pattern conditionPattern;
		
		/** Flag that signals if the parameter (not the condition parameter)
		 *  must be present */
		public boolean paramMustBePresent;
		
		/** The parameter that gets evaluated */
		public String param;
		
		/** Allowed pattern */
		public Pattern allow;
		
		/** Denied pattern */
		public Pattern deny;

		/** constructor */
		public Rule(String conditionParameter, Pattern conditionPattern,
				boolean paramMustBePresent, String param,Pattern allowPattern, Pattern denyPattern) {
			super();
			this.conditionParameter = conditionParameter;
			this.conditionPattern = conditionPattern;
			this.paramMustBePresent= paramMustBePresent;
			this.param=param;
			this.allow = allowPattern;
			this.deny = denyPattern;
		}
		
		
	}
}