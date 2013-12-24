#include "DoubleTextParser.hpp"
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
	int_fast32_t * image = new int [480][640];

	ifstream file (mpFilePath, ios::in);

	int_fast32_t i = 0;
	int_fast32_t j = 0;
	while (file.is_open())
	{
		string s;
		/*read into image considering parsing by commas for rows and newlines for columns*/
		if (!getline(file, s))
			break;
		istringstream holder(s);

		while (holder)
		{
			string s;
			if (!getline(holder, s, ',')
				break;
			size_t period = s.find('.');
			if (period != string::npos)
				s.erase(period);
			image[i][j] = s;
			j++;
		}
		i++;
	
	}	
	file.close();
	return (int_fast32_t*)(image); 
}