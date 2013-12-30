#ifndef _DOUBLETEXTPARSER_H_
#define _DOUBLETEXTPARSER_H_

#include "Parser.hpp"
#include <string>
#include <vector>
#include "Matrix.hpp"
#include <memory>
#include "DoubleTextParserImpl.hpp"

class DoubleTextParser : public Parser
{
public:
	//DoubleTextParser(std::string);
	DoubleTextParser(std::unique_ptr<DoubleTextParserImpl>&);
	virtual ~DoubleTextParser();

	virtual std::unique_ptr<Matrix<int_fast32_t> > parse();

private:
	std::unique_ptr<DoubleTextParserImpl> mpImpl;

};

#endif //_DOUBLETEXTPARSER_H_
