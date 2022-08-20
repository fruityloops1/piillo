#pragma once

#include "types.h"
#include <math.h>

namespace nn {
namespace math {

    struct VEC3 {
        f32 x, y, z;

        VEC3() = default;
        VEC3(f32 x, f32 y, f32 z)
            : x(x)
            , y(y)
            , z(z)
        {
        }

        static const VEC3& Zero()
        {
            static const VEC3 zero {
                0, 0, 0
            };
            return zero;
        }

        static const VEC3& One()
        {
            static const VEC3 one {
                1, 1, 1
            };
            return one;
        }

        VEC3 operator+(f32 add) const { return { x + add, y + add, z + add }; }
        VEC3 operator-(f32 sub) const { return { x - sub, y - sub, z - sub }; }
        VEC3 operator/(f32 div) const { return { x / div, y / div, z / div }; }
        VEC3 operator*(f32 mul) const { return { x * mul, y * mul, z * mul }; }
        VEC3 operator+(const VEC3& other) const { return { x + other.x, y + other.y, z + other.z }; }
        VEC3 operator-(const VEC3& other) const { return { x - other.x, y - other.y, z - other.z }; }
        VEC3 operator/(const VEC3& other) const { return { x / other.x, y / other.y, z / other.z }; }
        VEC3 operator*(const VEC3& other) const { return { x * other.x, y * other.y, z * other.z }; }
        VEC3& operator+=(const VEC3& other)
        {
            x += other.x;
            y += other.y;
            z += other.z;
            return *this;
        }
        VEC3& operator-=(const VEC3& other)
        {
            x -= other.x;
            y -= other.y;
            z -= other.z;
            return *this;
        }
        VEC3& operator/=(const VEC3& other)
        {
            x /= other.x;
            y /= other.y;
            z /= other.z;
            return *this;
        }
        VEC3& operator*=(const VEC3& other)
        {
            x *= other.x;
            y *= other.y;
            z *= other.z;
            return *this;
        }
        VEC3& operator+=(f32 add)
        {
            x += add;
            y += add;
            z += add;
            return *this;
        }
        VEC3& operator-=(f32 sub)
        {
            x -= sub;
            y -= sub;
            z -= sub;
            return *this;
        }
        VEC3& operator/=(f32 div)
        {
            x /= div;
            y /= div;
            z /= div;
            return *this;
        }
        VEC3& operator*=(f32 mul)
        {
            x *= mul;
            y *= mul;
            z *= mul;
            return *this;
        }

        f32 LengthSquare() const { return x * x + y * y + z * z; }
        f32 Length() const { return sqrtf(LengthSquare()); }
    };

} // namespace mth
} // namespace nn