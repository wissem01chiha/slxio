#include "ResultManager.h"
#include "ResultHandler.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

ResultManager& ResultManager::GetInstance()
 {
        static ResultManager instance;
        return instance;
    }

    void ResultManager::SetBufferSize(size_t new_size)  {
        std::lock_guard<std::mutex> lock(log_mutex);
        ringBuffer.resize(new_size);
        head = 0; // Reset head to start of new buffer
    }

    void ResultManager::SetResult(SResult status) {
        // Extract error level using the mask we defined earlier
        UInt32 level = GetLevelIdentifier(status);
        
        // Ignore Success codes, only log Info (1) and Warning (2)
        if (level == 0) return; 

        std::lock_guard<std::mutex> lock(log_mutex);
        
        // Populate the record
        ringBuffer[head] = {
            status = status
        };

        // Move head pointer (wrap around if it hits BUFFER_SIZE)
        head = (head + 1) % BUFFER_SIZE;
    }

    SLXIO_ABI_NAMESPACE_END
};
