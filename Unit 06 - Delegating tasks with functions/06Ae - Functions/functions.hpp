#ifndef _FUNCTIONS_HPP
#define _FUNCTIONS_HPP

#include <string> // string data type
using namespace std;

void DisplayMenu();
int GetChoice(int min, int max);
float PercentToDecimal(float percent);
float PricePlusTax(float price, float tax);
float CountChange(int quarters, int dimes, int nickels, int pennies);

#endif
