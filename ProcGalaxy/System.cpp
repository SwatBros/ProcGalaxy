#include "System.h"

void Location::printInfos() {
	PrintUtils::NotImplemented();
}

void Location::generate() {
	PrintUtils::NotImplemented();
}


void System::printInfos() {
	PrintUtils::printHeader();
	PrintUtils::printTitle(type);
	PrintUtils::printLine("Seed: " + std::to_string(seed));
	PrintUtils::printLine("Name: " + std::to_string(name));
}

void System::generate(int seed) {
	//If the seed is the same, don't regenerate
	if (this->seed != NULL and this->seed == seed) {
		return;
	}

	srand(seed);
	this->seed = seed;

	name = rand();
}