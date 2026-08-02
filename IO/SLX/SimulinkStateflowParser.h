// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#include "AbiNamespaceMacro.h"
#include "Libxml2.h"

SLXIO_ABI_NAMESPACE_END

/**
 * This class builds the Stateflow part of the Simulink models.
 */
class StateflowParser final
{

  /** Maps from id to Statflow elements. */
  std::map<std::string, StateflowElementBase> elements;

  /** The model. */
  SimulinkModel model;

  /**
   * Create new Stateflow Parser.
   *
   * @param model
   *            model the parsed Stateflow parts belong to.
   */
  StateflowParser(SimulinkModel model) { this.model = model; }

  /**
   * Build Stateflow parts based on Stateflow section from MDL file.
   *
   * @param stateflowSection
   *            the section from the MDL file that describes the
   * Stateflow part
   * @throws SimulinkModelBuildingException
   *             if a problem occurred during building the Stateflow
   * part
   */
  void buildStateflow(SLXSection stateflowSection) throws SimulinkModelBuildingException
  {

    buildMachine(stateflowSection.getFirstSubSection(SECTION_machine));

    // the Stateflow section in the MDL file is organized in a
    // non-hierachical manner, therefore we simply process one item
    // after each other, store it and build the relations in a second
    // step
    for (SLXSection section : stateflowSection.getSubSections())
    {
      StateflowElementBase < ? > element = createElementFromSectionName(section.getName());
      if (element != null)
      {
        process(section, element);
      }
    }

    for (StateflowElementBase < ? > element : elements.values())
    {
      buildRelation(element);
    }

    for (MDLSection transition : stateflowSection.getSubSections(SECTION_transition))
    {
      buildTransition(transition);
    }
  }

  /**
   * Create Stateflow element from MDL section name. This does not
   * create elements for all sections as some, e.g. transitions are
   * created elsewhere.
   *
   * @return <code>null</code> for unknown section name.
   */
  StateflowElementBase<P> createElementFromSectionName(std::string name)
  {
    if (name.equals(SECTION_chart))
    {
      return new StateflowChart();
    }
    if (name.equals(SECTION_state))
    {
      return new StateflowState();
    }
    if (name.equals(SECTION_junction))
    {
      return new StateflowJunction();
    }
    if (name.equals(SECTION_event))
    {
      return new StateflowEvent();
    }
    if (name.equals(SECTION_data))
    {
      return new StateflowData();
    }
    if (name.equals(SECTION_target))
    {
      return new StateflowTarget();
    }
    return null;
  }

  /** Build machine. */
  void buildMachine(MDLSection machineSection) throws SimulinkModelBuildingException
  {
    if (machineSection == null)
    {
      throw new SimulinkModelBuildingException("No Stateflow machine defined!");
    }

    StateflowMachine machine = new StateflowMachine(model);
    process(machineSection, machine);
  }

  /**
   * Recursively add parameter defined in the section to the Stateflow
   * element and store it in the map {@link #elements}.
   *
   * @throws SimulinkModelBuildingException
   *             if id of the element could be determined or multiple
   * elements with the same id were detected.
   */
        void process(SLXSection section, StateflowElementBase<?> element)
			throws SimulinkModelBuildingException
        {
          addParameters(section, element);

          String id = element.getParameter(PARAM_id);

          if (id == null)
          {
            throw new SimulinkModelBuildingException("Element has no id.", section);
          }
          if (elements.containsKey(id))
          {
            throw new SimulinkModelBuildingException("Duplicate id " + id + ".", section);
          }
          elements.put(id, element);
        }

        /**
         * Recursively add parameter defined in the section to the
         * element.
         */
        void addParameters(SLXSection section, ParameterizedElement element)
        {
          for (Map.Entry<String, String> parameter :
            section.getParameterMapRecursively().entrySet())
          {
            element.setParameter(parameter.getKey(), parameter.getValue());
          }
        }

