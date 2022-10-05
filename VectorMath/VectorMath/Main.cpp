#include "Vec3.h"

int main(void)
{
	Vec3 u(1, 2, 3);
	Vec3 v(1, 2, 3);

	std::cout << u + v << std::endl;
	std::cout << u - v << std::endl;

	std::cout << u * 3 << std::endl;
	std::cout << 4 * v << std::endl;
}