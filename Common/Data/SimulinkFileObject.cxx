#include "SimulinkFileObject.h"
#include <sstream>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkFileObject* SimulinkFileObject::New()
{
  return nullptr;
}

void SimulinkFileObject::Initialize() {}

UInt32 SimulinkFileObject::GetUpdateTime()
{
  return UInt32();
}

IdType SimulinkFileObject::GetDataType()
{
  return IdType();
}

std::string SimulinkFileObject::ToString() const
{
  std::ostringstream oss;
  oss << "SimulinkFileBase { "
      << "category=\"" << Category << "\", "
      << "creator=\"" << Creator << "\", "
      << "lastModifiedBy=\"" << LastModifiedBy << "\", "
      << "revision=\"" << Revision << "\", "
      << "version=\"" << Version << "\", "
      << "contentType=\"" << ContentType << "\", "
      << "contentTypeFriendlyName=\"" << ContentTypeFriendlyName << "\", "
      << "matlabRelease=\"" << MatlabRelease << "\", "
      << "matlabVersion=\"" << MatlabVersion << "\""
      << " }";
  return oss.str();
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
