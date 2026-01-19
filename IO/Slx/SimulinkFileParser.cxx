#include "SimulinkFileParser.h"
#include "SimulinkContentParser.h"
#include "Logger.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkFileParser::SimulinkFileParser() {
  ptr_ = std::make_shared<SimulinkFile>();
  dataObject = File();
}

ErrorCode SimulinkFileParser::setInputData(const File fs) {
  dataObject = fs;
  return ErrorCode::SLX_OK;
}

std::shared_ptr<SimulinkFile> SimulinkFileParser::getDataObject() const {
  return ptr_;
}

ErrorCode SimulinkFileParser::parse() { return ErrorCode::SLX_OK; }



//SimulinkErrorType SimulinkFile::cast_extension() {
//
//  if (!path) {
//    return SimulinkErrorType::SLX_ENOENT;
//  }
//  const char *ext = get_extension();
//  const char *des = path;
//
//  size_t len = ext - path;
//  char *dest = (char *)malloc(len + 5);
//  strncpy(dest, path, len);
//  dest[len] = '\0';
//  strcat(dest, "zip");
//
//  FILE *src = fopen(path, "rb");
//  if (!src) {
//    return SimulinkErrorType::SLX_ENOENT;
//  }
//
//  FILE *dst = fopen(dest, "wb");
//  if (!dst) {
//    return SimulinkErrorType::SLX_ENOENT;
//  }
//  char buffer[4096];
//  size_t bytes;
//  while ((bytes = fread(buffer, 1, sizeof(buffer), src)) > 0) {
//    fwrite(buffer, 1, bytes, dst);
//  }
//  fclose(src);
//  fclose(dst);
//  free(dest);
//  return SimulinkErrorType::SLX_OK;
//}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
