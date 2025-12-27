#include "SLXHandler.h"

SLXIO_ABI_NAMESPACE_BEGIN

SLXHandler::SLXHandler() {}

void SLXHandler::startElement(std::string uri, std::string localName,
                              std::string qName, const char *attributes) {
  if (std::string(SimulinkConstant::SECTION_ModelInformation) == (localName)) {
    MutableSLXSection *modelInformation = new MutableSLXSection(
        SimulinkConstant::SECTION_ModelInformation, locator);
    stack.push_back(*modelInformation);
    return;
  }

  if (stack.empty()) {
    //   throw new SAXException("Slx file does not start with
    //   ModelInformation");
  }

  startInnerElement(localName, attributes);
}

void SLXHandler::startInnerElement(std::string localName,
                                   const char *attributes) {
  // switch (localName) {
  // case SECTION_Parameter:
  //   startParameterElement(attributes);
  //   break;
  // case SECTION_Block:
  //   createSubSectionWithAttributes(localName, attributes, PARAM_Name,
  //                                  PARAM_BlockType, PARAM_SID);
  //   break;
  // case SECTION_Object:
  //   createSubSectionWithAttributes(localName, attributes, PARAM_PropName,
  //                                  PARAM_ObjectID, PARAM_ClassName);
  //   break;
  // case SECTION_Array:
  //   createSubSectionWithAttributes(localName, attributes, PARAM_PropName,
  //                                  PARAM_Type, PARAM_Dimension);
  //   break;
  // case SECTION_state:
  // case SECTION_transition:
  // case SECTION_junction:
  // case SECTION_event:
  // case SECTION_target:
  // case SECTION_data:
  // case SECTION_machine:
  // case SECTION_chart:
  // case SECTION_instance:
  //   createSubSectionWithAttributes(localName, attributes, PARAM_id,
  //                                  PARAM_SSID, PARAM_name);
  //   break;
  // default:
  // createSubSectionWithAttributes(localName, attributes, );
  // }
}

// void SLXHandler::startParameterElement(tinyxml2::XMLElement *attributes) {

//   MutableSLXSection currentSection = stack.back();
//   //
//   currentSection.setCurrentParameter(attributes->Value(SimulinkConstant::PARAM_Name));
//   /* Some rare parameters use a ref attribute and have no text. */
//   const char *ref = attributes->Attribute(SimulinkConstant::PARAM_Ref);
//   if (ref != nullptr) {
//     //     currentSection.setParameter(attributes.getValue(PARAM_Name), ref);
//   }
// }

void SLXHandler::createSubSectionWithAttributes(
    std::string localName, const char *attributes,
    std::vector<std::string> parameterNames) {

  MutableSLXSection *subSection = new MutableSLXSection(localName, locator);
  copyNonNullParameters(attributes, subSection, parameterNames);
  pushSectionToStack(subSection);
}

void SLXHandler::copyNonNullParameters(
    const char *attributes, MutableSLXSection *subSection,
    std::vector<std::string> parameterNames) {
  for (std::string parameterName : parameterNames) {
    //   std::string value = attributes.getValue(parameterName);
    //   if (value != nullptr) {
    //     subSection.setParameter(parameterName, value);
    //   }
  }
}

void SLXHandler::pushSectionToStack(MutableSLXSection *subSection) {
  MutableSLXSection parent = stack.back();
  parent.addSubSection(*subSection);
  stack.push_back(*subSection);
}

void SLXHandler::endElement(std::string uri, std::string localName,
                            std::string qName) {
  if (std::string(SimulinkConstant::SECTION_ModelInformation) == (localName)) {
    //   rootModelSection = stack.pop();
    // } else if (SECTION_Parameter.equals(localName) && !stack.isEmpty()) {
    MutableSLXSection section = stack.back();
    //   String currentParameter = section.getCurrentParameter();
    //   section.appendParameter(currentParameter, "");
    section.resetCurrentParameter();
  } else if (stack.size() > 1) {
    //   MutableSLXSection section = stack.pop();
    //   section.resetCurrentParameter();
  }
}

void SLXHandler::characters(char ch, uint16 start, uint16 length) {

  if (!stack.empty()) {
    MutableSLXSection container = stack.back();
    std::string currentParameter = container.getCurrentParameter();
    if (currentParameter != "") {
      //     container.appendParameter(currentParameter,
      //                               new String(ch, start, length));
    }
  }
}
SLXIO_ABI_NAMESPACE_END