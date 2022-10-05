#include "Vec3.h"

int main(void)
{
	Vec3 u(1, 2, 3);
	Vec3 v(1, 2, 3);

	Vec3 sumUV = u + v;
	Vec3 subtractionUV = u - v;

	sumUV.ShowVec3();
	subtractionUV.ShowVec3();
}