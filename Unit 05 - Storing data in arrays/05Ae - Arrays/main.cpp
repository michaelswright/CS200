#include <iostream>
#include <string>
using namespace std;

void Program1()
{
    const int MAX_COURSES = 6;
    int courseCount = 0;
    string myCourses[MAX_COURSES];
    cout << "CLASS LIST" << endl;
    cout << endl;
    for (int i = 0; i < MAX_COURSES; i++)
    {
        string userInput;
        cout << "Enter class " << i << " or type STOP:      ";
        cin >> userInput;

        if (userInput == "STOP")
        {
            break;
        }
        myCourses[i] = userInput;
        courseCount++;
    }
    cout << endl;
    cout << "Your classes:" << endl;
    for (int i = 0; i <= courseCount; i++)
    {
        cout << myCourses[i] << "\t";
    }
    cout << endl;
}

void Program2()
{
    string names[5];
    float prices[5];
    cout << "STOREFRONT" << endl
         << endl;
    for (int i = 0; i <= 4; i++)
    {
        cout << "Item " << i + 1 << endl;
        cout << "   Enter the item's name:  ";
        cin >> names[i];
        cout << "   Enter the item's price:  ";
        cin >> prices[i];
        cout << endl;
    }
    cout << endl;
    cout << "ITEMS FOR SALE" << endl
         << endl;
    for (int i = 0; i <= 4; i++)
    {
        cout << "Item " << i + 1 << endl;
        cout << "   " << names[i] << ", $" << prices[i] << endl;
    }
}

void Program3()
{
    int WIDTH = 30;
    int HEIGHT = 10;
    string gameMap[WIDTH][HEIGHT];
    for (int y = 0; y < HEIGHT; y++)
    {
        for (int x = 0; x < WIDTH; x++)
        {
            gameMap[x][y] = ".";
            if (x == 0)
            {
                gameMap[x][y] = "#";
            }
            if (y == 0)
            {
                gameMap[x][y] = "#";
            }
            if (x == 29)
            {
                gameMap[x][y] = "#";
            }
            if (y == 9)
            {
                gameMap[x][y] = "#";
            }
            gameMap[2][3] = "@";
            gameMap[7][8] = "@";
            gameMap[15][6] = "@";
            cout << gameMap[x][y];
        }
        cout << endl;
    }
}

int main()
{
    bool done = false;

    while (!done)
    {
        int choice;
        cout << "0. QUIT" << endl;
        cout << "1. Program 1" << endl;
        cout << "2. Program 2" << endl;
        cout << "3. Program 3" << endl;
        cout << endl
             << ">> ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            done = true;
            break;
        case 1:
            Program1();
            break;
        case 2:
            Program2();
            break;
        case 3:
            Program3();
            break;
        }
    }

    return 0;
}
