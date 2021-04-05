#include <iostream>
using namespace std;

#include "functions.hpp"

int main()
{
    const int MAX_PETS = 10;
    int petCount = 0;
    string pets[MAX_PETS];

    int choice;
    bool done = false;
    while (!done)
    {
        DisplayMainMenu(petCount);
        choice = GetChoice(1, 4);

        if (choice == 1)
        {
            InitializePets(pets, MAX_PETS, petCount);
        }
        else if (choice == 2)
        {
            AddPet(pets, MAX_PETS, petCount);
        }
        else if (choice == 3)
        {
            DisplayPets(pets, petCount);
        }
        else if (choice == 4)
        {
            done = true;
        }
    }

    return 0;
}
