#include <vector>
#include "Matrix.hpp"

using namespace std;

template <class T>
Matrix<T>::Matrix(unsigned int d1,unsigned int d2)
:mData(d2, vector<T>(d1, 0))
{}

template <class T>
Matrix<T>::~Matrix()
{}

template <class T>
Matrix<T>::Matrix(const Matrix<T>& aMatrix)
:mData(aMatrix.mData)
{}

template <class T>
T& Matrix<T>::operator() (int i, int j)
{
	return mData[i][j];
}