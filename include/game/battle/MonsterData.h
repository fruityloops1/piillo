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
    u8 level;
    u8 spikiness;
    u16 hp;
    u16 power;
    u16 defence;
    u16 speed;
    u8 unknown3[2];
    u8 weakness;
    u8 unknown4[3];
    u16 exp;
    u16 coins;
    u16 unknown5;
    ItemType itemType;
    u16 itemChance;
    ItemType rareItemType;
    u16 rareItemChance;
    u8 unknown6[6];
};

BattleMonsterEntry* BtlGetMonData(unsigned int index);
