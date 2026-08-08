// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef EDITORSETTINGS_H
#define EDITORSETTINGS_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Base Class for MATLAB editor settings
 */
class SLXIO_APIEXPORT EditorSettings final
{
public:
  EditorSettings() = default;
  ~EditorSettings() = default;

  bool getShowPortDataTypes();
  bool getSampleTimeColors();
  bool getShowLineDimensions();
  bool getShowPortUnits();
  bool getShowLoopsOnError();
  bool getShowStorageClass();
  bool getShowTestPointIcons();
  bool getShowSignalResolutionIcons();
  bool getShowViewerIcons();
  bool getShowVisualizeInsertedRTB();
  bool getShowMarkup();
  bool getBlockNameDataTip();
  bool getBlockParametersDataTip();
  bool getBlockDescriptionStringDataTip();
  bool getBlockVariantConditionDataTip();
  bool getToolBar();
  bool getStatusBar();
  bool getBrowserShowLibraryLinks();
  bool getFunctionConnectors();
  bool getBrowserLookUnderMasks();
  bool getMultiThreadCoSim();

private:
  const char* LibraryLinkDisplay;
  const char* PortDataTypeDisplayFormat;
  bool SampleTimeColors;
  bool SampleTimeAnnotations;
  bool WideLines;
  bool ShowLineDimensions;
  bool ShowPortDataTypes;
  bool ShowAllPropagatedSignalLabels;
  bool ShowEditTimeErrors;
  bool ShowEditTimeWarnings;
  bool ShowEditTimeAdvisorChecks;
  bool ShowPortUnits;
  bool ShowDesignRanges;
  bool ShowLoopsOnError;
  bool IgnoreBidirectionalLines;
  bool ShowStorageClass;
  bool ShowTestPointIcons;
  bool ShowSignalResolutionIcons;
  bool ShowViewerIcons;
  bool SortedOrder;
  bool VariantCondition;
  bool ShowSubsystemDomainSpec;
  bool ExecutionContextIcon;
  bool ShowLinearizationAnnotations;
  bool ShowVisualizeInsertedRTB;
  bool ShowMarkup;
  bool BlockNameDataTip;
  bool BlockParametersDataTip;
  bool BlockDescriptionStringDataTip;
  bool BlockVariantConditionDataTip;
  bool ToolBar;
  bool StatusBar;
  bool BrowserShowLibraryLinks;
  bool FunctionConnectors;
  bool BrowserLookUnderMasks;
  bool MultiThreadCoSim;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // EDITORSETTINGS_H
