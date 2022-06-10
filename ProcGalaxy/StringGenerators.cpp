#include "StringGenerators.h"

const char StringGenerators::vows[] = { 'a', 'e', 'i', 'o', 'u' };
const char StringGenerators::cons[] = {
	'b', 'c', 'd', 'f', 'g', 'h', 'j',
	'k', 'l', 'm', 'n', 'p', 'q', 'r',
	's', 't', 'v', 'w', 'x', 'y', 'z'
};

std::string StringGenerators::randomName() {
	int len = rand() % (RM_MAXLEN - RM_MINLEN + 1) + RM_MINLEN;
	std::string res = "";

	int start = rand() % 2;
	for (int i = 0; i < len; i++) {
		if ((i + start) % 2 == 0) {
			res += vows[rand() % 5];
		}
		else {
			res += cons[rand() % 21];
		}
	}

	return res;
}

std::string StringGenerators::title(std::string str) {
	return (char)std::toupper(str.at(0)) + str.substr(1);
}