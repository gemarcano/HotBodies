#include "FileReaderFactory.hpp"

FileReaderFactory::FileReaderFactory() {};
FileReaderFactory::~FileReaderFactory() {};
 
Parser* FileReaderFactory::createParser()
{	
	return (Parser*)(0);
}


