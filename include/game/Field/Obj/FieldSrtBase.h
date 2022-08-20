#pragma once

#include "types.h"

class FieldSrtBase {
    u8 unk[0x36];

public:
    virtual ~FieldSrtBase();
    virtual void v1();
    virtual void v2(float*, float*);
};