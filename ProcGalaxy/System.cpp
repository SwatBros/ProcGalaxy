#include "System.h"

System::System() {
	srand(time(0));
	setSeed(rand());
}

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

void System::generate() {
	name = StringGenerators::randomName();
	planet_number = rand() % 10;

	for (int i = 0; i < planet_number; i++) {
		Planet p = Planet();
		p.generate();
		p.setOwner(this);
		planets.push_back(p);
	}
}

void System::printActions() {
	std::vector<std::vector<std::string>> actions{
		{"z) Next", "x) Prev", "s) Seed"},
		{"p) Planet", "", ""},
	};

	for (auto a : actions) {
		PrintUtils::printTable(a);
	}
}

void System::handleInput(char& c) {
	switch (c) {
	case 'z':
		setSeed(seed - 1);
		break;

	case 'x':
		setSeed(seed + 1);
		break;

	case 's':
	{
		int s = NULL;
		std::cout << "Seed: ";
		std::cin >> s;

		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		setSeed(s);
		break;
	}

	case 'p':
	{
		int index = -1;
		std::cout << "Index: ";
		std::cin >> index;

		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		if (index >= 0 && index < planet_number) {
			Planet* p = &planets.at(index);
			selected = (Location*)p;
		}
		break;
	}
	}
}

void System::setSeed(int value) {
	seed = value;
	srand(seed);
	generate();
}