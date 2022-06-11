#ifndef LOCATION_H
#define LOCATION_H

#include <iostream>;

#include "PrintUtils.h"

class Location {
protected:
	std::string type = "Location";

public:
	virtual void printInfos();
	virtual void generate();
};

#endif