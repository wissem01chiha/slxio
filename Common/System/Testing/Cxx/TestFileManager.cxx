#include "Doctest.h"
#include "FileManager.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class FileManagerTestFixture
{
public:
  FileManagerTestFixture() {}
  ~FileManagerTestFixture() {}

private:
};

TEST_CASE_FIXTURE(FileManagerTestFixture, "File Constructor Test")
{

  //   File f(TEST_FILE, File::Read);
  //   CHECK(f.isFile() == true);
  //   CHECK(f.getFilename() == "testfile.txt");
}

SLXIO_ABI_NAMESPACE_END
};