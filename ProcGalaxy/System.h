#ifndef SYSTEM_H
#define SYSTEM_H

#include <iostream>
#include <string>
#include <vector>

#include "PrintUtils.h"
#include "StringGenerators.h"
#include "Location.h"
#include "Planet.h"


class System : public Location {
private:
	std::string type = "System";
	int seed = NULL;
	std::string name = "";

	unsigned int planet_number = 0;
	std::vector<Planet> planets;

	bool handleInput(char& c);
public:
	System() {
		srand(time(0));
		seed = rand();
	}

	void printInfos();
	void generate();
	void printActions();
};

#endif