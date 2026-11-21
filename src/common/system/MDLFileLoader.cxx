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

#include "MDLFileLoader.h"
#include "MDLFile.h"
#include "Config.h"

namespace slxio
{
    MDLFile MDLFileLoader::Load(const fs::path& directory, ErrorCode& ec)
    {
        return MDLFile();
    }

    ErrorCode MDLFileLoader::LoadGraphicalInterface(MDLFile& file, const fs::path& directory)
    {
        return ErrorCode::Ok;
    }

} // namespace slxio
