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
#include "SimulinkFileInfo.h"

namespace slxio
{
    class DataObject;

    /**
     * A Simulink model file, combining metadata and XML
     * sections.
     */
    struct SimulinkFile
    {
        SimulinkFileInfo m_info;

        std::unique_ptr<DataObject> m_blockdiagram;
        DataObject& m_modelDictionary;
        DataObject& m_configSetInfo;
        DataObject& m_bddefaults;
        DataObject& m_scheduleEditor;
        DataObject& m_scheduleCore;
        DataObject& m_graphicalInterface;
        DataObject& m_coreProperties;
        DataObject& m_mwcoreProperties;
        std::vector<DataObject> m_configSets;
    };

}; // namespace slxio
