#pragma once

#include "types.h"

namespace nn {
namespace math {

    struct MTX34 {
        union {
            f32 m[3][4];
            f32 a[12];
        };

        MTX34() = default;
        MTX34(f32 r00, f32 r01, f32 r02, f32 r03,
            f32 r10, f32 r11, f32 r12, f32 r13,
            f32 r20, f32 r21, f32 r22, f32 r23)
        {
            m[0][0] = r00;
            m[0][1] = r01;
            m[0][2] = r02;
            m[0][3] = r03;

            m[1][0] = r10;
            m[1][1] = r11;
            m[1][2] = r12;
            m[1][3] = r13;

            m[2][0] = r20;
            m[2][1] = r21;
            m[2][2] = r22;
            m[2][3] = r23;
        }

        static const MTX34& Identity()
        {
            static const MTX34 identity {
                1.0, 0.0, 0.0, 0.0,
                0.0, 1.0, 0.0, 0.0,
                0.0, 0.0, 1.0, 0.0
            };

            return identity;
        }
    };

} // namespace math
} // namespace nn