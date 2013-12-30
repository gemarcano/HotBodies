#include "DoubleTextParserFactory.hpp"
#include "DoubleTextParser.hpp"
#include <memory>

DoubleTextParserFactory::DoubleTextParserFactory(const std::string& aFilePath)
:mFilePath(aFilePath)
{}

DoubleTextParserFactory::~DoubleTextParserFactory()
{}
 
std::unique_ptr<Parser> DoubleTextParserFactory::createParser()
{
	std::unique_ptr<DoubleTextParserImpl> pImpl
		(new DoubleTextParserImpl(mFilePath));
	return std::unique_ptr<Parser>(new DoubleTextParser(pImpl));
}
