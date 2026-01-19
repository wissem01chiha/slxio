#include "SimulinkFileBase.h"
#include <sstream>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

std::string SimulinkFileBase::toString() const {
  std::ostringstream oss;
  oss << "SimulinkFileBase { "
      << "category=\"" << category << "\", "
      << "creator=\"" << creator << "\", "
      << "lastModifiedBy=\"" << lastModifiedBy << "\", "
      << "revision=\"" << revision << "\", "
      << "version=\"" << version << "\", "
      << "contentType=\"" << contentType << "\", "
      << "contentTypeFriendlyName=\"" << contentTypeFriendlyName << "\", "
      << "matlabRelease=\"" << matlabRelease << "\", "
      << "matlabVersion=\"" << matlabVersion << "\""
      << " }";
  return oss.str();
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
