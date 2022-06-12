#include "PrintUtils.h"

void PrintUtils::NotImplemented() {
	printLine("Not Implemented");
}

void PrintUtils::printLine(std::string line) {
	printf("| %-*s |\n", WIDTH, line.c_str());
}

void PrintUtils::printHeader() {
	printf("+%-*s+\n", WIDTH + 2, std::string(52, '=').c_str());
}

void PrintUtils::printTitle(std::string line) {
	printf("| ");
	printCenter(line, WIDTH);
	printf(" |\n");
}

void PrintUtils::printCenter(std::string line, unsigned int width) {
	int len1 = (width + line.length()) / 2;
	int len2 = (width - line.length() + 1) / 2;
	printf("%*s%*s", len1, line.c_str(), len2, "");
}

void PrintUtils::printTable(std::vector<std::string> cols) {
	unsigned int width = cols.size();

	printf("| ");
	printf("%-*s", WIDTH / width, cols[0].c_str());

	int i = 1;
	if (width > 2) {
		for (; i < width / 2; i++) {
			printCenter(cols[i], WIDTH / width);
		}

		if (i < width) {
			printCenter(cols[i], WIDTH / width + WIDTH % width);
			i += 1;
		}

		for (; i < width - 1; i++) {
			printCenter(cols[i], WIDTH / width);
		}
	}

	if (i < width) {
		printf("%*s", WIDTH / width, cols[i].c_str());
	}
	printf(" |\n");
}