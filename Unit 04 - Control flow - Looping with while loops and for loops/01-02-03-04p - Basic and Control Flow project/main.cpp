#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    const float BASE_PRICE = 8.00;
    const float SAUCE_PRICE = 0.53;
    const float CHEESE_PRICE = 0.73;
    const float MEAT_PRICE = 1.25;
    const float VEGGIES_PRICE = 0.83;
    string pizza = "";
    float price = BASE_PRICE;
    int menuChoice;
    bool done = false;

    while (menuChoice != 6)
    {

        cout << "PIZZA MAKER" << endl;
        cout << endl
             << endl;

        cout << "Current pizza: " << pizza << endl;
        cout << "Price: $" << price << endl;
        cout << endl;

        cout << "TOPPINGS MENU" << endl;
        cout << "1. Sauces" << endl;
        cout << "2. Add Cheese" << endl;
        cout << "3. Meats" << endl;
        cout << "4. Veggies" << endl;
        cout << "5. Reset pizza" << endl;
        cout << "6. Checkout" << endl;
        cout << ">> ";
        cin >> menuChoice;
    }
}
