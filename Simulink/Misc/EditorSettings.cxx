#include "EditorSettings.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

bool EditorSettings::getShowPortDataTypes()
{
  return ShowPortDataTypes;
}

bool EditorSettings::getSampleTimeColors()
{
  return SampleTimeColors;
}

bool EditorSettings::getShowLineDimensions()
{
  return ShowLineDimensions;
}

bool EditorSettings::getShowPortUnits()
{
  return ShowPortUnits;
}

bool EditorSettings::getShowLoopsOnError()
{
  return ShowLoopsOnError;
}

bool EditorSettings::getShowStorageClass()
{
  return ShowStorageClass;
}

bool EditorSettings::getShowTestPointIcons()
{
  return ShowTestPointIcons;
}

bool EditorSettings::getShowSignalResolutionIcons()
{
  return ShowSignalResolutionIcons;
}

bool EditorSettings::getShowViewerIcons()
{
  return ShowViewerIcons;
}

bool EditorSettings::getShowVisualizeInsertedRTB()
{
  return ShowVisualizeInsertedRTB;
}

bool EditorSettings::getShowMarkup()
{
  return ShowMarkup;
}

bool EditorSettings::getBlockNameDataTip()
{
  return BlockNameDataTip;
}

bool EditorSettings::getBlockParametersDataTip()
{
  return BlockParametersDataTip;
}

bool EditorSettings::getBlockDescriptionStringDataTip()
{
  return BlockDescriptionStringDataTip;
}

bool EditorSettings::getBlockVariantConditionDataTip()
{
  return BlockVariantConditionDataTip;
}

bool EditorSettings::getToolBar()
{
  return ToolBar;
}

bool EditorSettings::getStatusBar()
{
  return StatusBar;
}

bool EditorSettings::getBrowserShowLibraryLinks()
{
  return BrowserShowLibraryLinks;
}

bool EditorSettings::getFunctionConnectors()
{
  return FunctionConnectors;
}

bool EditorSettings::getBrowserLookUnderMasks()
{
  return BrowserLookUnderMasks;
}

bool EditorSettings::getMultiThreadCoSim()
{
  return MultiThreadCoSim;
}

SLXIO_ABI_NAMESPACE_END
};
