#ifndef _DOUBLETEXTPARSERFACTORY_H_
#define _DOUBLETEXTPARSERFACTORY_H_

#include "ParserFactory.hpp"
#include "Parser.hpp"

class DoubleTextParserFactory : public ParserFactory
{
public:
	DoubleTextParserFactory();
	~DoubleTextParserFactory() {};
  
	Parser* createParser();
};

#endif //_DOUBLETEXTPARSERFACTORY_H_
