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

enum class ValidationSeverity
{
    Error,
    Warning,
    Info
};

struct ValidationIssue
{
    ValidationSeverity severity;
    std::string path;
    std::string message;
};

class ValidationReport final
{
public:
    void AddError(std::string path, std::string message);
    void AddWarning(std::string path, std::string message);

    void Append(const ValidationReport& other, const std::string& pathPrefix);

    bool IsValid() const;
    const std::vector<ValidationIssue>& GetIssues() const;

private:
    std::vector<ValidationIssue> m_issues;
};

} // namespace slxio