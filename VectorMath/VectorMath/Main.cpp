#include "Vec3.h"
#include "Matrix3x3.h"

int main(void)
{
	Vec3 u(1, 2, 3);
	Vec3 v(-4, 0, -1);

	/*std::cout << u + v << std::endl;
	std::cout << u - v << std::endl;

	std::cout << u * 3 << std::endl;
	std::cout << 4 * v << std::endl;*/

	/*std::cout << u.Size() << std::endl;
	std::cout << u.Normalize() << std::endl;
	std::cout << u.Normalize().Size() << std::endl;*/

	/*std::cout << u.Dot(v) << std::endl;
	std::cout << u.Cross(v) << std::endl;*/

	Matrix3x3 mat1{ Vec3(1, 2, 3), Vec3(4, 5, 6), Vec3(7, 8, 9) };
	Matrix3x3 mat2{ Vec3(1, 2, 3), Vec3(4, 5, 6), Vec3(7, 8, 9) };
	Matrix3x3 addMat = mat1 + mat2;
	mat1 += mat2;

	for (int i = 0; i < 3; i++)
	{
		std::cout << addMat.GetRow(i) << std::endl;
	}

	for (int i = 0; i < 3; i++)
	{
		std::cout << mat1.GetRow(i) << std::endl;
	}
}