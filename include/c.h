#pragma once

#include "piillo/efun.h"
#include <stdarg.h>
#include <string.h>

// for standard functions with weird names (and standard thumb functions)

extern "C" {
EFUN(0x100649, int, __c89vsnprintf, ARGS(char* s, size_t n, const char* format, va_list arg)); // Thumb
}