#ifndef _DOUBLETEXTPARSER_H_
#define _DOUBLETEXTPARSER_H_

#include "Parser.hpp"
#include <fstream>


class DoubleTextParser : public Parser
{
public:
	DoubleTextParser(fstream*);
	~DoubleTextParser();
	
	int_fast32_t* parse();

private:
	std::fstream *mpFile;
	
};

#endif //_DOUBLETEXTPARSER_H_