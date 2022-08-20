#pragma once

#include "types.h"
#include <math.h>

namespace nn {
namespace math {

    struct VEC2 {
        f32 x, y;

        VEC2() = default;
        VEC2(f32 x, f32 y)
            : x(x)
            , y(y)
        {
        }

        static const VEC2& Zero()
        {
            static const VEC2 zero {
                0, 0
            };
            return zero;
        }

        static const VEC2& One()
        {
            static const VEC2 one {
                1, 1
            };
            return one;
        }

        VEC2 operator+(f32 add) const { return { x + add, y + add }; }
        VEC2 operator-(f32 sub) const { return { x - sub, y - sub }; }
        VEC2 operator/(f32 div) const { return { x / div, y / div }; }
        VEC2 operator*(f32 mul) const { return { x * mul, y * mul }; }
        VEC2 operator+(const VEC2& other) const { return { x + other.x, y + other.y }; }
        VEC2 operator-(const VEC2& other) const { return { x - other.x, y - other.y }; }
        VEC2 operator/(const VEC2& other) const { return { x / other.x, y / other.y }; }
        VEC2 operator*(const VEC2& other) const { return { x * other.x, y * other.y }; }
        VEC2& operator+=(const VEC2& other)
        {
            x += other.x;
            y += other.y;
            return *this;
        }
        VEC2& operator-=(const VEC2& other)
        {
            x -= other.x;
            y -= other.y;
            return *this;
        }
        VEC2& operator/=(const VEC2& other)
        {
            x /= other.x;
            y /= other.y;
            return *this;
        }
        VEC2& operator*=(const VEC2& other)
        {
            x *= other.x;
            y *= other.y;
            return *this;
        }
        VEC2& operator+=(f32 add)
        {
            x += add;
            y += add;
            return *this;
        }
        VEC2& operator-=(f32 sub)
        {
            x -= sub;
            y -= sub;
            return *this;
        }
        VEC2& operator/=(f32 div)
        {
            x /= div;
            y /= div;
            return *this;
        }
        VEC2& operator*=(f32 mul)
        {
            x *= mul;
            y *= mul;
            return *this;
        }

        f32 LengthSquare() const { return x * x + y * y; }
        f32 Length() const { return sqrtf(LengthSquare()); }
    };

} // namespace mth
} // namespace nn