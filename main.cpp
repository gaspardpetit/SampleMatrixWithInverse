#include <Enseed/Geometry/Matrix.h>
#include <Enseed/Geometry/LUMatrixInverse.h>
#include <Enseed/Geometry/LUMatrixDeterminant.h>

using namespace seed;

template<typename MATRIX>
void Test(const MATRIX &matrix)
{
	printf("matrix: %s\ninverse: %s\ndeterminant: %f\n",
		matrix.serialize().c_str(),
		matrix.inversed().serialize().c_str(),
		matrix.determinant());
}

int main(int argc, const char *argv[])
{
	float test1[4] = { 4, 3, 6, 3 };
	Test(Matrix2f::fromPtr(test1));

	float test2[9] = { -2, 2, -3, -1, 1, 3, 2, 0, -1};
	Test(Matrix3f::fromPtr(test2));

	float test3[4] = { 2, 1, -1, 3};
	Test(Matrix2f::fromPtr(test3));

	float test4[9] = { -2, 3, -1, 5, -1, 4, 4, -8, 2};
	Test(Matrix3f::fromPtr(test4));
	return 0;
}
