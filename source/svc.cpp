#include "svc.h"

void svc::OutputDebugString(const char* str, s32 length)
{
    __asm("mov r0, %[s]"
          : [s] "=r"(str));
    __asm("mov r1, %[l]"
          : [l] "=r"(length));
    __asm("svc 0x3d");
}