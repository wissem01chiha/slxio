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
#include "SimulinkElement.h"
#include "ParameterizedElement.h"

namespace slxio
{
    class SimulinkParameter;

    class SimulinkObject final : public SimulinkElement, ParameterizedElement
    {
    public:
        SimulinkObject();

        std::string GetName() const;
        void SetName(const std::string& name);
        std::string GetVersion() const;
        void SetVersion(const std::string& version);
        std::string GetClassName() const;
        void SetClassName(const std::string& className);
        std::string GetIndex() const;

        std::vector<std::shared_ptr<ISimulinkElement>> GetChildren() const override;
        std::shared_ptr<SimulinkModel> GetModel() const override;
        std::string ToString() const override;

        ~SimulinkObject() = default;

    private:
        friend class SimulinkArray;

        std::string m_index;
        std::string m_version;
        std::string m_propName;
        std::string m_className;
        std::vector<std::shared_ptr<ISimulinkElement>> m_children;
        std::shared_ptr<SimulinkModel> m_model;
    };

}; // namespace slxio
