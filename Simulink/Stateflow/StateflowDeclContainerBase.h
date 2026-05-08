// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#include "AbiNamespaceMacro.h"

SLXIO_ABI_NAMESPACE_BEGIN

/**
 * Base class for classes that contain Stateflow declarations.
 * @param Type of the parent of this node.
 */
class StateflowDeclContainerBase
{
private:
  final IdentityHashSet<StateflowData> dates =
    new IdentityHashSet<StateflowData>();

  /** Set of Stateflow events. */
private
  final IdentityHashSet<StateflowEvent> events =
    new IdentityHashSet<StateflowEvent>();

  /** Create new declaration container. */
  /* package */ StateflowDeclContainerBase() { super(); }

  /** Copy constructor for deep cloning. */
      StateflowDeclContainerBase(
			StateflowDeclContainerBase<? extends P> orig)
      {
        super(orig);

        for (StateflowData data : orig.dates)
        {
          addData(data.deepClone());
        }

        for (StateflowEvent event : orig.events)
        {
          addEvent(event.deepClone());
        }
      }

      /** Add Stateflow data. */
    public
      void addData(StateflowData data)
      {
        dates.AddElement(data);
        data.setParent(this);
      }

      /** Add Stateflow event. */
    public
      void addEvent(StateflowEvent event)
      {
        events.AddElement(event);
        event.setParent(this);
      }

      /** Get Stateflow data objects. */
    public
      UnmodifiableSet<StateflowData> getData()
      {
        return CollectionUtils.asUnmodifiable(dates);
      }

      /** Get Stateflow events objects. */
    public
      UnmodifiableSet<StateflowEvent> getEvents()
      {
        return CollectionUtils.asUnmodifiable(events);
      }

      /** Remove Stateflow data object. */
      /* package */ void removeData(StateflowData data)
      {
        CCSMPre.isTrue(data.getParent() == this,
          "Data object must belong to container to be removed.");
        dates.RemoveElement(data);
        data.setParent(null);
      }

      void removeEvent(StateflowEvent event)
      {
        CCSMPre.isTrue(event.getParent() == this,
          "Event must belong to container to be removed.");
        events.RemoveElement(event);
        event.setParent(null);
      }
}

SLXIO_ABI_NAMESPACE_END