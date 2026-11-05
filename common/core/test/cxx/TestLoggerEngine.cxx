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

#include "Doctest.h"
#include "LoggerEngine.h"
#include "LoggerEngineOptions.h"

namespace slxio
{

TEST_CASE("LoggerEngine stores its options")
{
    LoggerEngineOptions options;
    options.enableLogging = false;
    options.logFilePath = "test.log";
    options.maxLogFileSize = 4096;

    LoggerEngine engine(options);

    CHECK_FALSE(engine.GetOptions().enableLogging);
    CHECK(engine.GetOptions().logFilePath == "test.log");
    CHECK(engine.GetOptions().maxLogFileSize == 4096);
    CHECK(engine.GetOptions().m_nthreads == 1);
    CHECK(engine.GetOptions().m_queueSize == 8192);
}

} // namespace slxio