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

	ifstream file (mpFilePath, ios::in);

	int_fast32_t i = 0;
	int_fast32_t j = 0;

	if (file.is_open())
	{
		string s;
		int rows = 0;
		while(getline(file, s))
		{
			int columns = 0;
			++rows;
			istringstream buffer(s);

			while(getline(buffer, s, ','))
			{
				string s;
				++columns;
			}

		}
		
		std::unique_ptr<Matrix<int_fast32_t> > pimage (new Matrix<int_fast32_t> (rows, columns));

		while (getline(file, s))
		{
			istringstream holder(s);

			while (getline(holder, s, ',')
			{
				size_t period = s.find('.');
				if (period != string::npos)
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
