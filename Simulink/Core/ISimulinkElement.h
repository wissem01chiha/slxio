// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ISIMULINKELEMENT_H
#define ISIMULINKELEMENT_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IErrorHandler.h"
#include "ILogger.h"
#include "IObservable.h"
#include "IParameterizedObject.h"
#include "PlatformTypes.h"
#include "SimulinkPCH.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class ISimulinkElement
 * @brief Base class for Simulink elements.
 * @note Visual Simulink elements may differ from their actual XML
 * file representation. For example, a SimulinkArray is not a direct
 * component of the model, but rather a construct used to group
 * related settings, parameters, or serve other organizational
 * purposes. This class serves as a common base for both
 * visual and structural elements. The key characteristic for
 * inheriting from this class is that the child element must have a
 * unique integer-based ID across the entire model XML file. Elements
 * that rely on string-based identifiers or alternative indexing
 * mechanisms should not inherit from this class.
 * @todo Separate base interfaces for concrete Simulink model elements
 * and implementation-specific elements.
 */
class SLXIO_APIEXPORT ISimulinkElement
    : public IParameterizedObject,
      public IObservable,
      public std::enable_shared_from_this<ISimulinkElement>
{
public:
    /** Default destructor. */
    virtual ~ISimulinkElement() = default;

    /** Creates a new instance of this element. */
    virtual ISimulinkElement* New() const = 0;

    /** The defula behvaior is that the element do not support nested childern,
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

    /** Finds a child element by identifier.
     * Default implementation: lookup in m_children.
     * Returns nullptr if not found or if element does not support children,
     * for recursive lookup use  fucntion
     */
    virtual std::shared_ptr<ISimulinkElement> Find(const SId& id) const;

    /** Finds a child bu identifer in all the tree, return nullptr if not found
     */
    virtual std::shared_ptr<ISimulinkElement>
    FindRecursive(const SId& id) const;

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
    virtual void SetId(const SId& id){};

    /** Set a logger object for this data object, this automaticlly propagte
     *  the logger to all implemented childers unless overriden by themself for
     * specif use cases */
    HError SetLogger(ILogger* logger);

    /** Get the logger sink */
    const ILogger* GetLogger() const;

    /** Set a error handler object for this element */
    HError SetErrorHandler(IErrorHandler* handler);

    /** Get the error handler object */
    const IErrorHandler* GetErrorHandler() const;

    /** children can oveload for convience, default is empty string */
    virtual std::string ToString() const;

protected:
    /** a non owning refrence to the parent, childern do not own parent elments,
     * jut hold a link toward them */
    std::weak_ptr<ISimulinkElement> m_parent;

    ILogger* m_logger = nullptr;

    IErrorHandler* m_error = nullptr;

    /** Flat hashMap for fast lookup and less memory fragmentation */
    std::unordered_map<SId, std::shared_ptr<ISimulinkElement>> m_children;

    /** list for preserves insertion order and allows indexed access.  */
    std::vector<std::shared_ptr<ISimulinkElement>> m_childrenOrder;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // ISIMULINKELEMENT_H