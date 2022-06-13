#include "Planet.h"


void Planet::generate() {
	name = StringGenerators::randomName();
}

void Planet::printInfos() {
	PrintUtils::printHeader();

	PrintUtils::printTitle(type + " " + StringGenerators::title(name));
}

void Planet::handleInput(char& c) {
	switch (c) {
	case 's':
		owner->deselect();
		break;
	}
}

void Planet::printActions() {
	std::vector<std::vector<std::string>> actions{
		{"s) System", "", ""}
	};

	for (auto a : actions) {
		PrintUtils::printTable(a);
	}
}