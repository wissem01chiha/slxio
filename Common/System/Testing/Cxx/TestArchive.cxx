#include "Archive.h"
#include "Directory.h"
#include "DirectoryService.h"
#include "Doctest.h"
#include "ErrorCode.h"
#include "ErrorHandler.h"
#include "File.h"

#include <fstream>
#include <string>

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class ArchiveTestFixture
{
public:
    ArchiveTestFixture()
    {

        auto d = DirectoryService::GetWorkingDirectory(&lastError);
        tempDirPath =
            d.GetDirectoryPath() + PATH_SEP + "ArchiveTestTmp" + PATH_SEP;

        DirectoryService::CreateDirectoryStructure(tempDirPath, &lastError);
    }

    std::string GetAssetFilePath(const char* filename)
    {
        static char FilePath[512];
        snprintf(FilePath, sizeof(FilePath), "%s/Common/System/Testing/Data/%s",
                 SLXIO_ROOT_DIR, filename);
        return std::string(FilePath);
    }

    int GetLastError() { return lastError; }
    std::string GetArchiveTestDirTmp() { return tempDirPath; }
    ~ArchiveTestFixture() { Directory::Delete(tempDirPath); }

private:
    int lastError = 0;
    std::string tempDirPath = "";
};

TEST_CASE_FIXTURE(ArchiveTestFixture, "Archive Extension Handling")
{
    File f(GetAssetFilePath("TestAsset1.zip"));
    Archive archive(f);
    archive.SetArchiveExtension("zip");
    std::cout << "this is the archive extesion"
              << std::string(archive.GetArchiveExtension()) << std::endl;
    CHECK(std::string(archive.GetArchiveExtension()) == "zip");
}

TEST_CASE_FIXTURE(ArchiveTestFixture, "Set Archive Directory")
{
    Archive archive;
    Directory dir(GetArchiveTestDirTmp());
    archive.SetArchiveDirectory(dir);
    CHECK(archive.GetArchiveDirectory().Exist());
}

TEST_CASE_FIXTURE(ArchiveTestFixture, "Add File to Archive")
{
    std::string newfilePath = GetArchiveTestDirTmp() + "/dummy.txt";
    {
        std::ofstream ofs(newfilePath);
        ofs << "dummy content";
    }

    File f(newfilePath);

    File zip(GetAssetFilePath("Asset2.zip"));
    Archive archive(zip);
    archive.SetArchiveDirectory(Directory(GetArchiveTestDirTmp()));

    HError ec = archive.Add(f);
    ErrorHandler::PrintErrorMessage(ec);
    CHECK(ec == E_OK);

    HError rc = archive.Remove(f);
    CHECK(rc == E_OK);
}

TEST_CASE_FIXTURE(ArchiveTestFixture, "Extract Archive")
{
    File f(GetAssetFilePath("Asset2.zip"));
    Archive archive(f);
    archive.SetArchiveDirectory(Directory(GetArchiveTestDirTmp()));
    HError rc = archive.Extract();
    CHECK(rc == E_OK);
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
