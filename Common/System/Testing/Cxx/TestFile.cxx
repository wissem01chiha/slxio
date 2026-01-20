#include "Compiler.h"
#include "Doctest.h"
#include "File.h"
#include "Libuv.h"
#include "SlxConfig.h"
#include <chrono>
#include <random>

class FileTestFixture {
public:
  static constexpr const char *TEST_FILE = "testfile.txt";

  FileTestFixture() {
    std::ofstream ofs(TEST_FILE);
    ofs << "Hello World From TestFile.cxx";
    ofs.close();
    getcwd(cwdbuffer, sizeof(cwdbuffer));
  }

  /// @brief Create a temporary directory and return its path.
  std::string tempdir() {

    std::string tempDir = std::string(cwdbuffer);
    if (tempDir.back() != PATH_SEP)
      tempDir += PATH_SEP;
    tempDir += "tempdir";

    uv_fs_t req;
    uv_loop_t *loop = uv_default_loop();

    int r = uv_fs_mkdir(loop, &req, tempDir.c_str(), 0755, nullptr);
    uv_fs_req_cleanup(&req);

    if (r < 0) {
      if (r == UV_EEXIST) {
        std::cout << "directory already exists: " << tempDir << std::endl;
      } else {
        std::cerr << "failed to create directory: " << uv_err_name(r) << " - "
                  << uv_strerror(r) << std::endl;
      }
    }
    return tempDir;
  }

  const char *getZipPath(const char *filename) {

    static char zipFilePath[512];
    snprintf(zipFilePath, sizeof(zipFilePath),
             "%s/Common/System/Testing/Data/%s", PROJECT_ROOT_DIR, filename);
    return zipFilePath;
  }

  std::string testFileEmptyRandDir() {
    std::string tempDir = std::string(cwdbuffer);
#ifdef _WIN32
    if (tempDir.back() != '\\')
      tempDir += '\\';
#else
    if (tempDir.back() != '/')
      tempDir += '/';
#endif
    auto now = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 rng(static_cast<unsigned>(now));
    std::uniform_int_distribution<int> dist(1000, 9999);

    int uniqueId = dist(rng);
    tempDir += "TestFileEmptyRandDir_" + std::to_string(uniqueId);

    uv_fs_t req;
    uv_loop_t *loop = uv_default_loop();

    int r = uv_fs_mkdir(loop, &req, tempDir.c_str(), 0755, nullptr);
    uv_fs_req_cleanup(&req);

    if (r < 0 && r != UV_EEXIST) {
      std::cerr << "failed to create directory: " << uv_err_name(r) << " - "
                << uv_strerror(r) << std::endl;
    }
    return tempDir;
  }

  ~FileTestFixture() { std::remove(TEST_FILE); }

protected:
  char cwdbuffer[1024];
};

TEST_CASE_FIXTURE(FileTestFixture, "File Constructor Test") {

  File f(TEST_FILE, File::Read);
  CHECK(f.isFile() == true);
  CHECK(f.getFilename() == "testfile.txt");
}

TEST_CASE_FIXTURE(FileTestFixture, "Open and Close File Test") {

  File f(TEST_FILE, File::Read);
  CHECK(f.open() == ErrorCode::SLX_OK);
  CHECK(f.close() == ErrorCode::SLX_OK);
}

TEST_CASE_FIXTURE(FileTestFixture, "Read File Contents") {

  File f(TEST_FILE, File::Read);
  REQUIRE(f.open() == ErrorCode::SLX_OK);
  auto rc = f.read();
  CHECK_UNARY(rc == ErrorCode::SLX_OK || rc == ErrorCode::SLX_EEOF);
  CHECK(f.size() > 0);
  std::vector<char> data = f.getBuffer();
  CHECK(!data.empty());
}

TEST_CASE_FIXTURE(FileTestFixture, "Write to File Test") {

  File f(TEST_FILE, File::Write);
  REQUIRE(f.open() == ErrorCode::SLX_OK);
  CHECK(f.write("New content") == ErrorCode::SLX_OK);
}

TEST_CASE_FIXTURE(FileTestFixture, "Rename File Test") {

  File f(TEST_FILE, File::Read);
  REQUIRE(f.open() == ErrorCode::SLX_OK);
  REQUIRE(f.isFile() == true);

  const char *newName = "renamed.txt";
  CHECK(f.rename(newName) == ErrorCode::SLX_OK);
  CHECK(f.getFilename() == "renamed.txt");
  std::remove(newName);
}

TEST_CASE_FIXTURE(FileTestFixture, "Move File Test") {

  std::string TEST_FILE_PATH = std::string(cwdbuffer) + PATH_SEP + TEST_FILE;
  File f(TEST_FILE_PATH.c_str(), File::Read);

  REQUIRE(f.open() == ErrorCode::SLX_OK);
  REQUIRE(f.close() == ErrorCode::SLX_OK);

  std::cout << "This is the tempory dir path " << tempdir() << std::endl;
  CHECK(f.move(tempdir().c_str()) == ErrorCode::SLX_OK);
  CHECK(f.getFileDirectory().find(cwdbuffer) != std::string::npos);
}

TEST_CASE_FIXTURE(FileTestFixture, "Set File Extension Test") {

  std::string TEMP_FILE_PATH =
      std::string(cwdbuffer) + PATH_SEP + "testfile.txt";
  {
    std::ofstream ofs(TEMP_FILE_PATH);
    ofs << "temporary file content for casting extension test";
    ofs.close();
  }

  File f(TEMP_FILE_PATH.c_str(), File::Read);
  CHECK(f.setFileExtension("md") == ErrorCode::SLX_OK);
  CHECK(std::string(f.getFileExtension()) == "md");
}

TEST_CASE_FIXTURE(FileTestFixture, "End of File Check Test") {

  File f(TEST_FILE, File::Read);
  REQUIRE(f.open() == ErrorCode::SLX_OK);
  f.read();
  CHECK(f.eof() == true);
  CHECK(f.size() > 0);
}

TEST_CASE_FIXTURE(FileTestFixture, "Unzip File Test") {

  File f(getZipPath("Asset1.zip"));
  CHECK(f.isFile() == true);
  CHECK(f.unzip(testFileEmptyRandDir().c_str()) == ErrorCode::SLX_OK);
}

TEST_CASE_FIXTURE(FileTestFixture, "Zip File Test") {

  File f(getZipPath("blockdiagram.xml"));
  std::cout << "getZipPath('blockdiagram.xml ') = "
            << getZipPath("blockdiagram.xml") << std::endl;
  std::cout << "getZipPath(' Asset2.zip ') " << getZipPath("Asset2.zip")
            << std::endl;
  CHECK(f.isFile() == true);
  CHECK(f.zip(getZipPath("Asset2.zip"), "simulink/blockdiagram.xml") ==
        ErrorCode::SLX_OK);
}