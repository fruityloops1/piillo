#pragma once

#include "types.h"

class GameWork {
public:
    int addItem(u16 type, s8 amount);
    int addCoin(int amount);

    int getItemNum(u16 type) const;
    u8 getRealAreaNo() const;

    void equipBadge(u8, u16);
    void equipItem(u8, u16, u8);

    bool isHardMode() const;
    void getPlayTime(s16*, s16*, s16*, s16*);
    void updatePlayTime();

    sfill(0x91c, unk);
    int mCoinCount;
};

extern GameWork gGameWork;