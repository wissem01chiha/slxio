// #include <chrono>
// #include <random>



TEST_CASE_FIXTURE(FileTestFixture, "Set File Extension Test")
{

  //   std::string TEMP_FILE_PATH =
  //     std::string(cwdbuffer) + PATH_SEP + "testfile.txt";
  //   {
  //     std::ofstream ofs(TEMP_FILE_PATH);
  //     ofs << "temporary file content for casting extension test";
  //     ofs.close();
  //   }

  //   File f(TEMP_FILE_PATH.c_str(), File::Read);
  //   CHECK(f.setFileExtension("md") == E_OK);
  //   CHECK(std::string(f.getFileExtension()) == "md");
}

// TEST_CASE_FIXTURE(FileTestFixture, "Unzip File Test")
// {

//   File f(getZipPath("Asset1.zip"));
//   CHECK(f.isFile() == true);
//   CHECK(f.unzip(testFileEmptyRandDir().c_str()) == E_OK);

//   File f_(getZipPath("TestAsset1.zip"));
//   CHECK(f_.isFile() == true);
//   CHECK(f_.unzip(testFileEmptyRandDir().c_str()) == E_OK);
// }

// TEST_CASE_FIXTURE(FileTestFixture, "Zip File Test")
// {

//   File f(getZipPath("blockdiagram.xml"));
//   std::cout << "getZipPath('blockdiagram.xml ') = "
//             << getZipPath("blockdiagram.xml") << std::endl;
//   std::cout << "getZipPath(' Asset2.zip ') " << getZipPath("Asset2.zip")
//             << std::endl;
//   CHECK(f.isFile() == true);
//   CHECK(f.zip(getZipPath("Asset2.zip"), "simulink/blockdiagram.xml") ==
//     E_OK);
// }

//   const char* getZipPath(const char* filename)
//   {

//     static char zipFilePath[512];
//     snprintf(zipFilePath, sizeof(zipFilePath),
//       "%s/Common/System/Testing/Data/%s", PROJECT_ROOT_DIR, filename);
//     return zipFilePath;
//   }

//   std::string testFileEmptyRandDir()
//   {

//     std::string tempDir = std::string(cwdbuffer);
//     if (tempDir.back() != PATH_SEP)
//     {
//       tempDir += PATH_SEP;
//     }

//     auto now = std::chrono::system_clock::now().time_since_epoch().count();
//     std::mt19937 rng(static_cast<unsigned>(now));
//     std::uniform_int_distribution<int> dist(1000, 9999);

//     int uniqueId = dist(rng);
//     tempDir += "TestFileEmptyRandDir_" + std::to_string(uniqueId);

//     uv_fs_t req;
//     uv_loop_t* loop = uv_default_loop();

//     int r = uv_fs_mkdir(loop, &req, tempDir.c_str(), 0755, nullptr);
//     uv_fs_req_cleanup(&req);

//     if (r < 0 && r != UV_EEXIST)
//     {
//       std::cerr << "failed to create directory: " << uv_err_name(r) << " -
//       "
//                 << uv_strerror(r) << std::endl;
//     }
//     return tempDir;
//   }
