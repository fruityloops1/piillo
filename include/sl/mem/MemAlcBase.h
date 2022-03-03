#pragma once

#include <stdint.h>

class MemAlcBase {
public:
    virtual void free(void* ptr);
    virtual void unk();
    virtual void unk2();
    virtual void* allocCore(unsigned int size, unsigned int alignment);
};