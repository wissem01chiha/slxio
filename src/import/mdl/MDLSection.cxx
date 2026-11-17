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

#include "MDLSection.h"

namespace slxio
{

    MDLSection::MDLSection(std::string name, int lineNumber)
        : name_(std::move(name)), m_lineNumber(lineNumber)
    {
    }

    MDLSection::MDLSection(std::string name,
                           const std::vector<SectionPtr>& sections,
                           const std::unordered_map<std::string, std::string>& parameters,
                           int lineNumber)
        : MDLSection(std::move(name), lineNumber)
    {
        for (const auto& section : sections)
        {
            AddSubSection(section);
        }

        parameters_ = parameters;
    }

    void MDLSection::AddSubSection(const SectionPtr& section)
    {
        section->parentSection_ = this;
        subSections_[section->GetName()].push_back(section);
    }

    MDLSection* MDLSection::GetParentSection() const
    {
        return parentSection_;
    }

    MDLSection* MDLSection::GetFirstSubSection(const std::string& name) const
    {
        auto it = subSections_.find(name);

        if (it == subSections_.end() || it->second.empty())
        {
            return nullptr;
        }

        return it->second.front().get();
    }

    std::vector<MDLSection*> MDLSection::GetLeafSections() const
    {
        std::vector<MDLSection*> result;

        for (const auto& pair : subSections_)
        {
            for (const auto& section : pair.second)
            {
                CollectLeafSections(section.get(), result);
            }
        }

        return result;
    }

    std::vector<MDLSection*> MDLSection::GetLeafSections(const std::string& name) const
    {
        std::vector<MDLSection*> result;

        for (auto* section : GetLeafSections())
        {
            if (section->GetName() == name)
            {
                result.push_back(section);
            }
        }

        return result;
    }

    int MDLSection::GetLineNumber() const
    {
        return m_lineNumber;
    }

    const std::string& MDLSection::GetName() const
    {
        return name_;
    }

    std::string MDLSection::GetParameter(const std::string& name) const
    {
        auto it = parameters_.find(name);

        if (it == parameters_.end())
        {
            return {};
        }

        return it->second;
    }

    std::string MDLSection::GetParameter(const std::string& name,
                                         const std::string& defaultValue) const
    {
        auto it = parameters_.find(name);

        if (it == parameters_.end())
        {
            return defaultValue;
        }

        return it->second;
    }

    std::unordered_map<std::string, std::string> MDLSection::GetParameterMapRecursively() const
    {
        std::unordered_map<std::string, std::string> result;

        BuildParameterMapRecursively(result, "");

        return result;
    }

    std::vector<std::string> MDLSection::GetParameterNames() const
    {
        std::vector<std::string> names;

        names.reserve(parameters_.size());

        for (const auto& p : parameters_)
        {
            names.push_back(p.first);
        }

        return names;
    }

    std::vector<MDLSection::SectionPtr> MDLSection::GetSubSections() const
    {
        std::vector<SectionPtr> result;

        for (const auto& pair : subSections_)
        {
            result.insert(result.end(), pair.second.begin(), pair.second.end());
        }

        return result;
    }

    std::vector<MDLSection::SectionPtr> MDLSection::GetSubSections(const std::string& name) const
    {
        auto it = subSections_.find(name);

        if (it == subSections_.end())
        {
            return {};
        }

        return it->second;
    }

    bool MDLSection::HasParameter(const std::string& name) const
    {
        return parameters_.find(name) != parameters_.end();
    }

    bool MDLSection::HasSubSection(const std::string& name) const
    {
        auto it = subSections_.find(name);

        return it != subSections_.end() && !it->second.empty();
    }

    bool MDLSection::HasSubSections() const
    {
        for (const auto& pair : subSections_)
        {
            if (!pair.second.empty())
            {
                return true;
            }
        }

        return false;
    }

    std::string MDLSection::ToString() const
    {
        std::ostringstream ss;
        ss << name_ << " [l:" << m_lineNumber << "]";
        return ss.str();
    }

    void MDLSection::BuildParameterMapRecursively(std::unordered_map<std::string, std::string>& map,
                                                  const std::string& prefix) const
    {
        std::string currentPrefix = prefix;

        if (!currentPrefix.empty())
        {
            currentPrefix += ".";
        }

        for (const auto& p : parameters_)
        {
            map[currentPrefix + p.first] = p.second;
        }

        for (const auto& section : GetSubSections())
        {
            section->BuildParameterMapRecursively(map, currentPrefix + section->name_);
        }
    }

    void MDLSection::CollectLeafSections(const MDLSection* section,
                                         std::vector<MDLSection*>& result) const
    {
        if (!section->HasSubSections())
        {
            result.push_back(const_cast<MDLSection*>(section));
            return;
        }

        for (const auto& child : section->GetSubSections())
        {
            CollectLeafSections(child.get(), result);
        }
    }

}; // namespace slxio