#ifndef _DOUBLETEXTPARSER_H_
#define _DOUBLETEXTPARSER_H_

#include "Parser.hpp"
#include <string>


class DoubleTextParser : public Parser
{
public:
	DoubleTextParser(std::string);
	~DoubleTextParser();
	
	int_fast32_t* parse();

private:
	std::string mpFilePath;
	
};

#endif //_DOUBLETEXTPARSER_H_