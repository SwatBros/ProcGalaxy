#include "PrintUtils.h"

void PrintUtils::NotImplemented() {
	std::cout << "Not Implemented\n";
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
	int len2 = (width - line.length()) / 2 + line.length() % 2;
	printf("%*s%*s", len1, line.c_str(), len2, "");
}

void PrintUtils::printTable(std::string* cols, unsigned int col_number) {
	printf("| ");
	printf("%-*s", WIDTH / col_number, cols[0].c_str());

	int i = 1;
	for (; i < col_number - 1; i++) {
		printCenter(cols[i], WIDTH / col_number + WIDTH % col_number);
	}

	printf("%*s", WIDTH / col_number, cols[i].c_str());
	printf(" |\n");
}