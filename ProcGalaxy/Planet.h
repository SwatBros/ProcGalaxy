#ifndef PLANET_H
#define PLANET_H

#include <iostream>

#include "StringGenerators.h"
#include "PrintUtils.h"
#include "Location.h"


class Planet : public Location
{
private:
	std::string type = "Planet";
	std::string name = "";


	void printInfos();
	void printActions();
	void handleInput(char& c);
public:
	void generate();
};

#endif