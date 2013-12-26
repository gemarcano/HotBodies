#ifndef _DOUBLETEXTPARSER_H_
#define _DOUBLETEXTPARSER_H_

#include "Parser.hpp"
#include <string>
#include <vector>
#include "Matrix.hpp"
#include <memory>

class DoubleTextParser : public Parser
{
public:
	DoubleTextParser(std::string);
	virtual ~DoubleTextParser();

	virtual std::unique_ptr<Matrix<int_fast32_t> > parse();

private:
	std::string mpFilePath;

};

#endif //_DOUBLETEXTPARSER_H_
