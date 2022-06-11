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
    srand(time(0));

    char c;
    int seed = rand();

    System loc = System();

    do {
        system("cls || CLEAR");

        loc.generate(seed);
        loc.printInfos();
        printActions();
        PrintUtils::printHeader();

        c = _getch();

        switch (c) {
        case 'z':
            seed--;
            break;

        case 'x':
            seed++;
            break;

        case 's':
            std::cout << "Seed: ";
            std::cin >> seed;

            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            break;
        }

        Sleep(100);
    } while (c != 'q');

    return 0;
}

void printActions() {
    PrintUtils::printHeader();
    PrintUtils::printTitle("Actions");

    std::vector<std::vector<std::string>> actions{
        {"z) Next", "x) Prev", "s) Seed"}
    };

    for (auto a : actions) {
        PrintUtils::printTable(a);
    }

    PrintUtils::printLine("q) Quit");
}