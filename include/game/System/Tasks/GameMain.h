#pragma once

#include "game/System/TaskMainBase.h"
#include "types.h"

enum class GAME_MODE : u32 {
    BATTLE_ENCOUNT = 2
};

class GameMain : public TaskMainBase {
    u8 unk[0xb8];

public:
    static void change(GAME_MODE mode);
    void back();
};

extern GameMain* gGameMain;