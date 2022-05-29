#include "game/system/GameWork.h"
#include "piillo/log.h"

int addCoinHook(GameWork* gameWork, int add)
{
    piillo::debugLog("Coin Count %d -> %d", gameWork->mCoinCount, gameWork->mCoinCount + add);
    return gameWork->addCoin(add);
}