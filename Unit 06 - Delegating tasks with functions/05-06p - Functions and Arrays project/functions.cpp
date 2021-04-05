#include "functions.hpp"

#include <iostream> // cin/cout
#include <cstdlib>  // random numbers
using namespace std;

/**
Display the program's main menu, which includes a numbered list:
1. Enter tax rate
2. Add item to cart
3. Get payment
4. Exit
*/
void DisplayMenu()
{
    cout << "---------------------------------------------" << endl;
    cout << "- MAIN MENU -" << endl;
    cout << "-------------" << endl;

    cout << "1. Enter tax rate" << endl;
    cout << "2. Add item to cart" << endl;
    cout << "3. Get payment" << endl;
    cout << "4. Exit" << endl;
}

/**
Get the user's input via the cin command. Check to make sure it is in the range:
min <= choice <= max ; if it is not in this range, have the user re-enter their
selection until they choose something valid. Finally, return their valid answer.

@param  min     The minimum valid integer value for the user's input
@param  max     The maximum valid integer value for the user's input
@return         Returns the user's input, which must be between min and max
*/
int GetChoice(int min, int max)
{
    int userChoice;
    cout << "(1-4): ";
    cin >> userChoice;
    cout << endl;

    while (userChoice < min || userChoice > max)
    {
        cout << "Invalid selection, please try again." << endl;
        cout << ">> ";
        cin >> userChoice;
    }
    return userChoice;
}
/**
Takes in a percent value and converts it to a decimal value, returning that decimal value.
Formula: decimal = percent / 100.

@param  percent     The percent to be converted to decimal form
@return             The percent in decimal form
*/
float PercentToDecimal(float percent)
{
    float decimal = percent / 100;
    return decimal;
}

/**
Calculates the price plus the extra amount for tax.

The amount of dollars the taxes will be is ( price * tax ).
The total amount to pay will be the price + taxDollars.

@param  price       The base price
@param  tax         The tax rate, as a decimal
@return             The price plus the tax
*/
float PricePlusTax(float price, float tax)
{
    return price + price * tax;
}

/**
Converts the quantity of quarters, dimes, nickels, and pennies into a dollar amount.
Quarters are worth 0.25, dimes are worth 0.10,
nickels are worth 0.05, and pennies are worth 0.01.

@param  quarters        The total amount of quarters
@param  dimes           The total amount of dimes
@param  nickels         The total amount of nickels
@param  pennies         The total amount of pennies
@return                 The sum of all the quarters, dimes, nickels, and pennies' dollar values
*/
float CountChange(int quarters, int dimes, int nickels, int pennies)
{
    return quarters * 0.25 + dimes * 0.10 + nickels * 0.05 + pennies * 0.01;
}

/**
Returns the absolute value of a number. | 2 | = 2 and | -2 | = 2

@param  value       The value to get the absolute value of
@return             The absolute value of the value variable
*/
float AbsoluteValue(float value)
{
    if (value < 0)
    {
        return -value;
    }
    else if (value > 0 || value == 0)
    {
        return value;
    }
}

/**
This function sets up inventory available in the store. The array parameters
passed in here will be UPDATED with any changes made within this function.

Use a for loop to iterate over 0 <= i < size , and assign each price
to a random price using the GetRandomPrice() function, and assign each
product name using the GetRandomProductName() function.

@param  names[]     The list of product names
@param  prices[]    The list of product prices
@param  size        The total amount of elements in the names[] and prices[] arrays
*/
void SetupInventory(string names[], float prices[], int size)
{

    for (int i = 0; i < size; i++)
    {
        prices[i] = GetRandomPrice();
        names[i] = GetRandomProductName();
    }
}

/**
Displays a nice list of all the products in the store and their prices.

Use a for loop to iterate over 0 <= i < size , displaying the following info:
* the value of i
* the element names[] at index i
* the element of prices[] at index i

@param  names[]     The list of product names
@param  prices[]    The list of product prices
@param  size        The total amount of elements in the names[] and prices[] arrays
*/
void DisplayInventory(const string names[], const float prices[], int size)
{
    cout << "-------------------------------" << endl;
    cout << "ADD ITEM TO CART" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << i << ".\t"
             << names[i] << "\t\t $"
             << prices[i] << endl;
    }
}

/**
Display a list of all items in the user's shopping cart.

The purchaseList array will contain a list of indices: 0, 1, 2, etc. These numbers
correspond to the index of ONE item in the shop, e.g., names[0] + prices[0].
An item from the shop can be in the cart more than once.

@param  names[]         The list of product names
@param  prices[]        The list of product prices
@param  cart[]          The list of INDICES of products in the cart
@param  cartCount       The total amount of items in the cart
*/
void DisplayCart(const string names[], const float prices[], const int cart[], int cartCount)
{
    for (int ci = 0; ci < cartCount; ci++)
    {
        int pi = cart[ci];

        cout << "Item " << pi << ": " << names[pi] << "		 $" << prices[pi] << endl;
    }
}

/**
Calculate the sum of prices of items in the cart. The purchase list contains
a series of IDs of inventory items (e.g, 0 for prices[0], 1 for prices[1], etc.),
and this data will be used to calculate the total price.

@param  prices[]        The list of product prices
@param  cart[]          The list of INDICES of products in the cart
@param  cartCount       The total amount of items in the cart
@return                 The total cost of all the items in the cart
*/
float CalculateTotalPrice(const float prices[], const int cart[], int cartCount)
{
    float total = 0;
    for (int ci = 0; ci < cartCount; ci++)
    {
        int pi = cart[ci];
        total += prices[pi];
    }
    return total;
}

/************************************************************/
/* Already implemented                                      */
/************************************************************/

float GetRandomPrice()
{
    // Generate a random number between 1 and 100
    return rand() % 100 + 1;
}

string GetRandomProductName()
{
    const int SIZE = 10;
    string adjectives[SIZE] = {
        "red   ", "orange", "yellow", "green ", "blue  ",
        "purple", "pink  ", "shiny ", "dull  ", "neon  "};
    string nouns[SIZE] = {
        "pencil", "chalk", "marker", "apple", "coffee",
        "cookie", "pen", "candy", "tea", "shoe"};

    // Generate a random product name
    int index1 = rand() % SIZE;
    int index2 = rand() % SIZE;
    return adjectives[index1] + " " + nouns[index2];
}
