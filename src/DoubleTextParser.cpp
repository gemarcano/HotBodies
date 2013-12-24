#include "DoubleTextParser.hpp"
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

DoubleTextParser::DoubleTextParser(fstream *apFile)
:mpFile = apFile
{
	
}

DoubleTextParser::~DoubleTextParser()
{
	
}

int_fast32_t* DoubleTextParser::parse()
{
	int_fast32_t * image = new int [480][640];

	if (!*mpFile.is_open())
		*mpFile.open( , ios::in)


	int_fast32_t i = 0;
	int_fast32_t j = 0;
	if (*mpFile)
	{
		string s;
		/*read into image considering parsing by commas for rows and newlines for columns*/
		while (getline(*mpFile, s))
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
				image[i][j] = s;
				j++;
			}
			i++;
		}

	}	
	return (int_fast32_t*)(0); 
}