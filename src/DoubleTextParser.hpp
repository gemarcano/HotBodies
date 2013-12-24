#ifndef _DOUBLETEXTPARSER_H_
#define _DOUBLETEXTPARSER_H_

#include "Parser.hpp"

class DoubleTextParser : public Parser
{
	DoubleTextParser();
	~DoubleTextParser();
	
	virtual int_fast32_t* parse();
};

#endif //_DOUBLETEXTPARSER_H_