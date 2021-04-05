#include <iostream> // cin/cout
#include <string>   // string data type
using namespace std;

#include "functions.hpp"
#include "tests.hpp"

int main()
{
    bool done = false;
    int userChoice;
    while (!done)
    {
        DisplayMenu();
        userChoice = GetChoice(0, 4);
        switch (userChoice)
        {
        case 0:
        {
            RunTests();
            break;
        }

        case 1:
        {
            float percent;
            cout << "-------------------------------" << endl;
            cout << "PercentToDecimal" << endl
                 << endl;
            cout << "Enter a percent: ";
            cin >> percent;
            float decimal = PercentToDecimal(percent);
            cout << "Decimal: " << decimal << endl;
            break;
        }

        case 2:
        {
            float userPrice;
            float userTax;
            cout << "-------------------------------" << endl;
            cout << "PricePlusTax" << endl
                 << endl;
            cout << "Enter price: ";
            cin >> userPrice;
            cout << "Etner tax: ";
            cin >> userTax;
            float ppt = PricePlusTax(userPrice, userTax);
            cout << "Price plus tax: " << ppt << endl;
            break;
        }

        case 3:
        {
            int userPennies, userNickels, userDimes, userQuarters;
            cout << "-------------------------------" << endl;
            cout << "CountChange" << endl;
            cout << "Enter number of quarters: ";
            cin >> userQuarters;
            cout << "Enter number of dimes: ";
            cin >> userDimes;
            cout << "Enter number of nickels: ";
            cin >> userNickels;
            cout << "Enter number of pennies: ";
            cin >> userPennies;
            float dollarAmount = CountChange(userQuarters, userDimes, userNickels, userPennies);
            cout << "Total money: " << dollarAmount << endl;
            break;
        }

        case 4:
        {
            done = true;
            break;
        }
        }
    }
    return 0;
}