        /** Build relation for Stateflow element. */
        void buildRelation(StateflowElementBase<P> element) throws SimulinkModelBuildingException
        {
          if (element instanceof StateflowState)
          {
            buildNodeRelation((StateflowState)element, PARAM_treeNode);
            return;
          }
          if (element instanceof StateflowJunction)
          {
            buildNodeRelation((StateflowJunction)element, PARAM_linkNode);
            return;
          }
          if (element instanceof StateflowEvent)
          {
            buildEventRelation((StateflowEvent)element);
            return;
          }
          if (element instanceof StateflowData)
          {
            buildDataRelation((StateflowData)element);
            return;
          }
          if (element instanceof StateflowTarget)
          {
            buildTargetRelation((StateflowTarget)element);
            return;
          }
          if (element instanceof StateflowChart)
          {
            buildChartRelation((StateflowChart)element);
            return;
          }
          if (element instanceof StateflowMachine)
          {
            // the relation for the machine is already built by
            // StateflowMachine.setSimulinkModel()
            return;
          }

          CCSMAssert.fail("Unkown case: " + element.getClass().getName());
        }

        /** Build node relation. */
      private
        void buildNodeRelation(
          StateflowNodeBase node, String relationParam) throws SimulinkModelBuildingException
        {
          StateflowElementBase < ? > relatedElement = getRelatedElement(node, relationParam);
                if (!(relatedElement instanceof IStateflowNodeContainer<?>))
                {
                  throw new SimulinkModelBuildingException(
                    relatedElement + " cannot be parent of " + node);
                }
                IStateflowNodeContainer < ? > parent =
                                              (IStateflowNodeContainer < ? >) relatedElement;
                parent.addNode(node);
        }

        /**
         * Get element related to the given element.
         *
         * @param element
         *            relationship origin
         * @param relationshipParam
         *            parameter that specifies the relationship in the
         * MDL file.
         * @return the related element
         * @throws SimulinkModelBuildingException
         *             if relationship could not be established.
         */
      private
        StateflowElementBase < ? > getRelatedElement(StateflowElementBase < ? > element,
                                     String relationshipParam) throws SimulinkModelBuildingException
        {
          String array = element.getParameter(relationshipParam);
          if (array == null)
          {
            throw new SimulinkModelBuildingException("Relationsship parameter " +
              relationshipParam + " not found for element with id " + element.getStateflowId() +
              ".");
          }
          String[] relationship = SimulinkUtils.getStringParameterArray(array);
          if (relationship.length == 0)
          {
            throw new SimulinkModelBuildingException("Relationsship parameter " +
              relationshipParam + " not found for element with id " + element.getStateflowId() +
              ".");
          }
          return elements.get(relationship[0]);
        }

        /** Build event relation. */
        void buildEventRelation(StateflowEvent element) throws SimulinkModelBuildingException
        {
          StateflowDeclContainerBase < ? > parent = determineParent(element);
          parent.addEvent(element);
        }

        /** Build relation for data. */
        void buildDataRelation(StateflowData element) throws SimulinkModelBuildingException
        {
          StateflowDeclContainerBase < ? > parent = determineParent(element);
          parent.addData(element);
        }

        /** Determine parent of a Stateflow declaration (event or
         * data). */
        StateflowDeclContainerBase<P> determineParent(
          StateflowDeclBase element) throws SimulinkModelBuildingException
        {
          StateflowElementBase < ? > relatedElement = getRelatedElement(element, PARAM_linkNode);
                if (!(relatedElement instanceof StateflowDeclContainerBase<?>))
                {
                  throw new SimulinkModelBuildingException(
                    relatedElement + " cannot be parent of " + element);
                }
                return (StateflowDeclContainerBase<?>) relatedElement;
        }

