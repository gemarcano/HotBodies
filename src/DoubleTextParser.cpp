#include "DoubleTextParser.hpp"
#include "Matrix.hpp"
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

DoubleTextParser::DoubleTextParser(std::string apFilePath)
:mpFilePath = apFilePath
{
	
}

DoubleTextParser::~DoubleTextParser()
{
	
}

int_fast32_t* DoubleTextParser::parse()
{

	ifstream file (mpFilePath, ios::in);

	int_fast32_t i = 0;
	int_fast32_t j = 0;
	Matrix<int_fast32_t> myMatrix(480, 640);

	if (file.is_open())
	{
		string s;
		while (getline(file, s))
		{
			istringstream holder(s);

			while (holder)
			{
				string s;
				if (!getline(holder, s, ',')
					break;
				size_t period = s.find('.');
				if (period != string::npos)
					s.erase(period);
				myMatrix(i, j) = s;
				j++;
			}
			i++;
		}
		file.close();	
	}
	return (int_fast32_t*)(0); 
}