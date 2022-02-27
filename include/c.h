#pragma once

#include "piillo/efun.h"
#include <cstdarg>
#include <cstring>

// for standard functions with weird names (and standard thumb functions)

extern "C" {
EFUN(0x100649, int, __c89vsnprintf, ARGS(char* s, size_t n, const char* format, va_list arg)); // Thumb
}