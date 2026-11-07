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

import org.conqat.engine.core.core.ConQATException;
import org.conqat.engine.simulink.scope.ISimulinkElement;
import org.conqat.engine.simulink.util.SimulinkElementProcessorBase;

/**
 * Base class for processors that analyze Simulink models.
 * 
 * @author $Author: kinnen $
 * @version $Rev: 41751 $
 * @ConQAT.Rating GREEN Hash: 4DBF4BEDCE7286B367C3B5933CF28543
 */
public abstract class SimulinkModelAnalyzerBase extends
		SimulinkElementProcessorBase {

	/**
	 * Defines protocol of this class, i.e. calls
	 * {@link #setUpModel(ISimulinkElement)},
	 * {@link #analyzeModel(ISimulinkElement)},
	 * {@link #finishModel(ISimulinkElement)} (in this order).
	 */
	@Override
	protected final void processElement(ISimulinkElement element)
			throws ConQATException {
		setUpModel(element);
		analyzeModel(element);
		finishModel(element);
	}

	/**
	 * Factory method called before traversing the blocks of the given model
	 * node. Default implementation does nothing.
	 */
	@SuppressWarnings("unused")
	protected void setUpModel(ISimulinkElement element) throws ConQATException {
		// nothing
	}

	/**
	 * Factory method called after traversing the blocks of the given model
	 * node. Default implementation does nothing.
	 */
	@SuppressWarnings("unused")
	protected void finishModel(ISimulinkElement element) throws ConQATException {
		// nothing
	}

	/** Override method to implement model analysis. */
	protected abstract void analyzeModel(ISimulinkElement element)
			throws ConQATException;

}