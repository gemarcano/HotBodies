#ifndef _DOUBLETEXTPARSERIMPL_H_
#define _DOUBLETEXTPARSERIMPL_H_

#include <string>
#include <vector>
#include "Matrix.hpp"
#include <stdint.h>
#include <memory>

class DoubleTextParserImpl
{
public:
	DoubleTextParserImpl(std::string);
	virtual ~DoubleTextParserImpl();

	virtual std::unique_ptr<Matrix<int_fast32_t> > parse();

private:
	std::string mpFilePath;

};

#endif //_DOUBLETEXTPARSERIMPL_H_
