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
    cout << "PIZZA MAKER" << endl;
    cout << endl;
    cout << endl;

    while (done != true)
    {
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
        cout << endl;

        switch (menuChoice)
        {
        case 1:
            cout << "SAUCES MENU" << endl;
            break;
        case 2:
            cout << "Extra cheese added" << endl;
            break;
        case 3:
            cout << "MEATS MENU" << endl;
            break;
        case 4:
            cout << "VEGGIES MENU" << endl;
            break;
        case 5:
            cout << "Pizza reset" << endl;
            break;
        case 6:
            cout << "CHECKOUT" << endl;
            done = true;
            break;
        default:
            cout << "INVALID MENU OPTION" << endl;
        }

        cout << endl;
    }
    return 0;
}
