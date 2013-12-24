#ifndef _FILEREADERFACTORY_H_
#define _FILEREADERFACTORY_H_

#include "Parser.hpp"

class FileReaderFactory
{
public:
	FileReaderFactory();
	virtual ~FileReaderFactory();
  
	virtual Parser* createParser();
};

#endif //_FILEREADERFACTORY_H_
