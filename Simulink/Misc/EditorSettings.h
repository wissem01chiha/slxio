// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef EDITORSETTINGS_H
#define EDITORSETTINGS_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "MiscPCH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Base Class for MATLAB editor settings
 */
class SLXIO_APIEXPORT EditorSettings final
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

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // EDITORSETTINGS_H
