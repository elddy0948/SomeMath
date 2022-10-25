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

	void operator+=(const Matrix3x3& pMatrix);
	Matrix3x3 operator+(const Matrix3x3& pMatrix) const;
	void operator-=(const Matrix3x3& pMatrix);
	Matrix3x3 operator-(const Matrix3x3& pMatrix) const;
	void operator*=(const int scalar);
	Matrix3x3 operator*(const int scalar) const;


	Vec3 GetRow(int index) const 
	{
		return matrix[index];
	}
};

void Matrix3x3::operator+=(const Matrix3x3& pMatrix)
{
	matrix[0] += pMatrix.matrix[0];
	matrix[1] += pMatrix.matrix[1];
	matrix[2] += pMatrix.matrix[2];
}

Matrix3x3 Matrix3x3::operator+(const Matrix3x3& pMatrix) const
{
	Matrix3x3 result(*this);
	result += pMatrix;
	return result;
}

void Matrix3x3::operator-=(const Matrix3x3& pMatrix)
{
	matrix[0] -= pMatrix.matrix[0];
	matrix[1] -= pMatrix.matrix[1];
	matrix[2] -= pMatrix.matrix[2];
}

Matrix3x3 Matrix3x3::operator-(const Matrix3x3& pMatrix) const
{
	Matrix3x3 result(*this);
	result -= pMatrix;
	return result;
}

void Matrix3x3::operator*=(const int scalar)
{
	matrix[0] *= scalar;
	matrix[1] *= scalar;
	matrix[2] *= scalar;
}

Matrix3x3 Matrix3x3::operator*(const int scalar) const
{
}