

#include "ILogger.h"

class ILoggerWriter {
public:
    virtual ~ILoggerWriter() = default;
    virtual void Write(const LogMessage& msg) = 0;
};
