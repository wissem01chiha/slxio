#include "doctest.h"
#include "Filesystem.h"
#include "Tempdir.h"

namespace slxio
{
    TEST_CASE("Get basename filesystem test")
    {
        fs::path path("/some/directory/file.txt");
        CHECK(GetBasename(path) == "file.txt");
    }

    TEST_CASE("Change base name filesystem test")
    {
        fs::path path("/some/directory/file.txt");
        fs::path new_path = ChangeBaseName(path, "newfile.txt");
        CHECK(new_path.filename() == "newfile.txt");
    }

    TEST_CASE("Get directory name filesystem test")
    {
        fs::path path("/some/directory/file.txt");
        CHECK(GetDirname(path) == "/some/directory");
    }

    TEST_CASE("Create tempory directory and get file list test")
    {
        Tempdir tempdir;
        fs::path dir = tempdir.GetDirPath();

        fs::path file1 = dir / "file1.txt";
        fs::path file2 = dir / "file2.txt";
        std::ofstream(file1.string());
        std::ofstream(file2.string());

        std::vector<fs::path> files = GetFileList(dir);
        CHECK(files.size() == 2);
        CHECK(std::find(files.begin(), files.end(), file1) != files.end());
        CHECK(std::find(files.begin(), files.end(), file2) != files.end());
        tempdir.Cleanup();
    }

    TEST_CASE("Create directories create valid entries test")
    {
        ErrorCode err = ErrorCode::Ok;
        auto d = GetWorkingPath(&err);
        std::string subdirpath = "simulink/plugin/rels/";
        auto dir = CreateDirectories(subdirpath, &err);

        CHECK(dir != nullptr);
        CHECK(err == ErrorCode::Ok);
        CHECK(fs::exists(*dir));
        CHECK(fs::is_directory(*dir));

        fs::remove_all("simulink");
        CHECK_FALSE(fs::exists("simulink"));
    }
} // namespace slxio