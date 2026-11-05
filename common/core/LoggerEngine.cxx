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

#include "CommonPCH.h"
#include "LoggerEngine.h"
#include "LoggerEngineOptions.h"
#include "Spdlog.h"
#include "Diagnostic.h"

namespace slxio
{
LoggerEngine::LoggerEngine(const LoggerEngineOptions &options)
    : m_options(std::make_unique<LoggerEngineOptions>(options))
{
}

void LoggerEngine::Init()
{
    // queue with 8k items and 1 backing thread.
    spdlog::init_thread_pool(m_options->m_queueSize, m_options->m_nthreads);
    auto async_file = spdlog::basic_logger_mt<spdlog::async_factory>("background_logger", m_options->logFilePath);
    spdlog::set_default_logger(async_file);
    spdlog::set_level(spdlog::level::info);
}

void LoggerEngine::Log(const Diagnostic& diagnostic)
{
    if (m_options->enableLogging) {
        spdlog::info("{}", diagnostic.GetMessage());
    }
}

const LoggerEngineOptions& LoggerEngine::GetOptions() const
{
    return *m_options;
}
} // namespace slxio
