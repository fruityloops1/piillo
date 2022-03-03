#include "game/system/GameWork.h"
#include "piillo/log.h"

int addCoinHook(GameWork* gameWork, int add)
{
    piillo::debugLog("Coin Count %d -> %d", gameWork->mCoinCount, gameWork->mCoinCount + add);
    return gameWork->addCoin(add);
}

void addItemHook(GameWork* gameWork, u16 type, s8 amount)
{
    piillo::debugLog("gGameWork.addItem(%hu, %x);", type, amount);
    gameWork->addItem(type, amount);
}

void equipItemHook(GameWork* gameWork, u8 r1, u16 r2, u8 r3)
{
    piillo::debugLog("gGameWork.equipItem(%d, %hu, %d);", r1, r2, r3);
    gameWork->equipItem(r1, r2, r3);
}