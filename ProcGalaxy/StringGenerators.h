#ifndef STRINGGENERATORS_H
#define STRINGGENERATORS_H

#define RM_MINLEN 4
#define RM_MAXLEN 10

#include <iostream>

class StringGenerators
{
private:
	static const char vows[];
	static const char cons[];
public:
	static std::string randomName();
	static std::string title(std::string str);
};

#endif

