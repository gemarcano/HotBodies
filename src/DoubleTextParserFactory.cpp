#include "DoubleTextParserFactory.hpp"
#include "DoubleTextParser.hpp"

DoubleTextParserFactory::DoubleTextParserFactory() {};
DoubleTextParserFactory::~DoubleTextParserFactory() {};
 
std::unique_ptr<Parser> DoubleTextParserFactory::createParser()
{	
	return std::unique_ptr<Parser>(new DoubleTextParser(""));
}


