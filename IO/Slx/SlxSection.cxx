#include "SLXSection.h"

SLXIO_ABI_NAMESPACE_BEGIN

SLXSection::SLXSection() {}

SLXSection::SLXSection(std::string name) {}

SLXSection::SLXSection(std::string name, std::vector<SLXSection> sections,
                       std::map<std::string, std::string> parameters)
    : SLXSectionBase(name) {

  for (SLXSection section : sections) {
    addSubSection(section);
  }

  for (uint16 i = 0; i < parameters.size(); i++) {
    // this.parameters.put(parameters.getFirst(i), parameters.getSecond(i));
  }
}

void SLXSection::addSubSection(SLXSection section) {
  // section.parentSection = this;
  // subSections.add(section.getName(), section);
}

SLXSection *SLXSection::getFirstSubSection(std::string name) {
  if (!hasSubSections(name)) {
    return nullptr;
  }
  // return subSections.getCollection(name).get(0);
}

std::vector<SLXSection> SLXSection::getLeafSections() {
  std::vector<SLXSection> result;
  // for (SLXSection section : subSections.getValues()) {
  //   collectLeafSections(section, result);
  // }
  return result;
}

std::string SLXSection::getParameter(std::string name) {
  // return parameters.get(name);
  return std::string("");
}

std::vector<SLXSection> SLXSection::getSubSections(std::string name) {

  if (hasSubSections(name) != 1) {
    //   return CollectionUtils.emptyList();
  }
  // return CollectionUtils.asUnmodifiable(subSections.getCollection(name));
  return std::vector<SLXSection>();
}

bool SLXSection::hasParameter(std::string name) {

  if (auto it = parameters.find(name); it != parameters.end()) {
    return 1;
  }
  return 0;
}

bool SLXSection::hasSubSections(std::string name) {

  if (subSections.find(name) != subSections.end()) {
    return 1;
  }
  return 0;
}

void SLXSection::buildParameterMap(std::map<std::string, std::string> map,
                                   std::string prefix) {

  prefix += ".";

  for (auto it = parameters.begin(); it != parameters.end(); it++) {
    //   //map.put(prefix + name, parameters.get(name));
  }

  for (SLXSection *subSection : getSubSections()) {
    // subSection.buildParameterMap(map, prefix + subSection.getName());
  }
}

void SLXSection::collectLeafSections(SLXSection *section,
                                     std::vector<SLXSection> result) {
  if (section->hasSubSections() != 1) {
    // result.add(section);
    return;
  }

  for (SLXSection *child : section->getSubSections()) {
    collectLeafSections(child, result);
  }
}

bool SLXSection::hasSubSections() { return subSections.empty(); }

std::vector<SLXSection *> SLXSection::getSubSections() {
  std::vector<SLXSection *> subs;
  return subs;
  // return CollectionUtils.asUnmodifiable(subSections.getValues());
}

std::vector<SLXSection> SLXSection::getLeafSections(std::string name) {

  std::vector<SLXSection> result;

  for (SLXSection section : getLeafSections()) {
    if (section.getName() == name) {
      result.push_back(section);
    }
  }

  return result;
}

std::string SLXSection::getParameter(std::string name,
                                     std::string defaultValue) {
  // if (!parameters.containsKey(name)) {
  //   return defaultValue;
  // }
  // return parameters.get(name);
  return std::string("");
}

std::map<std::string, std::string> SLXSection::getParameterMapRecursively() {
  std::map<std::string, std::string> map;
  // buildParameterMap(map, StringUtils.EMPTY_STRING);
  return map;
}

std::vector<std::string> SLXSection::getParameterNames() {
  std::vector<std::string> names;
  for (auto it = parameters.begin(); it != parameters.end(); it++) {
    names.push_back(it->first);
  }
  return names;
}

} // namespace slxio