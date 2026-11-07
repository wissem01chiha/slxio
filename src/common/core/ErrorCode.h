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

    enum class ErrorCode : int
    {
        Ok = 0,                      /// Success status code.
        InvalidArgument = 1,         /// An invalid argument was passed to a function.
        InvalidHandle = 2,           /// A required object handle is invalid.
        InvalidState = 3,            /// The object is in an invalid state.
        DefaultValueUsed = 4,        /// A default value was used because none was provided.
        OperationNotSupported = 5,   /// Unsupported callback or function invocation.
        NullptrReceived = 6,         /// A nullptr object was passed to a function.
        ChildNullptrReceived = 7,    /// Child object is nullptr.
        ChildTypeNotSupported = 8,   /// Child type is not supported.
        ChildDuplicateId = 9,        /// Child with the same ID already exists.
        ChildNotFound = 10,          /// Child object was not found.
        ParentTypeNotSupported = 11  /// Parent type is not supported.
    };

    /// Convert an ErrorCode to std::error_code.
    NODISCARD std::error_code make_error_code(ErrorCode error) noexcept;

};  // namespace slxio