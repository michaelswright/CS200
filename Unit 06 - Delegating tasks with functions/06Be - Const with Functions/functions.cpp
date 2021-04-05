#include "functions.hpp"

#include <iostream>
using namespace std;

void DisplayMainMenu(int petCount)
{
    cout << "---------------------------------------------" << endl;
    cout << "- MAIN MENU -" << endl;
    cout << "-------------" << endl;
    cout << "(" << petCount << ") pets" << endl;

    cout << "1. Initialize pets" << endl;
    cout << "2. Add new pet" << endl;
    cout << "3. Display pets" << endl;
    cout << "4. Quit" << endl;
}

int GetChoice(int min, int max)
{
    int userChoice;
    cout << "(1-4): ";
    cin >> userChoice;
    cout << endl;

    while (userChoice < min || userChoice > max)
    {
        cout << "Invalid selection. Try again." << endl;
        cout << "(1-4): ";
        cin >> userChoice;
    }
    return userChoice;
}

void InitializePets(string pets[], int maxPets, int &petCount)
{
    cout << "-----------------" << endl;
    cout << " INITIALIZE PETS " << endl;
    cout << "-----------------" << endl;
    cout << "How many pets do you have? (0-10): ";
    cin >> petCount;
    while (petCount < 0 || petCount > maxPets)
    {
        cout << "Invalid amount, try again: ";
        cin >> petCount;
    }
    cin.ignore();
    for (int i = 0; i < petCount; i++)
    {
        cout << "Enter name for pet #" << i << ": ";
        getline(cin, pets[i]);
    }
}

void DisplayPets(const string pets[], int petCount)
{
    cout << "----------" << endl;
    cout << " PET LIST " << endl;
    cout << "----------" << endl;
    for (int i = 0; i < petCount; i++)
    {
        cout << i << ". 	" << pets[i] << endl;
    }
}

void AddPet(string pets[], int maxPets, int &petCount)
{
    if (petCount + 1 >= maxPets)
    {
        cout << "ERROR: Array is full" << endl;
    }
    else
    {
        cin.ignore();
        cout << "---------" << endl;
        cout << " ADD PET " << endl;
        cout << "---------" << endl;
        cout << "Enter new pet name: ";
        getline(cin, pets[petCount]);
        petCount++;
    }
}
