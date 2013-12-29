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

	std::unique_ptr<Matrix<int_fast32_t> > pimage = NULL;

	if (file.is_open())
	{
		std::string s;
		int_fast32_t rows = 0;
		int_fast32_t columns = 0;

		if(std::getline(file, s))
		{
			rows++;
			columns++;
			std::istringstream buffer(s);
			while(std::getline(buffer, s, ','))
			{
				++columns;
			}
			
			while(std::getline(file, s))
			{
				rows++;
			}

		}
		
		pimage = std::unique_ptr<Matrix<int_fast32_t> > (new Matrix<int_fast32_t> (rows, columns));

		//Shouldn't these be for loops?
		int_fast32_t i = 0;
		int_fast32_t j = 0;
		file.clear();
		file.seekg(0, file.beg);
		while (std::getline(file, s))
		{
			std::istringstream holder(s);

			while (std::getline(holder, s, ','))
			{
				std::size_t period = s.find('.');
				if (period != std::string::npos)
					s.erase(period,1);
				std::cerr << i << " " << j << "\n";
				std::stringstream(s) >> (*pimage) (i, j);
				j++;
			}
			i++;
			j = 0;
		}
		file.close();	
	}
	return pimage; 
}
