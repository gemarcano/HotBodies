#ifndef _PARSER_H_

#include <stdint.h>
#include <memory>
#include "Matrix.hpp"

class Parser
{
	
public:
	virtual ~Parser() {} ;
	virtual std::unique_ptr<Matrix<int_fast32_t> > parse() = 0;
};

#define _PARSER_H_
#endif // _PARSER_H_