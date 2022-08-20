#pragma once

#include "types.h"

class FieldChrBase {
    u8 unk[0xe0];

public:
    virtual ~FieldChrBase();
    virtual int v1();
    virtual int v2();
    virtual int v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
};