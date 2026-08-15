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
class SLXIO_APIEXPORT ISimulinkElement : public IParameterizedObject,
                                         public IObservable
{
public:
    /** Default destructor. */
    virtual ~ISimulinkElement() = default;

    /** Creates a new instance of this element. */
    virtual ISimulinkElement* New() const = 0;

    /** Deleted copy assignment operator. */
    ISimulinkElement& operator=(const ISimulinkElement&) = delete;

    /** Deleted move constructor. */
    ISimulinkElement(ISimulinkElement&& other) = delete;

    /** Deleted move assignment operator. */
    ISimulinkElement& operator=(ISimulinkElement&& other) = delete;

    /** The defula behvaior is that the element do not support nested childern,
     * but for most element they override this to add functionlay for hircacal
     * modeling
     */
    virtual HError Insert(const std::shared_ptr<ISimulinkElement>& element);

    /** Finds a child element by identifier.
     * Default implementation: lookup in m_children.
     * Returns nullptr if not found or if element does not support children.
     */
    virtual std::shared_ptr<ISimulinkElement> Find(const SId& id);

    /** return a refrence to the element parent if exist, else nullptr */
    std::weak_ptr<ISimulinkElement> GetParent() const;

    /** Returns the unique identifier of this element, most Simulink element
     * representaion, in xml files support SID indexation
     */
    virtual SId GetId() const = 0;

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