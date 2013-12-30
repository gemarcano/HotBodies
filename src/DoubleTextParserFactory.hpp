#ifndef _DOUBLETEXTPARSERFACTORY_H_
#define _DOUBLETEXTPARSERFACTORY_H_

#include "ParserFactory.hpp"
#include "Parser.hpp"
#include <memory>
#include <string>

class DoubleTextParserFactory : public ParserFactory
{
public:
	DoubleTextParserFactory(const std::string&);
	virtual ~DoubleTextParserFactory();
  
	virtual std::unique_ptr<Parser> createParser();
private:
	std::string mFilePath;
};

#endif //_DOUBLETEXTPARSERFACTORY_H_
