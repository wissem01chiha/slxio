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

#include "ErrorCategory.h"
#include "ErrorCode.h"

namespace slxio
{
    const char *
    ErrorCategory::name() const noexcept
    {
        return "slxio";
    }

    std::string
    ErrorCategory::message(int ev) const
    {
        switch ( static_cast<ErrorCode>(ev) ) {
            case ErrorCode::Ok:
                return "Success";
            case ErrorCode::InvalidArgument:
                return "Invalid argument";
            case ErrorCode::InvalidHandle:
                return "Invalid handle";
            case ErrorCode::InvalidState:
                return "Invalid state";
            case ErrorCode::DefaultValueUsed:
                return "Default value used";
            case ErrorCode::OperationNotSupported:
                return "Operation not supported";
            case ErrorCode::NullptrReceived:
                return "Nullptr received";
            default:
                return "Unknown error";
        }
    }

    NODISCARD const std::error_category &
    ErrCategory() noexcept
    {
        static const ErrorCategory instance;
        return instance;
    }

};  // namespace slxio