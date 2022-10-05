#pragma once

#include <iostream>

class Vec3
{
private:
	int x;
	int y;
	int z;

public:
	Vec3(int x, int y, int z)
		: x(x), y(y), z(z) {}
	~Vec3() = default;

	// Operators
	Vec3& operator+=(const Vec3 vec);
	Vec3& operator-=(const Vec3 vec);
	Vec3 operator+(const Vec3 vec) const;
	Vec3 operator-(const Vec3 vec) const;
	Vec3 operator*(const int s) const;

	void ShowVec3() const;
};

// Operators Implementations
Vec3& Vec3::operator+=(const Vec3 vec)
{
	x += vec.x;
	y += vec.y;
	z += vec.z;

	return *this;
}

Vec3& Vec3::operator-=(const Vec3 vec)
{
	x -= vec.x;
	y -= vec.y;
	z -= vec.z;

	return *this;
}

Vec3 Vec3::operator+(const Vec3 vec) const
{
	return Vec3(x + vec.x, y + vec.y, z + vec.z);
}

Vec3 Vec3::operator-(const Vec3 vec) const
{
	return Vec3(x - vec.x, y - vec.y, z - vec.z);
}

Vec3 Vec3::operator*(const int s) const
{
	return Vec3(x * s, y * s, z * s);
}

Vec3 operator*(const int s, const Vec3& vec)
{
	return vec * s;
}

void Vec3::ShowVec3() const
{
	std::cout << '(' << x << ", " << y << ", " << z << ')' << std::endl;
}