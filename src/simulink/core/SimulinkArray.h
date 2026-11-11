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
#include "ISimulinkElement.h"
#include "ParameterizedElement.h"

namespace slxio
{
    class SimulinkParameter;
    class SimulinkModel;

    class SimulinkArray final : public SimulinkElement, ParameterizedElement
    {
    public:
        SimulinkArray();

        std::string GetName() const;
        void SetName(const std::string& name);
        void SetType(const std::string& type);
        std::string GetDimension() const;
        void SetDimension(const std::string& dimension);

        std::vector<std::shared_ptr<ISimulinkElement>> GetChildren() const override;
        std::shared_ptr<SimulinkModel> GetModel() const override;

        std::string ToString() const override;

        ~SimulinkArray() = default;

    private:
        friend class SimulinkObject;

        std::string m_index;
        std::string m_type;
        std::string m_name;
        std::string m_dimension;
        std::shared_ptr<SimulinkModel> m_model;
        std::vector<std::string> m_objects;
        std::vector<std::shared_ptr<ISimulinkElement>> m_children;
    };

}; // namespace slxio
