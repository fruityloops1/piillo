#pragma once

#include "game/Field/Obj/FieldObjBase.h"
#include "nn/math/Matrix34.h"

class FieldObjCA : public FieldObjBase {
    int unk2;
    class FieldCA* mFieldCA = nullptr;
    int unk3;
    nn::math::MTX34* mMtx = nullptr;
};