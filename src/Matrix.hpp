#ifndef _MATRIX_H_
#define _MATRIX_H_

#include <vector>

template <class T>
class Matrix
{
public:
	Matrix<T>(unsigned int d1, unsigned int d2);
	Matrix<T>(const Matrix<T>& aMatrix);
	~Matrix();

	T& operator()(int i, int j);

private:
	std::vector<std::vector<T> > mData;
	
};

#endif //_MATRIX_H_