#include "Directory.h"
#include "Doctest.h"
#include "ErrorCode.h"
#include "File.h"
#include "Libuv.h"

class FileTestFixture
{
public:
  std::string TestFile = "testfile.txt";
  std::string CurrentDir;

  FileTestFixture()
  {
    std::ofstream ofs(TestFile);
    ofs << "Hello World From TestFile.cxx";
    ofs.close();

    char buffer[1024];
    size_t size = sizeof(buffer);
    if (uv_cwd(buffer, &size) == 0)
    {
      CurrentDir.assign(buffer, size);
    }
  }

  ~FileTestFixture() { std::remove(TestFile.c_str()); }

  std::string GetTestFilePath() const
  {
    return CurrentDir + PATH_SEP + TestFile;
  }

  Directory& CreateTempDirectory() const
  {
    std::string tempDir;
    if (CurrentDir.back() != PATH_SEP)
      tempDir += PATH_SEP;
    tempDir += "tempdir";

    uv_fs_t req;
    uv_loop_t* loop = uv_default_loop();

    int r = uv_fs_mkdir(loop, &req, tempDir.c_str(), 0755, nullptr);
    uv_fs_req_cleanup(&req);
    return Directory(tempDir);
  }
};

TEST_CASE_FIXTURE(FileTestFixture, "File Constructor Test")
{
  File f(TestFile, File::Mode::Read);
  CHECK(f.Exist() == true);
  CHECK(f.GetFileName() == "testfile.txt");
}

TEST_CASE_FIXTURE(FileTestFixture, "Open and Close File Test")
{
  File f(TestFile, File::Mode::Read);
  CHECK(f.Open() == E_OK);
  CHECK(f.Close() == E_OK);
}

TEST_CASE_FIXTURE(FileTestFixture, "Read File Contents")
{
  File f(TestFile, File::Mode::Read);
  REQUIRE(f.Open() == E_OK);
  auto rc = f.Read();
  CHECK(rc == E_OK);
  CHECK(f.Size() > 0);
  std::vector<char> data = f.GetInternalBuffer();
  CHECK(!data.empty());
}

TEST_CASE_FIXTURE(FileTestFixture, "Write to File Test")
{

  File f(TestFile, File::Mode::Write);
  REQUIRE(f.Open() == E_OK);
  CHECK(f.Write("New content") == E_OK);
}

TEST_CASE_FIXTURE(FileTestFixture, "Rename File Test")
{
  File f(TestFile, File::Mode::Read);
  REQUIRE(f.Open() == E_OK);
  REQUIRE(f.Exist() == true);

  const char* newName = "renamed.txt";
  CHECK(f.Rename(newName) == E_OK);
  CHECK(f.GetFileName() == "renamed.txt");
  std::remove(newName);
}

TEST_CASE_FIXTURE(FileTestFixture, "Move File Test")
{
  File f(GetTestFilePath(), File::Mode::Read);

  REQUIRE(f.Open() == E_OK);
  REQUIRE(f.Close() == E_OK);
  //REQUIRE(CreateTempDirectory().Exist()==true);

  //CHECK(f.Move(CreateTempDirectory()) != E_OK);
  //CHECK(f.GetFileDirectory().Empty() == true);
}
