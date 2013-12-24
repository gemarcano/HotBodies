#include "DoubleTextParser.hpp"
#include <string>
#include <fstream>
#include <sstream>

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

	ifstream img_file ("stuff.txt");

	int_fast32_t i = 0;
	int_fast32_t j = 0;
	while (img_file)
	{
		string s;
		/*read into image considering parsing by commas for rows and newlines for columns*/
		if (!getline(img_file, s))
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
	return (int_fast32_t*)(0); 
}