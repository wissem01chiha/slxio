#include "Doctest.h"
#include "File.h"

class FileTestFixture {
public:
  static constexpr const char *TEST_FILE = "testfile.txt";

  FileTestFixture() {
    std::ofstream ofs(TEST_FILE);
    ofs << "Hello World From TestFile.cxx";
    ofs.close();
    getcwd(cwdbuffer, sizeof(cwdbuffer));
  }

  std::string tempdir() {

    std::string tempDir = std::string(cwdbuffer);
    if (tempDir.back() != '\\')
      tempDir += '\\';
    tempDir += "tempdir";
    return tempDir;
  }

  ~FileTestFixture() { std::remove(TEST_FILE); }

protected:
  char cwdbuffer[1024];
};

TEST_CASE_FIXTURE(FileTestFixture, "File Constructor Test") {

  File f(TEST_FILE, File::Read);
  CHECK(f.getFilename() == "testfile.txt");
}

TEST_CASE_FIXTURE(FileTestFixture, "Open and Close File Test") {

  File f(TEST_FILE, File::Read);
  CHECK(f.open(File::Read) == ErrorCode::Ok);
  CHECK(f.close() == ErrorCode::Ok);
}

TEST_CASE_FIXTURE(FileTestFixture, "Read File Contents") {

  File f(TEST_FILE, File::Read);
  REQUIRE(f.open(File::Read) == ErrorCode::Ok);
  auto rc = f.read(64);
  CHECK_UNARY(rc == ErrorCode::Ok || rc == ErrorCode::EndOfFile);
  CHECK(f.size() > 0);
  const char *data = f.getData();
  std::cout << std::string(data, f.getNBytes()) << std::endl;
}

TEST_CASE_FIXTURE(FileTestFixture, "Write to File Test") {

  File f(TEST_FILE, File::Write);
  REQUIRE(f.open(File::Write) == ErrorCode::Ok);
  CHECK(f.write("New content") == ErrorCode::Ok);
}

TEST_CASE_FIXTURE(FileTestFixture, "Rename File Test") {

  File f(TEST_FILE, File::Read);
  REQUIRE(f.open(File::Read) == ErrorCode::Ok);

  const char *newName = "renamed.txt";
  CHECK(f.rename(newName) == ErrorCode::Ok);
  CHECK(f.getFilename() == "renamed.txt");
  std::remove(newName);
}

TEST_CASE_FIXTURE(FileTestFixture, "Move File Test") {

  std::string TEST_FILE_PATH = std::string(cwdbuffer) + "\\" + TEST_FILE;
  File f(TEST_FILE_PATH.c_str(), File::Read);

  REQUIRE(f.open(File::Read) == ErrorCode::Ok);
  REQUIRE(f.close() == ErrorCode::Ok);

  std::string destDir = tempdir();
  std::string destFile = destDir + "\\" + TEST_FILE;
  std::remove(destFile.c_str());

  CHECK(f.move(destDir.c_str()) == ErrorCode::Ok);
  CHECK(f.getFileDirectory().find(cwdbuffer) != std::string::npos);
}

TEST_CASE_FIXTURE(FileTestFixture, "Cast File Extension Test") {

  File f("example.txt", File::Read);
  CHECK(f.castFileExtension("md") == ErrorCode::Ok);
  CHECK(std::string(f.getFileExtension()) == "md");
}

TEST_CASE_FIXTURE(FileTestFixture, "End of File Check Test") {

  File f(TEST_FILE, File::Read);
  REQUIRE(f.open(File::Read) == ErrorCode::Ok);
  f.read(64);
  CHECK(f.eof() == true);
  CHECK(f.size() > 0);
}