#pragma once

#include "Vec3.h"

#include <iostream>

class Matrix3x3
{
private:
	Vec3 matrix[3] =
	{
		Vec3(1, 0, 0),
		Vec3(0, 1, 0),
		Vec3(0, 0, 1)
	};

public:
	Matrix3x3(const Vec3& vec0, const Vec3& vec1, const Vec3& vec2)
	{
		matrix[0] = vec0;
		matrix[1] = vec1;
		matrix[2] = vec2;
	}

	Vec3 GetRow(int index) const 
	{
		return matrix[index];
	}
};