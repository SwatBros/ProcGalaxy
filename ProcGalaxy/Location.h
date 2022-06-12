#ifndef LOCATION_H
#define LOCATION_H

#include <iostream>;

#include "PrintUtils.h"

class Location {
protected:
	std::string type = "Location";
	Location* selected = this;

	virtual bool handleInput(char& c);
	virtual void printInfos();
	virtual void printActions();
public:
	virtual void generate();
	virtual void dispatchPrintInfos();
	virtual void dispatchPrintActions();
	virtual bool dispatchInput(char& c);
};

#endif