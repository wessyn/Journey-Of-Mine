#include <iostream>
#include "header.h"

double fallendistance(int x, double y)
{
    double gravity {y};
    double ballfallen {gravity * x * x / 2};

    return ballfallen;
}