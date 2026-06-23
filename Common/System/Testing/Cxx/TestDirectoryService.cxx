#include "Directory.h"
#include "DirectoryService.h"
#include "Doctest.h"
#include "ErrorCode.h"
#include "ErrorHandler.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class DirectoryServiceTestFixture
{
public:
  DirectoryServiceTestFixture() {}
  ~DirectoryServiceTestFixture() {}

private:
};

TEST_CASE_FIXTURE(DirectoryServiceTestFixture, "Test Static GetWorkingDirectory Exist")
{
  int err = 0;
  Directory d = DirectoryService::GetWorkingDirectory(&err);
  CHECK(d.Exist() == true);
  CHECK(err == 0);
}

TEST_CASE_FIXTURE(DirectoryServiceTestFixture, "Test Static CreateTemporaryDirectory Exist")
{
  int err = 0;
  auto d = DirectoryService::CreateTemporaryDirectory(&err);
  CHECK(d != nullptr);
  CHECK(d->Exist() == true);
}

TEST_CASE_FIXTURE(DirectoryServiceTestFixture, "Test Prefixed CreatePrefixedTemporaryDirectory")
{

  int err = 0;
  auto d = DirectoryService::CreatePrefixedTemporaryDirectory("Prefix", &err);
  CHECK(d != nullptr);
  CHECK(d->Exist() == true);
}

TEST_CASE_FIXTURE(DirectoryServiceTestFixture, "Test CreateDirectoryStructure Valid")
{
  int err = 0;
  auto d = DirectoryService::GetWorkingDirectory(&err);
  std::string subdirpath = d.GetDirectoryPath() + PATH_SEP + "simulink" + PATH_SEP + "plugin" +
    PATH_SEP + "rels" + PATH_SEP;

  int error = 0;
  auto dir = DirectoryService::CreateDirectoryStructure(subdirpath, &error);

  CHECK(dir != nullptr);
  ErrorHandler::PrintErrorMessage(error);
  CHECK(error == 0);
  CHECK(dir->GetDirectoryPath() == subdirpath);
  CHECK(Directory::Exist(subdirpath));

  auto r = Directory::Delete(d.GetDirectoryPath() + "/simulink/");
  ErrorHandler::PrintErrorMessage(r);
  CHECK(r == 0);
}

TEST_CASE_FIXTURE(DirectoryServiceTestFixture, "Test Serlise Directory to String") {}
SLXIO_ABI_NAMESPACE_END
};
