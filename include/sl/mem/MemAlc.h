#pragma once

#include "sl/mem/MemAlcBase.h"

class MemAlc : public MemAlcBase {
public:
    void free(void* ptr) override;
    void* allocCore(unsigned int size, unsigned int alignment) override;

private:
    uint32_t _4;
    uint32_t _8;
};

extern MemAlc gMem;