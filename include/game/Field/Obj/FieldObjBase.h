#pragma once

#include "types.h"

class FieldObjBase {
    u8 unk[0x9c];

public:
    virtual ~FieldObjBase();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
};