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

#include <pugixml.h>
#include "CommonPCH.h"

namespace slxio
{
    struct SimulinkFileInfo;

    /**
     * A Simulink model file, combining metadata and XML
     * sections.
     */
    struct SimulinkFile
    {
        pugi::xml_document m_blockdiagram;
        pugi::xml_document m_modelDictionary;
        pugi::xml_document m_configSetInfo;
        pugi::xml_document m_bddefaults;
        pugi::xml_document m_scheduleEditor;
        pugi::xml_document m_scheduleCore;
        pugi::xml_document m_graphicalInterface;
        pugi::xml_document m_coreProperties;
        pugi::xml_document m_mwcoreProperties;
        pugi::xml_document m_mwcorePropertiesExtension;
        std::vector<pugi::xml_document> m_configSets;
    };

    SimulinkFileInfo GetInfo(const SimulinkFile& file);
    SimulinkFileInfo GetSimulinkFileInfo(const fs::path& path);

    void SetInfo(SimulinkFile& file, const SimulinkFileInfo& info);

    SimulinkFile Import(const fs::path& path);
    fs::path Flush(const SimulinkFile& file);

}; // namespace slxio
