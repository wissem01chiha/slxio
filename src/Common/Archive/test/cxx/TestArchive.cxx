#include "Archive.h"
#include "doctest.h"

namespace slxio
{

    namespace
    {
        fs::path TestDataDir()
        {
            return fs::path(__FILE__).parent_path().parent_path() / "data";
        }

        fs::path MakeTempDir(const std::string& name)
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
        const fs::path dir = MakeTempDir("slxio_archive_add");
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
        const fs::path dir = MakeTempDir("slxio_archive_extract");
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

    TEST_CASE("Archive extension mismatch test")
    {
        const fs::path dir = MakeTempDir("slxio_archive_ext");
        const fs::path txtPath = dir / "Asset2.txt";
        const fs::path fakeZipPath = dir / "fake.zip";
        fs::copy_file(TestDataDir() / "Asset2.zip", txtPath);
        {
            std::ofstream ofs(fakeZipPath);
            ofs << "not a zip archive";
        }

        Archive archive(txtPath);
        CHECK(archive.GetArchiveInfo().m_extension != "zip");

        Archive fake(fakeZipPath);
        CHECK(fake.GetArchiveInfo().m_extension == "zip");
        fake.SetArchiveExtractDirectory(dir);
        CHECK(fake.Extract() == ErrorCode::ArchiveOpenFailed);

        fs::remove_all(dir);
    }

}; // namespace slxio
