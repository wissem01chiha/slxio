#include "Directory.h"
#include "Doctest.h"
#include <chrono>
#include <random>

class DirectoryTestFixture {
public:
  DirectoryTestFixture() { getcwd(cwdbuffer, sizeof(cwdbuffer)); }

  /// @brief Create a temporary empty directory and return its path.
  /// default name is "tempEmptyDir_XXXXX",with "XXXX" a random id generated
  /// based on function timestamp call, to make it unique per call
  std::string tempEmptyDir() {
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
    tempDir += "tempEmptyDir_" + std::to_string(uniqueId);

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

  /// @brief Create a temporary directory with dummy files (*.txt, *.csv).
  std::string tempDirFiles() {
    std::string dir = tempEmptyDir();

    std::ofstream(dir + "/file1.txt").put('a');
    std::ofstream(dir + "/file2.csv").put('b');

    return dir;
  }

  ~DirectoryTestFixture() {}

protected:
  char cwdbuffer[1024];
};

TEST_CASE_FIXTURE(DirectoryTestFixture, "Test Directory Constructor Test") {

  std::string path = tempEmptyDir();
  Directory d(path);
  CHECK(Directory::isDirectory(path));
}

TEST_CASE_FIXTURE(DirectoryTestFixture, "Test Open empty directory") {

  std::string path = tempEmptyDir();
  Directory d(path);
  ErrorCode ec = d.open();
  CHECK(ErrorCode::SLX_OK == ErrorCode::SLX_OK);
  CHECK(d.getNumberOfFiles() == 0);
  CHECK(d.empty());
}

TEST_CASE_FIXTURE(DirectoryTestFixture, "Test Open directory with files") {

  std::string path = tempDirFiles();
  Directory d(path);
  ErrorCode ec = d.open();
  CHECK(ec == ErrorCode::SLX_OK);
  CHECK(d.getNumberOfFiles() == 2);

  const File *f1 = d.getFile("file1.txt");
  CHECK(f1 != nullptr);

  const File *f2 = d.getFile("file2.csv");
  CHECK(f2 != nullptr);
}

TEST_CASE("Test Static getCurrentDirectory") {

  const char *cwd = Directory::getCurrentDirectory();
  CHECK(cwd != nullptr);
  CHECK(Directory::isDirectory(cwd));
}
