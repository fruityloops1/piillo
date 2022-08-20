#pragma once

#include "game/System/Task.h"

class TaskMan {
    Task* mCurrentTask = nullptr;

public:
    void entry(Task* task);
};

extern TaskMan gTaskMainMan;