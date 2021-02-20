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
            cout << endl;
            cout << "1. Tomato" << endl;
            cout << "2. Alfredo" << endl;
            cout << "3. Barbecue" << endl;
            cout << "4. Buffalo" << endl;
            cout << ">> ";
            cin >> menuChoice;

            switch (menuChoice)
            {
            case 1:
                pizza += "Tomato sauce, ";
                price += SAUCE_PRICE;
                break;
            case 2:
                pizza += "Alfredo sauce, ";
                price += SAUCE_PRICE;
                break;
            case 3:
                pizza += "Barbecue sauce, ";
                price += SAUCE_PRICE;
                break;
            case 4:
                pizza += "Buffalo sauce, ";
                price += SAUCE_PRICE;
                break;
            default:
                cout << "INVALID MENU OPTION" << endl;
            }
            break;
        case 2:
            cout << "Extra cheese added" << endl;
            pizza += "Cheese, ";
            price += CHEESE_PRICE;
            break;
        case 3:
            cout << "MEATS MENU" << endl;
            cout << endl;
            cout << "1. Pepperoni" << endl;
            cout << "2. Sausage" << endl;
            cout << "3. Ham" << endl;
            cout << "4. Chicken" << endl;
            cout << ">> ";
            cin >> menuChoice;

            switch (menuChoice)
            {
            case 1:
                pizza += "Pepperoni, ";
                price += MEAT_PRICE;
                break;
            case 2:
                pizza += "Sausage, ";
                price += MEAT_PRICE;
                break;
            case 3:
                pizza += "Ham, ";
                price += MEAT_PRICE;
                break;
            case 4:
                pizza += "Chicken, ";
                price += MEAT_PRICE;
                break;
            default:
                cout << "INVALID MENU OPTION" << endl;
            }
            break;
        case 4:
            cout << "VEGGIES MENU" << endl;
            cout << endl;
            cout << "1. Mushrooms" << endl;
            cout << "2. Black olives" << endl;
            cout << "3. Pineapple" << endl;
            cout << "4. Tomatoes" << endl;
            cout << ">> ";
            cin >> menuChoice;

            switch (menuChoice)
            {
            case 1:
                pizza += "Mushrooms, ";
                price += VEGGIES_PRICE;
                break;
            case 2:
                pizza += "Black olives, ";
                price += VEGGIES_PRICE;
                break;
            case 3:
                pizza += "Pineapple, ";
                price += VEGGIES_PRICE;
                break;
            case 4:
                pizza += "Tomatoes, ";
                price += VEGGIES_PRICE;
                break;
            default:
                cout << "INVALID MENU OPTION" << endl;
            }
            break;
        case 5:
            cout << "Pizza reset" << endl;
            pizza = "";
            price = BASE_PRICE;
            break;
        case 6:
            cout << "CHECKOUT" << endl;
            cout << "Pizza: " << pizza << endl;
            cout << "Price: $" << price << endl;
            cout << endl;
            cout << "THANK YOU FOR ORDERING FROM BRICKOLINI PIZZERIA" << endl;
            done = true;
            break;
        default:
            cout << "INVALID MENU OPTION" << endl;
        }

        cout << endl;
    }
    return 0;
}
