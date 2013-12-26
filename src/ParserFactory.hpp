#ifndef _PARSERFACTORY_H_
#define _PARSERFACTORY_H_

#include "Parser.hpp"
#include <memory>

class ParserFactory
{
public:
	ParserFactory();
	virtual ~ParserFactory() {};
  
	virtual std::unique_ptr<Parser> createParser() = 0;
};

#endif //_PARSERFACTORY_H_
