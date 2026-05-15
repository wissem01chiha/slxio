#include "SimulinkFileObject.h"
#include "xmlDocDataObject.h"
#include <sstream>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkFileObject* SimulinkFileObject::New()
{
  return new SimulinkFileObject();
}

void SimulinkFileObject::Initialize() {}

UInt32 SimulinkFileObject::GetUpdateTime() const
{
  return UInt32();
}

void* SimulinkFileObject::GetImplDataObject() const
{
  return ImplDataObject;
}

bool SimulinkFileObject::operator==(const DataObject& other)
{
  return ImplDataObject->Name ==
    static_cast<SimulinkFile*>(other.GetImplDataObject())->Name;
}

std::string SimulinkFileObject::toString() const
{
  std::ostringstream oss;
  oss << "SimulinkFileObject { "
      << "name=\"" << ImplDataObject->Name << "\", "
      << "extension=\"" << ImplDataObject->Extension << "\", "
      << "category=\"" << ImplDataObject->Category << "\", "
      << "creator=\"" << ImplDataObject->Creator << "\", "
      << "lastModifiedBy=\"" << ImplDataObject->LastModifiedBy << "\", "
      << "revision=\"" << ImplDataObject->Revision << "\", "
      << "version=\"" << ImplDataObject->Version << "\", "
      << "contentType=\"" << ImplDataObject->ContentType << "\", "
      << "contentTypeFriendlyName=\"" << ImplDataObject->ContentTypeFriendlyName
      << "\", "
      << "matlabRelease=\"" << ImplDataObject->MatlabRelease << "\", "
      << "matlabVersion=\"" << ImplDataObject->MatlabVersion << "\""
      << " }";
  return oss.str();
}

bool SimulinkFileObject::Empty()
{
  return ImplDataObject == nullptr;
}

SimulinkFileObject::SimulinkFileObject() {}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
