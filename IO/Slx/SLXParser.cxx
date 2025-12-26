#include "SLXParser.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

template <typename T> xmlNodePtr SLXParser<T>::getNextNode() {
  // Use libxml2 APIs to traverse the DOM
  // e.g. xmlDocGetRootElement(doc), xmlNextSibling(node), etc.
  return nullptr;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END