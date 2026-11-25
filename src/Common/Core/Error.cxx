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
        case ErrorCode::ParameterNotFound:
            return "parameter not found";
        case ErrorCode::InvalidParameter:
            return "parameter has an invalid value";
        case ErrorCode::InvalidParameterName:
            return "parameter name is empty or invalid";
        case ErrorCode::InvalidArgument:
            return "invalid argument";
        case ErrorCode::InvalidConfigSet:
            return "invalid simulink config set";
        case ErrorCode::BlockAlreadyExists:
            return "a block or subblock with same name already exist";
        case ErrorCode::InvalidSimulinkBlock:
            return "a nullptr simulink block object passed";
        case ErrorCode::LoadGraphicalInterfaceFail:
            return "failed to load graphicalInterface file";
        case ErrorCode::LoadCorePropertiesFail:
            return "failed to load core properties";
        case ErrorCode::FileSystemError:
            return "file system error";
        case ErrorCode::InvalidDataType:
            return "invalid data type";
        case ErrorCode::LoadMwCorePropertiesFail:
            return "failed to load mwcoreProperties.xml";
        case ErrorCode::LoadMwCorePropertiesExtensionFail:
            return "failed to load mwcorePropertiesExtension.xml";
        case ErrorCode::LoadConfigSetInfoFail:
            return "failed to load configSetInfo.xml";
        case ErrorCode::LoadBlockDiagramFail:
            return "failed to load blockdiagram.xml";
        case ErrorCode::LoadModelDictionaryFail:
            return "failed to load modelDictionary.xml";
        case ErrorCode::LoadBdDefaultsFail:
            return "failed to load bddefaults.xml";
        case ErrorCode::LoadScheduleEditorFail:
            return "failed to load scheduleEditor.xml";
        case ErrorCode::LoadScheduleCoreFail:
            return "failed to load scheduleCore.xml";
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