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

    NODISCARD std::error_code make_error_code(ErrorCode error) noexcept
    {
        return std::error_code(static_cast<int>(error), make_error_category());
    }

    const char* ErrorCategory::name() const noexcept
    {
        return "slxio";
    }

    std::string ErrorCategory::message(int ev) const
    {
        switch (static_cast<ErrorCode>(ev))
        {
        case ErrorCode::Ok:
            return "success";
        case ErrorCode::ConfigSetParameterNotFound:
            return "simulink config set parameter not found";
        case ErrorCode::ConfigSetParameterInvalid:
            return "simulink config set parameter has an invalid value";
        case ErrorCode::ConfigSetNameEmpty:
            return "simulink config set name is empty";
        case ErrorCode::InvalidArgument:
            return "invalid argument";
        case ErrorCode::ConfigSetInvalid:
            return "invalid simulink config set";
        case ErrorCode::SubBlockAlreadyExist:
            return "a subblock witn same name already exist";
        case ErrorCode::WorkspaceParameterNameEmpty:
            return "model workspace parameter name empty";
        case ErrorCode::SimulinkBlockNull:
            return "a nullptr simulink block object passed";
        case ErrorCode::InvalidArchiveId:
            return "";
        case ErrorCode::NotImplemented:
            return "operation is not implemented";
        default:
            return "unknown error";
        }
    }

    NODISCARD const std::error_category& make_error_category() noexcept
    {
        static const ErrorCategory instance;
        return instance;
    }

}; // namespace slxio