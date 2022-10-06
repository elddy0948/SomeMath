#include "Vec3.h"

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

	std::cout << u.Dot(v) << std::endl;
	std::cout << u.Cross(v) << std::endl;
}