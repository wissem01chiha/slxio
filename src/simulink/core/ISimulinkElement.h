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
#include "unordered_dense.h"

namespace slxio
{
    /**
     * @class SimulinkElement
     * @brief Base class for Simulink elements.
     * @note Visual Simulink elements may differ from their actual XML
     * file representation. For example, a SimulinkArray is not a direct
     * component of the model, but rather a construct used to group
     * related settings, parameters, or serve other organizational
     * purposes. This class serves as a common base for both
     * visual and structural elements. The key characteristic for
     * inheriting from this class is that the child element must have a
     * unique integer-based Id across the entire model XML file. Elements
     * that rely on string-based identifiers or alternative indexing
     * mechanisms should not inherit from this class.
     */
    class SimulinkElement : public std::enable_shared_from_this<SimulinkElement>
    {
    public:
        virtual ~ISimulinkElement() = default;
        virtual SimulinkElement* New() const = 0;

        /**
         * The default behvaior is that the element do not support nested childern,
         * but for most element they override this to add functionlay for hircacal
         * modeling
         */
        virtual HError Insert(const std::shared_ptr<ISimulinkElement>& element);

        /**
         * This function is push type‑specific behavior to avoid dynamic-pointer
         * cast in the caller scope when insperting elements, because it's not save,
         * each elment should define hwo should it be inserted in a large tree, the
         * cller's just dispatch to  this
         */
        virtual HError AcceptInsert(ISimulinkElement& parent) = 0;

        /**
         * Finds a child element by identifier.
         * Default implementation: lookup in m_children.
         * Returns nullptr if not found or if element does not support children,
         * for recursive lookup use  fucntion
         */
        virtual std::shared_ptr<ISimulinkElement> Find(const SId& id) const;

        /** Finds a child bu identifer in all the tree, return nullptr if not found
         */
        virtual std::shared_ptr<ISimulinkElement> FindRecursive(const SId& id) const;

        /** Removes a child element by identifier. */
        virtual HError Erase(const SId& id);

        /** Removes all children. */
        virtual void Clear();

        /** Checks if a child exists. */
        virtual bool Contains(const SId& id) const;

        /** return a refrence to the element parent if exist, else nullptr */
        std::weak_ptr<ISimulinkElement> GetParent() const;

        /** Set the parent for this element */
        void SetParent(const std::shared_ptr<ISimulinkElement>& parent);

        /** Returns the unique identifier of this element, most Simulink element
         * representaion, in xml files support SID indexation
         */
        virtual SId GetId() const = 0;

        /** If the Object id is mutable override this function to let setting
         * manully the Id */
        virtual void SetId(const SId& id)
        {
            return;
        };

        /** children can overload for convience, default is empty string */
        virtual std::string ToString() const;

    protected:
        std::unordered_map<SId, std::shared_ptr<ISimulinkElement>>& GetChildren();
        const std::unordered_map<SId, std::shared_ptr<ISimulinkElement>>& GetChildren() const;

        std::vector<std::shared_ptr<ISimulinkElement>>& GetOrderedChildren();
        const std::vector<std::shared_ptr<ISimulinkElement>>& GetOrderedChildren() const;

    private:
        /**
         * a non owning refrence to the parent, childern do not own parent elments,
         * jut hold a link toward them
         */
        std::weak_ptr<SimulinkElement> m_parent;

        /** flat hashMap for fast lookup and less memory fragmentation */
        std::unordered_dense<SId, std::shared_ptr<ISimulinkElement>> m_children;

        /** list for preserves insertion order and allows indexed access.  */
        std::vector<std::shared_ptr<ISimulinkElement>> m_childrenOrder;
    };

}; // namespace slxio