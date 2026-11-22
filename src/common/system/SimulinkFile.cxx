/*
 * Copyright 2025-2026 Wissem Chiha
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

#include "SimulinkFile.h"
#include "SimulinkFileInfo.h"
#include "Error.h"

namespace slxio
{

    namespace
    {

        std::string GetContentType(const SimulinkFile& file)
        {
            if (file.m_mwcoreProperties)
            {
                auto mwcore = file.m_mwcoreProperties.child("mwcoreProperties");
                if (mwcore)
                {
                    return mwcore.child("contentType").text().as_string();
                }
            }
            return std::string();
        }

        std::string GetContentTypeFriendlyName(const SimulinkFile& file)
        {
            if (file.m_mwcoreProperties)
            {
                auto mwcore = file.m_mwcoreProperties.child("mwcoreProperties");
                if (mwcore)
                {
                    return mwcore.child("contentTypeFriendlyName").text().as_string();
                }
            }
            return std::string();
        }

        std::string GetMatlabRelease(const SimulinkFile& file)
        {
            if (file.m_mwcoreProperties)
            {
                auto mwcore = file.m_mwcoreProperties.child("mwcoreProperties");
                if (mwcore)
                {
                    return mwcore.child("matlabRelease").text().as_string();
                }
            }
            return std::string();
        }

        std::string GetCategory(const SimulinkFile& file)
        {
            if (file.m_coreProperties)
            {
                auto core = file.m_coreProperties.child("cp:coreProperties");
                if (core)
                {
                    return core.child("cp:category").text().as_string();
                }
            }
            return std::string();
        }

        std::string GetCreator(const SimulinkFile& file)
        {
            if (file.m_coreProperties)
            {
                auto root = file.m_coreProperties.child("cp:coreProperties");
                if (root)
                {
                    const auto creator = root.child("dc:creator");
                    if (creator)
                    {
                        return creator.text().as_string();
                    }
                }
            }
            return std::string();
        }

        std::string GetVersion(const SimulinkFile& file)
        {
            if (file.m_coreProperties)
            {
                auto root = file.m_coreProperties.child("cp:coreProperties");
                if (root)
                {
                    const auto version = root.child("cp:version");
                    if (version)
                    {
                        return version.text().as_string();
                    }
                }
            }
            return std::string();
        }

        std::string GetRevision(const SimulinkFile& file)
        {
            if (file.m_coreProperties)
            {
                auto root = file.m_coreProperties.child("cp:coreProperties");
                if (root)
                {
                    const auto version = root.child("cp:revision");
                    if (version)
                    {
                        return version.text().as_string();
                    }
                }
            }
            return std::string();
        }

        std::string GetModified(const SimulinkFile& file)
        {
            if (file.m_coreProperties)
            {
                auto root = file.m_coreProperties.child("cp:coreProperties");
                if (root)
                {
                    const auto version = root.child("dcterms:modified");
                    if (version)
                    {
                        return version.text().as_string();
                    }
                }
            }
            return std::string();
        }

#if SIMULINK_COMPATIBILTY_2024
        GraphicalInterfaceInfo GetGraphicalInterfaceInfo(const SimulinkFile& file)
        {
            GraphicalInterfaceInfo info;

            if (!file.m_graphicalInterface)
            {
                return info;
            }

            yyjson_val* root = yyjson_obj_get(yyjson_doc_get_root(file.m_graphicalInterface),
                                              "GraphicalInterface");
            if (!root)
            {
                return info;
            }

            if (auto* v = yyjson_obj_get(root, "PreCompExecutionDomainType"))
            {
                info.m_preCompExecutionDomainType = yyjson_get_str(v);
            }

            if (auto* v = yyjson_obj_get(root, "ExternalFileReferences"))
            {
                if (yyjson_is_arr(v))
                {
                    info.m_numExternalFileReferences = std::to_string(yyjson_arr_size(v));
                }
            }

            return info;
        }
#else

        GraphicalInterfaceInfo GetGraphicalInterfaceInfo(const SimulinkFile& file)
        {
            if (file.m_graphicalInterface)
            {
                auto root = file.m_graphicalInterface.child("GraphicalInterface");
                if (root)
                {
                    GraphicalInterfaceInfo info;

                    for (auto p : root.children("P"))
                    {
                        const std::string name = p.attribute("Name").as_string();
                        const std::string value = p.text().as_string();

                        if (name == "NumRootInports")
                            info.m_numRootInports = value;
                        else if (name == "NumRootOutports")
                            info.m_numRootOutports = value;
                        else if (name == "ParameterArgumentNames")
                            info.m_parameterArgumentNames = value;
                        else if (name == "NumModelReferences")
                            info.m_numModelReferences = value;
                        else if (name == "NumTestPointedSignals")
                            info.m_numTestPointedSignals = value;
                        else if (name == "NumProvidedFunctions")
                            info.m_numProvidedFunctions = value;
                        else if (name == "NumRequiredFunctions")
                            info.m_numRequiredFunctions = value;
                        else if (name == "NumResetEvents")
                            info.m_numResetEvents = value;
                        else if (name == "HasInitializeEvent")
                            info.m_hasInitializeEvent = value;
                        else if (name == "HasTerminateEvent")
                            info.m_hasTerminateEvent = value;
                        else if (name == "PreCompExecutionDomainType")
                            info.m_preCompExecutionDomainType = value;
                        else if (name == "IsExportFunctionModel")
                            info.m_isExportFunctionModel = value;
                        else if (name == "IsArchitectureModel")
                            info.m_isArchitectureModel = value;
                        else if (name == "NumParameterArguments")
                            info.m_numParameterArguments = value;
                        else if (name == "NumExternalFileReferences")
                            info.m_numExternalFileReferences = value;
                        else if (name == "OrderedModelArguments")
                            info.m_orderedModelArguments = value;
                    }

                    return info;
                }
            }

            return GraphicalInterfaceInfo{};
        }
#endif
    } // namespace

    SimulinkFileInfo GetInfo(const SimulinkFile& file)
    {
        SimulinkFileInfo info;
        info.m_extension = "slx";
        info.m_contentType = GetContentType(file);
        info.m_contentTypeFriendlyName = GetContentTypeFriendlyName(file);
        info.m_matlabRelease = GetMatlabRelease(file);
        info.m_category = GetCategory(file);
        info.m_creator = GetCreator(file);
        info.m_version = GetVersion(file);
        info.m_revision = GetRevision(file);
        info.m_modified = GetModified(file);
        info.m_graphicalInterfaceInfo = GetGraphicalInterfaceInfo(file);

        return info;
    }

    void SetInfo(SimulinkFile& file, const SimulinkFileInfo& info)
    {
        return;
    }

}; // namespace slxio