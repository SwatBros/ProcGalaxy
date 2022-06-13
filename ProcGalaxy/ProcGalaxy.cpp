#include <iostream>
#include <conio.h>

#define NOMINMAX
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

#include "System.h"
#include "PrintUtils.h"


void printActions();

int main() {
    char c;
    System loc = System();

    do {
        system("cls || CLEAR");

        loc.dispatchPrintInfos();

        PrintUtils::printHeader();
        PrintUtils::printTitle("Actions");
        loc.dispatchPrintActions();
        printActions();

        PrintUtils::printHeader();

        c = _getch();

        loc.dispatchInput(c);

        Sleep(100);
    } while (c != 'q');

    return 0;
}

void printActions() {
    PrintUtils::printLine("q) Quit");
}