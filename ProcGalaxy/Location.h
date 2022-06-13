#ifndef LOCATION_H
#define LOCATION_H

#include <iostream>;

#include "PrintUtils.h"

class Location {
protected:
	std::string type = "Location";
	Location* owner = nullptr;
	Location* selected = this;

	virtual void handleInput(char& c);
	virtual void printInfos();
	virtual void printActions();
public:
	virtual void generate();
	virtual void dispatchPrintInfos();
	virtual void dispatchPrintActions();
	virtual void dispatchInput(char& c);

	virtual void setOwner(Location* o);
	virtual void deselect();
};

#endif