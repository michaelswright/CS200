#include "functions.hpp"

#include <iostream> // cin/cout
#include <cstdlib>  // random numbers
using namespace std;

void DisplayMenu()
{
    cout << "---------------------------------------------" << endl;
    cout << "- MAIN MENU -" << endl;
    cout << "-------------" << endl;
    cout << "0. Run tests" << endl;
    cout << "1. PercentToDecimal" << endl;
    cout << "2. PricePlusTax" << endl;
    cout << "3. CountChance" << endl;
    cout << "4. Exit" << endl;
}

int GetChoice(int min, int max)
{
    int userChoice;
    cout << "(Enter a number between 0 and 4) ";
    cin >> userChoice;
    cout << endl;

    while (userChoice < min || userChoice > max)
    {
        cout << "Invalid selection, please try again." << endl;
        cout << "(Enter a number between 0 and 4) ";
        cin >> userChoice;
    }
    return userChoice;
}

float PercentToDecimal(float percent)
{
    float decimal = percent / 100;
    return decimal;
}

float PricePlusTax(float price, float tax)
{
    return price + price * tax;
}

float CountChange(int quarters, int dimes, int nickels, int pennies)
{
    return quarters * 0.25 + dimes * 0.10 + nickels * 0.05 + pennies * 0.01;
}
