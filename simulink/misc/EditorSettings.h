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

#pragma once

#include "CommonPCH.h"

namespace slxio
{

class EditorSettings final
{
public:
    EditorSettings() = default;
    ~EditorSettings() = default;

    bool GetShowPortDataTypes();
    bool GetSampleTimeColors();
    bool GetShowLineDimensions();
    bool GetShowPortUnits();
    bool GetShowLoopsOnError();
    bool GetShowStorageClass();
    bool GetShowTestPointIcons();
    bool GetShowSignalResolutionIcons();
    bool GetShowViewerIcons();
    bool GetShowVisualizeInsertedRTB();
    bool GetShowMarkup();
    bool GetBlockNameDataTip();
    bool GetBlockParametersDataTip();
    bool GetBlockDescriptionStringDataTip();
    bool GetBlockVariantConditionDataTip();
    bool GetToolBar();
    bool GetStatusBar();
    bool GetBrowserShowLibraryLinks();
    bool GetFunctionConnectors();
    bool GetBrowserLookUnderMasks();
    bool GetMultiThreadCoSim();

private:
    std::string m_libraryLinkDisplay;
    std::string m_portDataTypeDisplayFormat;

    bool m_sampleTimeColors;
    bool m_sampleTimeAnnotations;
    bool m_wideLines;
    bool m_showLineDimensions;
    bool m_showPortDataTypes;
    bool m_showAllPropagatedSignalLabels;
    bool m_showEditTimeErrors;
    bool m_showEditTimeWarnings;
    bool m_showEditTimeAdvisorChecks;
    bool m_showPortUnits;
    bool m_showDesignRanges;
    bool m_showLoopsOnError;
    bool m_ignoreBidirectionalLines;
    bool m_showStorageClass;
    bool m_showTestPointIcons;
    bool m_showSignalResolutionIcons;
    bool m_showViewerIcons;
    bool m_sortedOrder;
    bool m_variantCondition;
    bool m_showSubsystemDomainSpec;
    bool m_executionContextIcon;
    bool m_showLinearizationAnnotations;
    bool m_showVisualizeInsertedRTB;
    bool m_showMarkup;
    bool m_blockNameDataTip;
    bool m_blockParametersDataTip;
    bool m_blockDescriptionStringDataTip;
    bool m_blockVariantConditionDataTip;
    bool m_toolBar;
    bool m_statusBar;
    bool m_browserShowLibraryLinks;
    bool m_functionConnectors;
    bool m_browserLookUnderMasks;
    bool m_multiThreadCoSim;
};

}; // namespace slxio
