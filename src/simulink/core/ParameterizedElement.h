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

namespace slxio
{

    class SimulinkParameter;

    using SimulinkParameterPtr = std::shared_ptr<SimulinkParameter>;

    class ParameterizedElement
    {
    protected:
        ParameterizedElement();

        ParameterizedElement(const ParameterizedElement& Other);

    public:
        virtual ~ParameterizedElement() = default;

        /**
         * Get parameter specified by name. This takes default parameters into
         * account.
         */
        SimulinkParameterPtr GetDeclaredParameter(const std::string& Name) const;

        std::unordered_set<std::string> GetDeclaredParameterNames() const;

        /**
         * Get parameter specified by name. This takes default parameters into
         * account.
         */
        SimulinkParameterPtr GetParameter(const std::string& Name) const;

        /**
         * Get parameter names. This does not take default parameters
         * into account.
         */
        std::unordered_set<std::string> GetParameterNames() const;

        void SetParameter(const std::string& Name, SimulinkParameterPtr Value);

        std::string String() const;

    protected:
        SimulinkParameterPtr GetDefaultParameter(const std::string& Name) const;

        virtual std::unordered_set<std::string> GetDefaultParameterNames() const;

    private:
        ankerl::unordered_dense::map<std::string, SimulinkParameterPtr> m_parameters;
    };

} // namespace slxio