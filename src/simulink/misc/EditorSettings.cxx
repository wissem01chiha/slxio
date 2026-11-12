/*
 * Copyright 2026 Wissem Chiha
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "EditorSettings.h"

namespace slxio
{
    std::string ToString(const EditorSettings& settings)
    {
        std::ostringstream oss;

        oss << "EditorSettings {\n"
            << "  LibraryLinkDisplay: \"" << settings.m_libraryLinkDisplay << "\"\n"
            << "  PortDataTypeDisplayFormat: \"" << settings.m_portDataTypeDisplayFormat << "\"\n"

            << "  SampleTimeColors: " << std::boolalpha << settings.m_sampleTimeColors << "\n"
            << "  SampleTimeAnnotations: " << settings.m_sampleTimeAnnotations << "\n"
            << "  WideLines: " << settings.m_wideLines << "\n"
            << "  ShowLineDimensions: " << settings.m_showLineDimensions << "\n"
            << "  ShowPortDataTypes: " << settings.m_showPortDataTypes << "\n"
            << "  ShowAllPropagatedSignalLabels: " << settings.m_showAllPropagatedSignalLabels
            << "\n"
            << "  ShowEditTimeErrors: " << settings.m_showEditTimeErrors << "\n"
            << "  ShowEditTimeWarnings: " << settings.m_showEditTimeWarnings << "\n"
            << "  ShowEditTimeAdvisorChecks: " << settings.m_showEditTimeAdvisorChecks << "\n"
            << "  ShowPortUnits: " << settings.m_showPortUnits << "\n"
            << "  ShowDesignRanges: " << settings.m_showDesignRanges << "\n"
            << "  ShowLoopsOnError: " << settings.m_showLoopsOnError << "\n"
            << "  IgnoreBidirectionalLines: " << settings.m_ignoreBidirectionalLines << "\n"
            << "  ShowStorageClass: " << settings.m_showStorageClass << "\n"
            << "  ShowTestPointIcons: " << settings.m_showTestPointIcons << "\n"
            << "  ShowSignalResolutionIcons: " << settings.m_showSignalResolutionIcons << "\n"
            << "  ShowViewerIcons: " << settings.m_showViewerIcons << "\n"
            << "  SortedOrder: " << settings.m_sortedOrder << "\n"
            << "  VariantCondition: " << settings.m_variantCondition << "\n"
            << "  ShowSubsystemDomainSpec: " << settings.m_showSubsystemDomainSpec << "\n"
            << "  ExecutionContextIcon: " << settings.m_executionContextIcon << "\n"
            << "  ShowLinearizationAnnotations: " << settings.m_showLinearizationAnnotations << "\n"
            << "  ShowVisualizeInsertedRTB: " << settings.m_showVisualizeInsertedRTB << "\n"
            << "  ShowMarkup: " << settings.m_showMarkup << "\n"
            << "  BlockNameDataTip: " << settings.m_blockNameDataTip << "\n"
            << "  BlockParametersDataTip: " << settings.m_blockParametersDataTip << "\n"
            << "  BlockDescriptionStringDataTip: " << settings.m_blockDescriptionStringDataTip
            << "\n"
            << "  BlockVariantConditionDataTip: " << settings.m_blockVariantConditionDataTip << "\n"
            << "  ToolBar: " << settings.m_toolBar << "\n"
            << "  StatusBar: " << settings.m_statusBar << "\n"
            << "  BrowserShowLibraryLinks: " << settings.m_browserShowLibraryLinks << "\n"
            << "  FunctionConnectors: " << settings.m_functionConnectors << "\n"
            << "  BrowserLookUnderMasks: " << settings.m_browserLookUnderMasks << "\n"
            << "  MultiThreadCoSim: " << settings.m_multiThreadCoSim << "\n"
            << "}";

        return oss.str();
    }

}; // namespace slxio
