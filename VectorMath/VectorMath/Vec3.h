#pragma once

#include <iostream>
#include <cmath>

class Vec3
{
private:
	float x;
	float y;
	float z;
	friend std::ostream& operator<<(std::ostream& os, const Vec3& vec);
public:
	Vec3(float x, float y, float z)
		: x(x), y(y), z(z) {}
	~Vec3() = default;

	// Operators
	Vec3& operator+=(const Vec3 vec);
	Vec3& operator-=(const Vec3 vec);
	Vec3 operator+(const Vec3 vec) const;
	Vec3 operator-(const Vec3 vec) const;
	Vec3 operator*(const int s) const;

	auto Size() const;
	Vec3 Normalize() const;

	auto Dot(const Vec3 vec) const;	// ³»Àû
	Vec3 Cross(const Vec3 vec) const;	
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

auto Vec3::Size() const
{
	int vec_square = x * x + y * y + z * z;
	auto vec_size = std::sqrt(vec_square);
	return vec_size;
}

Vec3 Vec3::Normalize() const
{
	// u / ||u||
	auto vec_size = this->Size();
	return Vec3(x / vec_size, y / vec_size, z / vec_size);
}

auto Vec3::Dot(const Vec3 vec) const
{
	return x * vec.x + y * vec.y + z * vec.z;
}

Vec3 Vec3::Cross(const Vec3 vec) const
{
	return Vec3(y * vec.z - z * vec.y, z * vec.x - x * vec.z, x * vec.y - y * vec.x);
}

std::ostream& operator<<(std::ostream& os, const Vec3& vec)
{
	os << '(' << vec.x << ", " << vec.y << ", " << vec.z << ')';
	return os;
}