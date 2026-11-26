#include "Archive.h"
// #include "Tempdir.h"
#include "doctest.h"

namespace slxio
{

    namespace
    {
        // get the full path to the test data directory data/
        fs::path TestDataDir()
        {
            return fs::path(__FILE__).parent_path().parent_path() / "data";
        }

        fs::path TempDir(const std::string& name)
        {
            fs::path dir = fs::temp_directory_path() / name;
            fs::remove_all(dir);
            fs::create_directories(dir);
            return dir;
        }
    } // namespace

    TEST_CASE("Archive explicit constructor test")
    {
        fs::path file = fs::current_path() / "data" / "Asset1.zip";
        Archive archive(file);
        ArchiveInfo info = archive.GetArchiveInfo();
        CHECK(!info.m_empty);
        CHECK(info.m_extension == "zip");
        CHECK(info.m_size == 63574);
    }

    TEST_CASE("Set archive extract directory test")
    {
        Archive archive;
        fs::path directory = fs::current_path();
        CHECK_NOTHROW(archive.SetArchiveExtractDirectory(directory));
    }

    TEST_CASE("Add a file to archive test")
    {
        const fs::path dir = TempDir("archive_add");
        const fs::path zipPath = dir / "Asset2.zip";
        const fs::path filePath = dir / "dummy.txt";
        fs::copy_file(TestDataDir() / "Asset2.zip", zipPath);
        {
            std::ofstream ofs(filePath);
            ofs << "dummy content";
        }

        Archive archive(zipPath);
        CHECK(archive.GetArchiveInfo().m_extension == "zip");
        CHECK(archive.Add(filePath) == ErrorCode::Ok);
        CHECK(archive.Remove(filePath) == ErrorCode::Ok);

        fs::remove_all(dir);
    }

    TEST_CASE("Extract archive file test")
    {
        const fs::path dir = TempDir("archive_extract");
        const fs::path zipPath = dir / "Asset2.zip";
        const fs::path outDir = dir / "out";
        fs::copy_file(TestDataDir() / "Asset2.zip", zipPath);
        fs::create_directories(outDir);

        Archive archive(zipPath);
        CHECK(archive.GetArchiveInfo().m_extension == "zip");
        archive.SetArchiveExtractDirectory(outDir);
        CHECK(archive.Extract() == ErrorCode::Ok);
        CHECK(!fs::is_empty(outDir));

        fs::remove_all(dir);
    }

    TEST_CASE("Extract slx archive files test")
    {
        const fs::path dir = TempDir("slx_archive_extract");
        const fs::path slxPath = dir / "TestAsset3.slx";
        const fs::path outDir = dir / "out";
        fs::copy_file(TestDataDir() / "TestAsset3.slx", slxPath);
        fs::create_directories(outDir);

        Archive archive(slxPath);
        archive.SetArchiveExtension("zip");
        CHECK(archive.GetArchiveInfo().m_extension == "zip");
        archive.SetArchiveExtractDirectory(outDir);
        CHECK(archive.Extract() == ErrorCode::Ok);
        CHECK(!fs::is_empty(outDir));
        fs::remove_all(dir);
    }

}; // namespace slxio
