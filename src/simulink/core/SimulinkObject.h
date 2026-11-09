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
#include "Error.h"

namespace slxio
{
    class SimulinkParameter;
    class SimulinkElement;
    class SimulinkArray;

    /**
     * Class for Simulink objects, which are a construct for
     * structured storage of meta-data in the model.
     */
    class SimulinkObject final
    {
    public:
        SimulinkObject() = default;
        ~SimulinkObject() override;

        ISimulinkElement* New() const override;
        // objects can only be inserted into other objects, so the parent must be an
        // object
        HError AcceptInsert(ISimulinkElement& parent) override;
        HError Insert(const std::shared_ptr<ISimulinkElement>& element) override;
        SId GetId() const override;
        void SetId(const SId& id) override;

        void AddParam(const std::string& name,
                      const std::shared_ptr<IParameterObjectBase>& p) override;
        void SetParam(const std::string& name,
                      const std::shared_ptr<IParameterObjectBase>& p) override;
        std::shared_ptr<IParameterObjectBase> GetParam(const std::string& name) override;

        std::string GetName() const;
        void SetName(const std::string& name);
        std::string GetClassName() const;
        void SetClassName(const std::string& className);
        std::string GetVersion() const;
        void SetVersion(const std::string& version);

        std::string ToString() const override;

        /** Return an array with the current object if not found return nullptr ! */
        std::shared_ptr<ISimulinkElement> GetArray(const SId& id) const;

    private:
        SId m_id;
        std::string m_version;
        std::string m_propName;
        std::string m_className;
        std::vector<std::shared_ptr<ISimulinkElement>> m_arrays;
        std::vector<std::shared_ptr<IParameterObjectBase>> m_parameters;
    };

    SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULINKOBJECT_H
