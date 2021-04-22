#include "Die.hpp"
#include <cstdlib> // random numbers

Die::Die()
{
    sides = 6;
}

Die::Die(int sideCount)
{
    sides = sideCount;
}

int Die::Roll()
{
    return rand() % sides + 1;
}