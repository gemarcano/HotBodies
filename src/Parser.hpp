#ifndef _PARSER_H_

#include <stdint.h>

class Parser
{
	
public:
	
	virtual ~Parser() {} ;
	virtual int_fast32_t* parse() = 0;
};

#define _PARSER_H_
#endif // _PARSER_H_