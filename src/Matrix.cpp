#include <vector>

using namespace std;

Matrix::Matrix(int d1, int d2)
:mData(d2, vector<int>(d1, 0))
{}

Matrix::~Matrix();

Matrix::Matrix(const Matrix<T>& aMatrix)
:mData(aMatrix.mData)
{}

T& operator() (int i, int j)
{
	return mData[i][j];
}