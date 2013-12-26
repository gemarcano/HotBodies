#ifndef _MATRIX_H_
#define _MATRIX_H_

#include <vector>

template <class T>
class Matrix
{
public:
	Matrix(unsigned int d1, unsigned int d2);
	Matrix(const Matrix<T>& aMatrix);
	~Matrix();

	T& operator()(int i, int j);

private:
	std::vector<std::vector<T> > mData;
	
};

template <class T>
Matrix<T>::Matrix(unsigned int d1,unsigned int d2)
:mData(d2, std::vector<T>(d1, 0))
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

#endif //_MATRIX_H_