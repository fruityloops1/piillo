#pragma once

#include "types.h"
#include <math.h>

namespace nn {
namespace math {

    struct VEC4 {
        f32 x, y, z, w;

        VEC4() = default;
        VEC4(f32 x, f32 y, f32 z, f32 w)
            : x(x)
            , y(y)
            , z(z)
            , w(w)
        {
        }

        static const VEC4& Zero()
        {
            static const VEC4 zero {
                0, 0, 0, 0
            };
            return zero;
        }

        static const VEC4& One()
        {
            static const VEC4 one {
                1, 1, 1, 1
            };
            return one;
        }

        VEC4 operator+(f32 add) const { return { x + add, y + add, z + add, w + add }; }
        VEC4 operator-(f32 sub) const { return { x - sub, y - sub, z - sub, w - sub }; }
        VEC4 operator/(f32 div) const { return { x / div, y / div, z / div, w / div }; }
        VEC4 operator*(f32 mul) const { return { x * mul, y * mul, z * mul, w * mul }; }
        VEC4 operator+(const VEC4& other) const { return { x + other.x, y + other.y, z + other.z, w + other.w }; }
        VEC4 operator-(const VEC4& other) const { return { x - other.x, y - other.y, z - other.z, w - other.w }; }
        VEC4 operator/(const VEC4& other) const { return { x / other.x, y / other.y, z / other.z, w / other.w }; }
        VEC4 operator*(const VEC4& other) const { return { x * other.x, y * other.y, z * other.z, w * other.w }; }
        VEC4& operator+=(const VEC4& other)
        {
            x += other.x;
            y += other.y;
            z += other.z;
            w += other.w;
            return *this;
        }
        VEC4& operator-=(const VEC4& other)
        {
            x -= other.x;
            y -= other.y;
            z -= other.z;
            w -= other.w;
            return *this;
        }
        VEC4& operator/=(const VEC4& other)
        {
            x /= other.x;
            y /= other.y;
            z /= other.z;
            w /= other.w;
            return *this;
        }
        VEC4& operator*=(const VEC4& other)
        {
            x *= other.x;
            y *= other.y;
            z *= other.z;
            w *= other.w;
            return *this;
        }
        VEC4& operator+=(f32 add)
        {
            x += add;
            y += add;
            z += add;
            w += add;
            return *this;
        }
        VEC4& operator-=(f32 sub)
        {
            x -= sub;
            y -= sub;
            z -= sub;
            w -= sub;
            return *this;
        }
        VEC4& operator/=(f32 div)
        {
            x /= div;
            y /= div;
            z /= div;
            w /= div;
            return *this;
        }
        VEC4& operator*=(f32 mul)
        {
            x *= mul;
            y *= mul;
            z *= mul;
            w *= mul;
            return *this;
        }

        f32 LengthSquare() const { return x * x + y * y + z * z + w * w; }
        f32 Length() const { return sqrtf(LengthSquare()); }
    };

} // namespace mth
} // namespace nn