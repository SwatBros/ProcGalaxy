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

	void handleInput(char& c);

	void setSeed(int value);
public:
	System();

	void printInfos();
	void generate();
	void printActions();
};

#endif