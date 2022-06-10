#ifndef SYSTEM_H
#define SYSTEM_H

#include <iostream>
#include <string>

#include "PrintUtils.h"


class Location {
protected:
	std::string type = "Location";

public:
	virtual void printInfos();
	virtual void generate();
};

class System : public Location {
private:
	std::string type = "System";
	int seed = NULL;
	int name = NULL;

public:
	System() {};
	~System() {};

	void printInfos();
	void generate(int seed);
};

#endif