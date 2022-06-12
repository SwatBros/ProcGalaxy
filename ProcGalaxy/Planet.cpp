#include "Planet.h"


void Planet::generate() {
	name = StringGenerators::randomName();
}

void Planet::printInfos() {
	PrintUtils::printHeader();

	PrintUtils::printTitle(type + " " + name);
}