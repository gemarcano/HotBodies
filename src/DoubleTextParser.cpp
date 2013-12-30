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

std::vector<std::string> getFileRows(std::ifstream& aFile)
{
	std::vector<std::string> result;
	if (aFile.is_open())
	{
		std::string data;
		while(aFile.good())
		{
			getline(aFile, data);
			result.push_back(data);
		}
		aFile.close();
	}
	
	return result;
}

std::vector<std::string> split(const std::string& aString, char aDelim)
{
	std::vector<std::string> result;
	std::stringstream ss(aString);
	std::string data;
	
	while (ss.good())
	{
		getline(ss, data, aDelim);
		result.push_back(data);
	}
	return result;
}

std::string deleteInstances(const std::string& aString, char aInst)
{
	std::string result = aString;
	size_t pos = result.find(aInst);
	while (pos != std::string::npos)
	{
		result.erase(pos,1);
		pos = result.find(aInst);
	}
	return result;
}

std::unique_ptr<Matrix<int_fast32_t> > DoubleTextParser::parse()
{

	std::ifstream file (mpFilePath, std::ios::in);
	std::unique_ptr<Matrix<int_fast32_t> > pImage = NULL;
	std::vector<std::string> dataRows = getFileRows(file);
	
	if (!dataRows.empty())
	{
		std::vector<std::string> splitRow(split(dataRows[0], ','));
		
		size_t rows = 0, columns = 0;
		rows = dataRows.size();
		columns = splitRow.size();
		
		pImage = std::unique_ptr<Matrix<int_fast32_t> > (new Matrix<int_fast32_t> (rows, columns));
		
		for (size_t j = 0; j < columns; j++)
		{			
			std::istringstream(deleteInstances(splitRow[j], '.'))
				>> (*pImage)(0, j);
		}

		for (size_t i = 1; i < rows; i++)
		{
			splitRow = split(dataRows[i], ',');
			for (size_t j = 0; j < columns; j++)
			{
				std::istringstream(deleteInstances(splitRow[j], '.'))
					>> (*pImage)(i, j);
			}
		}
	}
	return pImage; 
}
