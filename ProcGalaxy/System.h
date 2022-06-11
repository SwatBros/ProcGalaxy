#ifndef SYSTEM_H
#define SYSTEM_H

#include <iostream>
#include <string>
#include <vector>

#include "PrintUtils.h"
#include "StringGenerators.h"
#include "Location.h"


class System : public Location {
private:
	std::string type = "System";
	int seed = NULL;
	std::string name = "";

	unsigned int planet_number = 0;

public:
	System() {};
	~System() {};

	void printInfos();
	void generate(int seed);
};

#endif