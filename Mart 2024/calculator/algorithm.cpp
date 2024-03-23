#include <iostream>
#include <string>
#include "header.h"

double insert()
{
    double x {};
    std::cout << "Enter a double value: ";
    std::cin >> x;
    return x;
}

char xd()
{
    char x{};
    std::cout << "Enter the symbol of calculation u want to do(+, -, * or /):";
    std::cin >> x;

    return x;
}