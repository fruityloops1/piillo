#pragma once

class TaskMan;
class Task {
    TaskMan* mParent = nullptr;

public:
    virtual void execute();
    virtual ~Task();
    virtual void v1();

    void term();
};