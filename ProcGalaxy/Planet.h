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

public:
	void generate();
	void printInfos();
};

#endif