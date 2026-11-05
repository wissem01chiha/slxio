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

enum class Errc : int
{
    Ok =0, /// Success status code.
    InvalidArgument = 1, /// An invalid argument was passed to a function.
    InvalidHandle = 2, /// A required object handle is invalid.
    InvalidState = 3, /// The object is in an invalid state.
    DefaultValueUsed = 4, /// A default value was used because none was provided.
    OperationNotSupported = 5, /// a not supported callback or function being invoked on an object or class
    /// this is a very generic error status and modules can specify on which class,
    /// component or function the operation was invoked
    LoggerNullptrReceived = 6, /// A nullptr object of type ILogger passed to a function, for concrete logger's
    /// implementations nullptr use specific error code for each logger
    ILoggerNullptrReceived = 7, /// A nullptr object of type ILogger passed to a function, for concrete implementations 
    ///nullptr use specific error code for each logger
};

const std::error_category& ErrorCategory() noexcept;

NODISCARD inline std::error_code make_error_code(Errc e) noexcept
{
    return std::error_code(static_cast<int>(e), ErrorCategory());
}

template <> struct std::is_error_code_enum<Errc> : std::true_type
{
};

} // namespace slxio