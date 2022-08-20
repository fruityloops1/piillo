#include "game/FieldObjects/RealMario.h"
#include "game/System/GameWork.h"
#include "game/System/Tasks/FieldSystem.h"
#include "piillo/log.h"
#include <stdio.h>

int addCoinHook(GameWork* gameWork, int add)
{
    piillo::debugLog("Coin Count %d -> %d", gameWork->mCoinCount, gameWork->mCoinCount + add);
    return gameWork->addCoin(add);
}

void realMarioUpdateHook(RealMario* mario)
{
    EFUN(0x0053ddd4, void, base, FieldPC*);
    base(mario);
}

void fieldSystemExecuteHook(FieldSystem* system)
{
    system->FieldSystem::execute();

    static int r = 0;
    r++;
    piillo::debugLog("FieldSystem frame %d\n", r);
}