#include "DoubleTextParser.hpp"
#include "Matrix.hpp"
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <memory>

DoubleTextParser::DoubleTextParser(std::string apFilePath)
:mpFilePath(apFilePath)
{}

DoubleTextParser::~DoubleTextParser()
{}

std::unique_ptr<Matrix<int_fast32_t> > DoubleTextParser::parse()
{

	std::ifstream file (mpFilePath, std::ios::in);

	int_fast32_t i = 0;
	int_fast32_t j = 0;

	if (file.is_open())
	{
		std::string s;
		int rows = 0;
		int columns;
		while(std::getline(file, s))
		{
			columns = 0;
			++rows;
			std::istringstream buffer(s);

			while(std::getline(buffer, s, ','))
			{
				std::string s;
				++columns;
			}

		}
		
		std::unique_ptr<Matrix<int_fast32_t> > pimage (new Matrix<int_fast32_t> (rows, columns));

		while (std::getline(file, s))
		{
			std::istringstream holder(s);

			while (std::getline(holder, s, ','))
			{
				std::size_t period = s.find('.');
				if (period != std::string::npos)
					s.erase(period);
				(*pimage) (i, j) = s;
				j++;
			}
			i++;
		}
		file.close();	
	}
	return pimage; 
}
