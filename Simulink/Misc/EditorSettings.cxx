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

bool EditorSettings::GetShowPortDataTypes()
{
    return m_showPortDataTypes;
}

bool EditorSettings::GetSampleTimeColors()
{
    return m_sampleTimeColors;
}

bool EditorSettings::GetShowLineDimensions()
{
    return m_showLineDimensions;
}

bool EditorSettings::GetShowPortUnits()
{
    return m_showPortUnits;
}

bool EditorSettings::GetShowLoopsOnError()
{
    return m_showLoopsOnError;
}

bool EditorSettings::GetShowStorageClass()
{
    return m_showStorageClass;
}

bool EditorSettings::GetShowTestPointIcons()
{
    return m_showTestPointIcons;
}

bool EditorSettings::GetShowSignalResolutionIcons()
{
    return m_showSignalResolutionIcons;
}

bool EditorSettings::GetShowViewerIcons()
{
    return m_showViewerIcons;
}

bool EditorSettings::GetShowVisualizeInsertedRTB()
{
    return m_showVisualizeInsertedRTB;
}

bool EditorSettings::GetShowMarkup()
{
    return m_showMarkup;
}

bool EditorSettings::GetBlockNameDataTip()
{
    return m_blockNameDataTip;
}

bool EditorSettings::GetBlockParametersDataTip()
{
    return m_blockParametersDataTip;
}

bool EditorSettings::GetBlockDescriptionStringDataTip()
{
    return m_blockDescriptionStringDataTip;
}

bool EditorSettings::GetBlockVariantConditionDataTip()
{
    return m_blockVariantConditionDataTip;
}

bool EditorSettings::GetToolBar()
{
    return m_toolBar;
}

bool EditorSettings::GetStatusBar()
{
    return m_statusBar;
}

bool EditorSettings::GetBrowserShowLibraryLinks()
{
    return m_browserShowLibraryLinks;
}

bool EditorSettings::GetFunctionConnectors()
{
    return m_functionConnectors;
}

bool EditorSettings::GetBrowserLookUnderMasks()
{
    return m_browserLookUnderMasks;
}

bool EditorSettings::GetMultiThreadCoSim()
{
    return m_multiThreadCoSim;
}

}; // namespace slxio
