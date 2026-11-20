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
#include "ISection.h"

namespace slxio
{

    class MDLSection final : public ISection
    {
    public:
        using SectionPtr = std::shared_ptr<MDLSection>;
        using ParameterMap = ankerl::unordered_dense::map<std::string, std::string>;

        MDLSection() = default;
        MDLSection(std::string name, int lineNumber);
        MDLSection(std::string name,
                   const std::vector<SectionPtr>& sections,
                   const ParameterMap& parameters,
                   int lineNumber);

        MDLSection* GetParentSection() const;
        MDLSection* GetFirstSubSection(const std::string& name) const;

        std::vector<MDLSection*> GetLeafSections() const;
        std::vector<MDLSection*> GetLeafSections(const std::string& name) const;

        int GetLineNumber() const;
        const std::string& GetName() const;

        std::string GetParameter(const std::string& name) const override;
        std::string GetParameter(const std::string& name, const std::string& defaultValue) const;

        ParameterMap GetParameterMapRecursively() const;
        std::vector<std::string> GetParameterNames() const override;
        std::vector<SectionPtr> GetSubSections() const;
        std::vector<SectionPtr> GetSubSections(const std::string& name) const;

        bool HasParameter(const std::string& name) const;
        bool HasSubSection(const std::string& name) const;
        bool HasSubSections() const;

        std::string ToString() const;

        ~MDLSection() override = default;

    private:
        std::string m_name;
        int m_lineNumber = 0;
        MDLSection* m_parentSection = nullptr;
        ParameterMap m_parameters;
        ankerl::unordered_dense::map<std::string, std::vector<SectionPtr>> m_subSections;

        void AddSubSection(const SectionPtr& section);
        void BuildParameterMapRecursively(ParameterMap& map, const std::string& prefix) const;
        void CollectLeafSections(const MDLSection* section, std::vector<MDLSection*>& result) const;
    };

}; // namespace slxio