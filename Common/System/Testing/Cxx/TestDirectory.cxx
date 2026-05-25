#include "Directory.h"
#include "DirectoryService.h"
#include "Doctest.h"
#include "ErrorCode.h"
#include <chrono>
#include <fstream>
#include <random>
#include <string>

class DirectoryTestFixture
{
public:
  DirectoryTestFixture()
  {
    int err = 0;
    cwd = DirectoryService::GetWorkingDirectory(&err);
  }

  /** Create a unique temporary directory under the cwd */
  std::string MakeTempDir(const std::string& prefix = "TestDir")
  {
    auto now = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 rng(static_cast<unsigned>(now));
    std::uniform_int_distribution<int> dist(1000, 9999);
    int uniqueId = dist(rng);

    std::string tempDir = prefix + "_" + std::to_string(uniqueId) + PATH_SEP;
    DirectoryService::CreateDirectoryStructure(tempDir, &lastError);
    return tempDir;
  }

  /**  Create a temp directory with dummy files */
  std::string MakeTempDirWithFiles()
  {
    std::string dir = MakeTempDir("TestDirFiles");
    std::ofstream(dir + "/file1.txt").put('a');
    std::ofstream(dir + "/file2.csv").put('b');
    return dir;
  }

  ~DirectoryTestFixture() {}

protected:
  Directory cwd;
  int lastError{ 0 };
};

TEST_CASE_FIXTURE(DirectoryTestFixture, "Test Directory Exist")
{
  std::string path = MakeTempDir("ExistCheck");
  CHECK(Directory::Exist(path));
  Directory d(path);
  CHECK(d.Exist());
}

TEST_CASE_FIXTURE(DirectoryTestFixture, "Test Open empty directory")
{
  std::string path = MakeTempDir("EmptyDir");
  Directory d(path);
  ReturnType ec = d.Initialize();
  CHECK(ec == 0);
  CHECK(d.GetNumberOfFiles() == 0);
  CHECK(d.Empty());
}

TEST_CASE_FIXTURE(DirectoryTestFixture, "Test Open directory with files")
{
  std::string path = MakeTempDirWithFiles();
  Directory d(path);
  ReturnType ec = d.Initialize();
  CHECK(ec == 0);
  CHECK(d.GetNumberOfFiles() == 2);

  auto f1 = d.GetFile("file1.txt");
  CHECK(f1 != nullptr);

  auto f2 = d.GetFile("file2.csv");
  CHECK(f2 != nullptr);
}

TEST_CASE_FIXTURE(DirectoryTestFixture, "Test Delete directory")
{
  std::string path = MakeTempDirWithFiles();
  CHECK(Directory::Exist(path));
  ReturnType ec = Directory::Delete(path);
  CHECK(ec == 0);
  CHECK_FALSE(Directory::Exist(path));
}
