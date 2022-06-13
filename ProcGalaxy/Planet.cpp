#include "Planet.h"


void Planet::generate() {
	name = StringGenerators::randomName();

	// 90% 0-3 10% 4-10
	if (rand() % 100 + 1 <= 90) {
		moon_number = rand() % 4;
	}
	else {
		moon_number = rand() % 7 + 4;
	}
	
}

void Planet::printInfos() {
	PrintUtils::printHeader();

	PrintUtils::printTitle(type + " " + StringGenerators::title(name));

	std::vector<std::string> v;
	v.push_back("o");
	for (int i = 0; i < moon_number; i++) {
		v.push_back(".");
	}
	
	PrintUtils::printTable(v);
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

unsigned int Planet::getMoonNumber() {
	return moon_number;
}