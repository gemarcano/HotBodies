#ifndef _DOUBLETEXTPARSERFACTORY_H_
#define _DOUBLETEXTPARSERFACTORY_H_

#include "ParserFactory.hpp"
#include "Parser.hpp"
#include <memory>

class DoubleTextParserFactory : public ParserFactory
{
public:
	DoubleTextParserFactory();
	virtual ~DoubleTextParserFactory();
  
	virtual std::unique_ptr<Parser> createParser();
};

#endif //_DOUBLETEXTPARSERFACTORY_H_
