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

#include "Error.h"

namespace slxio
{

NODISCARD std::error_code make_error_code(error_code error) noexcept
{
    return std::error_code(static_cast<int>(error), make_error_category());
}

const char* error_category::name() const noexcept
{
    return "slxio";
}

std::string error_category::message(int ev) const
{
    switch (static_cast<error_code>(ev))
    {
    case error_code::Ok:
        return "Success";
    case error_code::InvalidArgument:
        return "Invalid argument";
    case error_code::InvalidHandle:
        return "Invalid handle";
    case error_code::InvalidState:
        return "Invalid state";
    case error_code::DefaultValueUsed:
        return "Default value used";
    case error_code::OperationNotSupported:
        return "Operation not supported";
    case error_code::NullptrReceived:
        return "Nullptr received";
    default:
        return "Unknown error";
    }
}

NODISCARD const std::error_category& make_error_category() noexcept
{
    static const error_category instance;
    return instance;
}

}; // namespace slxio