#ifndef _DOUBLETEXTPARSER_H_
#define _DOUBLETEXTPARSER_H_

#include "Parser.hpp"

class DoubleTextParser : public Parser
{
public:
	DoubleTextParser();
	~DoubleTextParser();
	
	int_fast32_t* parse();
};

#endif //_DOUBLETEXTPARSER_H_