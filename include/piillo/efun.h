#pragma once

#include "game/system/GameWork.h"
#include <cstdint>

#define MAIN_ADDR (((uintptr_t)&gGameWork) - 0x6e7cd0)

#define ARGS(...) __VA_ARGS__
#define EFUN(ADDR, RET, NAME, ARGS) \
    static auto NAME = (RET(*)(ARGS))(MAIN_ADDR + ADDR)