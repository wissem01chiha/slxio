#include "SLXFileParser.h"
#include <chrono>
#include <ctime>
#include <slog.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <vector>
#include <zip.h>

SimulinkFile::SimulinkFile(const File &path) {

  this->filePath = std::make_unique<File>(path);
  this->path = path.string().c_str();

  File parentDir = this->filePath->parent_path();
  std::string tempdirname = this->filePath->stem().string() + "_" +
                            std::string(get_extension(this->path));

  File tempdirfullpath = parentDir / tempdirname;
  std::filesystem::create_directory(tempdirfullpath);
  this->tempdir = strdup(tempdirfullpath.string().c_str());
  this->tempdirPath = std::make_unique<File>(tempdir);
}

SimulinkFile::SimulinkFile(const char *path) {

  this->path = path;
  this->filePath = std::make_unique<File>(std::filesystem::path(path));

  File parentDir = filePath->parent_path();
  std::string tempdirname =
      filePath->stem().string() + "_" + std::string(get_extension(path));

  File tempdirfullpath = parentDir / tempdirname;
  std::filesystem::create_directory(tempdirfullpath);
  this->tempdir = strdup(tempdirfullpath.string().c_str());
  this->tempdirPath = std::make_unique<File>(tempdir);
}

SimulinkFile::SimulinkFile(const SimulinkFile &other) {
  this->path = other.path;
  this->filePath = std::make_unique<File>(*other.filePath);
}

SimulinkFile::~SimulinkFile() {}

uint32 SimulinkFile::get_file_count() {
  if (filePath == nullptr) {
    return 0;
  }
}

SimulinkErrorType SimulinkFile::open() {

  if (!path) {
    return SimulinkErrorType::SLX_ERR_ER_NOENT;
  }
  if (check_extension() != SimulinkErrorType::SLX_OK) {
    return check_extension();
  }

  int err = 0;
  zip_t *archive = zip_open(path, ZIP_RDONLY, &err);

  if (!archive) {
    return SimulinkErrorType::SLX_ERR_OPEN;
  }
  zip_int64_t num_entries = zip_get_num_entries(archive, 0);

  zip_close(archive);
  this->isOpen = 1;
  return SimulinkErrorType::SLX_OK;
}

SimulinkErrorType SimulinkFile::close() {
  isOpen = 0;
  isClose = 1;
};

bool SimulinkFile::isEOF() const {}

SimulinkErrorType SimulinkFile::load(const std::string &name, void *buffer,
                                     size_t size) {
  return SimulinkErrorType::SLX_OK;
}

SimulinkErrorType SimulinkFile::load() {

  auto start = std::chrono::system_clock::now();

  if (this->isOpen == 1) {
    slog_fatal("Failed to open Simulink file. Ensure proper initialization.");
    return SimulinkErrorType::SLX_ERR_OPEN;
  }

  this->blkDgmFile = std::make_unique<File>(tempdirPath->string() +
                                            "/simulink/blockdiagram.xml");
  this->icnImgFile =
      std::make_unique<File>(tempdirPath->string() + "/metadata/thumbnail.xml");
  this->slddFile = std::make_unique<File>(tempdirPath->string() +
                                          "/simulink/modelDictionary.xml");
  this->cfgSetFile = std::make_unique<File>(tempdirPath->string() +
                                            "/simulink/configSet0.xml");
  auto end = std::chrono::system_clock::now();

  std::time_t end_time = std::chrono::system_clock::to_time_t(end);
  this->date = end_time;

  std::chrono::duration<float64> elapsed_seconds = end - start;
  slog_info("Simulink File loaded sucessfully in %.6f seconds",
            elapsed_seconds);
  return SimulinkErrorType::SLX_OK;
}

SimulinkErrorType SimulinkFile::copy(SimulinkFile &destFile) const {
  return SimulinkErrorType::SLX_OK;
}

SimulinkErrorType SimulinkFile::extract_to(const char *dir) {

  int err = 0;
  zip_t *archive = zip_open(path, ZIP_RDONLY, &err);
  if (!archive) {
    return SimulinkErrorType::SLX_ERR_OPEN;
  }

  zip_int64_t num_entries = zip_get_num_entries(archive, 0);
  for (zip_uint64_t i = 0; i < num_entries; ++i) {
    const char *name = zip_get_name(archive, i, 0);
    if (!name) {
      continue;
    }
    char full_path[1024];
    snprintf(full_path, sizeof(full_path), "%s/%s", dir, name);
    if (name[strlen(name) - 1] == '/') {
#ifdef PLATFORM_WIN32
      mkdir(full_path);
#else
      mkdir(full_path, 0755);
#endif
      continue;
    }
    zip_file_t *zf = zip_fopen_index(archive, i, 0);
    if (!zf)
      continue;
    FILE *out = fopen(full_path, "wb");
    if (!out) {
      zip_fclose(zf);
      continue;
    }
    char buffer[4096];
    zip_int64_t bytes;
    while ((bytes = zip_fread(zf, buffer, sizeof(buffer))) > 0) {
      fwrite(buffer, 1, bytes, out);
    }

    fclose(out);
    zip_fclose(zf);
  }
  return SimulinkErrorType::SLX_OK;
}

SimulinkErrorType SimulinkFile::extract() {

  slog_info("Extracting Simulink file %s to temporary directory %s", this->path,
            this->tempdir);
  return extract_to(tempdir);
}

void SimulinkFile::info() {
  slog_info("Model-Info [Filename] - [filesize] - [data] - [other metada]");
}

SimulinkErrorType SimulinkFile::cast_extension() {

  if (!path) {
    return SimulinkErrorType::SLX_ERR_ER_NOENT;
  }
  const char *ext = get_extension();
  const char *des = path;

  size_t len = ext - path;
  char *dest = (char *)malloc(len + 5);
  strncpy(dest, path, len);
  dest[len] = '\0';
  strcat(dest, "zip");

  FILE *src = fopen(path, "rb");
  if (!src) {
    return SimulinkErrorType::SLX_ERR_ER_NOENT;
  }

  FILE *dst = fopen(dest, "wb");
  if (!dst) {
    return SimulinkErrorType::SLX_ERR_ER_NOENT;
  }
  char buffer[4096];
  size_t bytes;
  while ((bytes = fread(buffer, 1, sizeof(buffer), src)) > 0) {
    fwrite(buffer, 1, bytes, dst);
  }
  fclose(src);
  fclose(dst);
  free(dest);
  return SimulinkErrorType::SLX_OK;
}

SimulinkErrorType SimulinkFile::check_extension() {

  if (!path) {
    return SimulinkErrorType::SLX_ERR_ER_NOENT;
  }

  const char *ext = get_extension();
  SimulinkErrorType status;

  if (strcmp(ext, "slx")) {
    isSLX = 1;
    isMDL = 0;
    return SimulinkErrorType::SLX_OK;
  }

  if (strcmp(ext, "mdl")) {
    isMDL = 1;
    isSLX = 0;
    return SimulinkErrorType::SLX_ERR_EXTENSION_NOT_SUPPORTED;
  }

  return SimulinkErrorType::SLX_ERR_INVALID_EXTENSION;
}

const char *SimulinkFile::get_extension(const char *fPath) const {

  if (!fPath)
    return nullptr;

  const char *dot = strrchr(fPath, '.');
  if (!dot || dot == fPath)
    return nullptr;

  return dot + 1;
}
}
; // namespace slxio