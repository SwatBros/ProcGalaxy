#include "System.h"

void System::printInfos() {
	PrintUtils::printHeader();
	PrintUtils::printTitle(type + " - " + std::to_string(seed));
	PrintUtils::printLine("Name: " + StringGenerators::title(name));
	PrintUtils::printHeader();

	PrintUtils::printLine(" ---");
	std::vector<std::string> cols;
	cols.push_back("-   -");
	for (int i = 0; i < planet_number; i++) {
		cols.push_back("o");
	}
	PrintUtils::printTable(cols);
	PrintUtils::printLine(" ---");
}

void System::generate(int seed) {
	//If the seed is the same, don't regenerate
	if (this->seed != NULL and this->seed == seed) {
		return;
	}

	srand(seed);
	this->seed = seed;

	name = StringGenerators::randomName();
	planet_number = rand() % 10;
}