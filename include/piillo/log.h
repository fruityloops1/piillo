#pragma once

#include "c.h"
#include "svc.h"

namespace piillo {

inline void debugLog(const char* format, ...)
{
    va_list args;
    va_start(args, format);

    s32 size = __c89vsnprintf(nullptr, 0, format, args);
    char buf[size + 1];
    /*
     * Can be done on the heap too:
     * char* buf = (char*)gMem.allocCore(size + 1, 4);
     */
    __c89vsnprintf(buf, size + 1, format, args);

    va_end(args);

    svc::OutputDebugString(buf, size);

    // gMem.free(buf);
}

} // namespace piilo