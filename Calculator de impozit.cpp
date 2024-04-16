// Calculator de impozit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    int venit;
    std::cout << "Introduceti venitul anual: ";
    std::cin >> venit;

    int impozit = 0;

    if (venit <= 15000) {
        impozit = venit / 10; // 10% impozit
    }
    else if (venit <= 30000) {
        impozit = 1500 + (venit - 15000) / 100 * 15; // 10% pentru primii 15000, 15% pentru restul pana la 30000
    }
    else {
        impozit = 1500 + 2250 + (venit - 30000) / 5; // 10% pentru primii 15000, 15% pentru urmatorii 15000, 20% pentru restul peste 30000
    }

    std::cout << "Impozitul tau este de " << impozit << std::endl;

    return 0;
}