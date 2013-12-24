#ifndef _PARSERFACTORY_H_
#define _PARSERFACTORY_H_

#include "Parser.hpp"

class ParserFactory
{
public:
	ParserFactory() = 0;
	virtual ~ParserFactory() {};
  
	virtual Parser* createParser() = 0;
};

#endif //_PARSERFACTORY_H_