        /** Build target relation. */
        void buildTargetRelation(StateflowTarget element) throws SimulinkModelBuildingException
        {
          StateflowElementBase < ? > relatedElement = getRelatedElement(element, PARAM_linkNode);
          StateflowMachine parent = castToMachine(relatedElement, element);
          parent.addTarget(element);
        }

        /** Build relation for charts. */
      private
        void buildChartRelation(StateflowChart element) throws SimulinkModelBuildingException
        {
          StateflowElementBase < ? > relatedElement =
                                     elements.get(element.getParameter(PARAM_machine));
          StateflowMachine parent = castToMachine(relatedElement, element);
          String fqName = model.getParameter(PARAM_Name) + "/" + element.getParameter(PARAM_name);
          parent.addChart(fqName, element);
        }

        /**
         * Cast <code>machineElement</code> to machine and check that
         * it is the machine associated with the Simulink model.
         *
         * @param element
         *            the element related to the machine (this is used
         * for possible error message only)
         * @throws SimulinkModelBuildingException
         *             if <code>machineElement</code> does not refer
         * to the only existant machine.
         */
        StateflowMachine castToMachine(
			StateflowElementBase<?> machineElement,
			StateflowElementBase<?> element)
			throws SimulinkModelBuildingException
        {
          if (machineElement != model.getStateflowMachine())
          {
            throw new SimulinkModelBuildingException(
              element + " must belong to machine " + model.getStateflowMachine());
          }
          return (StateflowMachine)machineElement;
        }

        /** Build transition. */
      private
        void buildTransition(MDLSection section) throws SimulinkModelBuildingException
        {
          String srcId = getId(section, SECTION_src);
          String dstId = getId(section, SECTION_dst);

          if (srcId == null && dstId == null)
          {
            logger.warn("Found null->null transition. Ignoring transition.");
            return;
          }

          if (dstId == null)
          {
            logger.warn("Found transition without destination. "
                        "Ignoring transition.");
            return;
          }
          StateflowNodeBase dstNode = getNode(dstId, section);

          // initialize default transition
          StateflowTransition transition;
          if (srcId == null)
          {
            transition = new StateflowTransition(dstNode);
          }
          else
          {
            transition = new StateflowTransition(getNode(srcId, section), dstNode);
          }

          addParameters(section, transition);

          copyIntersection(section, SECTION_src, transition);
          copyIntersection(section, SECTION_dst, transition);
        }

        /**
         * Copies the intersection parameter from the src/dst section
         * to the transition (using src/dst prefix).
         */
      private
        void copyIntersection(
          MDLSection section, String subSectionName, StateflowTransition transition)
        {
          MDLSection subSection = section.getFirstSubSection(subSectionName);
          transition.setParameter(
            subSectionName + "_" + PARAM_intersection, subSection.getParameter(PARAM_intersection));
        }

        /**
         * Get parameter 'id' in the first sub section with a given
         * name.
         */
        String getId(
          MDLSection section, String subSectionName) throws SimulinkModelBuildingException
        {
          MDLSection subSection = section.getFirstSubSection(subSectionName);

          if (subSection == null)
          {
            throw new SimulinkModelBuildingException(
              "Section " + section + " has no child " + subSectionName);
          }

          return subSection.getParameter(PARAM_id);
        }

        /**
         * Get Stateflow node with given id.
         *
         * @throws SimulinkModelBuildingException
         *             if no node was found for the given id.
         */
      private
        StateflowNodeBase getNode(
          String id, MDLSection section) throws SimulinkModelBuildingException
        {
          StateflowElementBase < ? > element = elements.get(id);

          if (element == null)
          {
            throw new SimulinkModelBuildingException(
              "Stateflow element with id " + id + " not found.", section);
          }

          if (!(element instanceof StateflowNodeBase))
          {
            throw new SimulinkModelBuildingException(
              "Only Stateflow nodes can be source or destination of "
              "transitions.",
              section);
          }

          return (StateflowNodeBase)element;
        }
}

SLXIO_ABI_NAMESPACE_END
