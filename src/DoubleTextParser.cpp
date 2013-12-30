#include "DoubleTextParser.hpp"
#include "Matrix.hpp"
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <memory>

/*DoubleTextParser::DoubleTextParser(std::string apFilePath)
:mpFilePath(apFilePath)
{}*/

DoubleTextParser::DoubleTextParser(std::unique_ptr<DoubleTextParserImpl>& 
apImpl)
: mpImpl(std::move(apImpl))
{}

DoubleTextParser::~DoubleTextParser()
{}

std::unique_ptr<Matrix<int_fast32_t> > DoubleTextParser::parse()
{
	return mpImpl->parse(); 
}
