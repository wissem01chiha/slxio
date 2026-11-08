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
class LoggerOptions;
class Diagnostic;

class Logger final
{
public:
    Logger() = default;
    explicit Logger(const LoggerOptions& options);
    Logger(const Logger&) = delete;
    Logger& operator=(const Logger&) = delete;
    void Init();
    void Log(const Diagnostic& diagnostic);
    void Flush() const;

    const LoggerOptions& GetOptions() const;

private:
    std::unique_ptr<LoggerOptions> m_options;
};

}; // namespace slxio