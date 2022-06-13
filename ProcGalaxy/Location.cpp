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

void Location::dispatchInput(char& c) {
	selected->handleInput(c);
}

void Location::dispatchPrintInfos() {
	selected->printInfos();
}

void Location::dispatchPrintActions() {
	selected->printActions();
}

void Location::handleInput(char& c) {
	PrintUtils::NotImplemented();
}

void Location::setOwner(Location* o) {
	owner = o;
}

void Location::deselect() {
	selected = this;
}