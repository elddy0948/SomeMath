#include "Vec3.h"

int main(void)
{
	Vec3 u(1, 2, 3);
	Vec3 v(1, 2, 3);

	Vec3 sumUV = u + v;
	Vec3 subtractionUV = u - v;
	
	Vec3 temp = u * 3;
	Vec3 temp1 = 4 * v;

	sumUV.ShowVec3();
	subtractionUV.ShowVec3();

	temp.ShowVec3();
	temp1.ShowVec3();
}