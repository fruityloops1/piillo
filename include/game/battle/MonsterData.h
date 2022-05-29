#pragma once

#include "types.h"

enum class ItemType : u16 {
    Mushroom = 0x1000,
    UltraNut = 0x1006
};

struct BattleMonsterEntry {
    u16 nameIndex = 0;
    u8 unknown[6];
    u8 spriteIndex;
    u8 unknown2[15];
    u8 spikiness;
    u8 level;
    u16 hp;
    u16 power;
    u16 defence;
    u16 speed;
    u8 unknown3[6];
    u16 exp;
    u16 coins;
    u16 unknown4;
    ItemType itemType;
    u16 itemChance;
    ItemType rareItemType;
    u16 rareItemChance;
    u8 unknown5[6];
};

BattleMonsterEntry* BtlGetMonData(unsigned int index);