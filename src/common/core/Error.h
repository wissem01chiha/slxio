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
#include "Compiler.h"

namespace slxio
{

    enum class error_code : int
    {
        Ok = 0,
        InvalidArgument = 1,
        ConfigSetParameterNotFound = 2,
        ConfigSetNameEmpty = 3,
        ConfigSetInvalid = 4,
        SubBlockAlreadyExist = 5,
    };

    /// Define a custom error category for  error codes
    class error_category final : public std::error_category
    {
    public:
        const char* name() const noexcept override;
        std::string message(int ev) const override;
    };

    /// Convert an slxio::error_code to std::error_code.
    NODISCARD std::error_code make_error_code(error_code error) noexcept;

    /// Return a reference to an std::error_category for custom error codes
    NODISCARD const std::error_category& make_error_category() noexcept;

}; // namespace slxio