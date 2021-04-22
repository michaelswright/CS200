#ifndef _DIE_HPP
#define _DIE_HPP
class Die
{
public:
    Die();              // Initialize die with default info
    Die(int sideCount); // Initialize die with some # of sides
    int Roll();         // Roll the die, return the result

private:
    int sides; // The amount of sides this die has
};

#endif
