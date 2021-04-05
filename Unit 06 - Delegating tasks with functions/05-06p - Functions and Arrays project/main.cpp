#include <iostream> // cin/cout
#include <string>   // string data type
#include <cstdlib>  // random numbers
#include <ctime>    // time
using namespace std;

#include "functions.hpp"
#include "tests.hpp"

int main()
{
    RunTests();

    // SETUP RANDOM NUMBER GENERATOR
    srand(time(NULL));

    // STORE INVENTORY
    const int INVENTORY_SIZE = 5;
    string productNames[INVENTORY_SIZE];
    float productPrices[INVENTORY_SIZE];
    SetupInventory(productNames, productPrices, INVENTORY_SIZE);

    // SHOPPING CART
    const int CART_SIZE = 100;
    int cart[CART_SIZE];
    int cartCount = 0;

    float taxRate = 0;
    int userChoice;
    bool done = false;
    while (!done)
    {
        DisplayMenu();
        userChoice = GetChoice(1, 4);

        /****************************/
        /* Enter tax rate           */
        /****************************/
        if (userChoice == 1)
        {
            cout << "-------------------------------" << endl;
            cout << "SET TAX RATE" << endl
                 << endl;
            float taxPercent;
            cout << "Enter tax rate as a percent: %";
            cin >> taxPercent;
            taxRate = PercentToDecimal(taxPercent);
            cout << "Tax rate set to " << taxRate << "." << endl;
        }

        /****************************/
        /* Add item to cart         */
        /****************************/
        else if (userChoice == 2)
        {
            if (cartCount == CART_SIZE)
            {
                cout << "ERROR: Cart is full, cannot add any more items!" << endl;
                continue;
            }

            cout << "-------------------------------" << endl;
            cout << "ADD ITEM TO CART" << endl
                 << endl;
            DisplayInventory(productNames, productPrices, INVENTORY_SIZE);
            userChoice = GetChoice(0, INVENTORY_SIZE - 1);
            cart[cartCount] = userChoice;
            cartCount++;
            cout << "Added " << productNames[userChoice] << " to cart." << endl;
        }

        /****************************/
        /* Get payment              */
        /****************************/
        else if (userChoice == 3)
        {
            cout << "-------------------------------" << endl;
            cout << "GET PAYMENT" << endl
                 << endl;
            DisplayCart(productNames, productPrices, cart, cartCount);

            float subtotal = CalculateTotalPrice(productPrices, cart, cartCount);
            cout << endl
                 << "SUBTOTAL: $" << subtotal << endl;

            float finalPrice = PricePlusTax(subtotal, taxRate);
            cout << endl
                 << "TOTAL: $" << finalPrice << endl;

            float dollars;
            cout << endl
                 << "Enter how many dollars: ";
            cin >> dollars;

            int quarters, dimes, nickels, pennies;
            cout << "Enter how many quarters: ";
            cin >> quarters;
            cout << "Enter how many dimes: ";
            cin >> dimes;
            cout << "Enter how many nickels: ";
            cin >> nickels;
            cout << "Enter how many pennies: ";
            cin >> pennies;

            float paid = dollars + CountChange(quarters, dimes, nickels, pennies);

            while (paid < finalPrice)
            {
                cout << endl
                     << "Not enough money! You're short by $" << (finalPrice - paid) << "!" << endl;

                cout << "Enter ADDITIONAL quarters: ";
                cin >> quarters;
                cout << "Enter ADDITIONAL dimes: ";
                cin >> dimes;
                cout << "Enter ADDITIONAL nickels: ";
                cin >> nickels;
                cout << "Enter ADDITIONAL pennies: ";
                cin >> pennies;

                paid += CountChange(quarters, dimes, nickels, pennies);
            }

            cout << endl
                 << "TENDERED: $" << dollars << endl;

            float change = dollars - finalPrice;
            cout << endl
                 << "CHANGE BACK: $" << AbsoluteValue(change) << endl;
        }

        /****************************/
        /* Exit                     */
        /****************************/
        else if (userChoice == 4)
        {
            done = true;
        }
    }

    cout << endl
         << "Goodbye." << endl;

    return 0;
}
