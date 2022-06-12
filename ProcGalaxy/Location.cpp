#include "Location.h"

void Location::printInfos() {
	PrintUtils::NotImplemented();
}

void Location::generate() {
	PrintUtils::NotImplemented();
}

void Location::printActions() {
	PrintUtils::NotImplemented();
}

bool Location::dispatchInput(char& c) {
	return selected->handleInput(c);
}

void Location::dispatchPrintInfos() {
	return selected->printInfos();
}

void Location::dispatchPrintActions() {
	return selected->printActions();
}

bool Location::handleInput(char& c) {
	PrintUtils::NotImplemented();
	return false;
}