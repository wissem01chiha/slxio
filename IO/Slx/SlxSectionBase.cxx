#include "SLXSectionBase.h"

SLXIO_ABI_NAMESPACE_BEGIN

SLXSectionBase::SLXSectionBase() {}

SLXSectionBase::SLXSectionBase(std::string name) {
  SLXSectionBase *section = (SLXSectionBase *)malloc(sizeof(SLXSectionBase));
  section->name = name;
}

std::string SLXSectionBase::getName() { return name; }

std::string SLXSectionBase::toString() {

  std::string result = "%s [line:%d]" + name;
  return result;
}

SLXIO_ABI_NAMESPACE_END