#ifndef PRINTUTILS_H
#define PRINTUTILS_H
#define WIDTH 50

#include <iostream>

class PrintUtils
{
public:
	static void NotImplemented();
	static void printLine(std::string line);
	static void printHeader();
	static void printTitle(std::string line);
	static void printCenter(std::string line, unsigned int width);
	static void printTable(std::string* cols, unsigned int col_number);
};

#endif