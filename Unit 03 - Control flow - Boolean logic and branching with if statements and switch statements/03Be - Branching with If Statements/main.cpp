#include <iostream>
using namespace std;

int main()
{

    cout << endl << "PROGRAM 1" << endl;

    float bankBalance;
    float withdrawAmount;
    cout << "What is your bank balance? ";
    cin >> bankBalance;
    cout << "How much to withdraw? ";
    cin >> withdrawAmount;
    bankBalance = bankBalance - withdrawAmount;
    cout << "Balance: " << bankBalance;
    if (bankBalance < 0)
    {
        cout << " (OVERDRAWN)";
    }

    cout << endl << "PROGRAM 2" << endl;

    float earnedPoints;
    float totalPoints;
    cout << "How many points did you score on the assignment? ";
    cin >> earnedPoints;
    cout << "How many total points was the assignment? ";
    cin >> totalPoints;
    float result = earnedPoints / totalPoints;
    if (result >= 0.50)
    {
        cout << "Pass" << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }

    cout << endl << "PROGRAM 3" << endl;

    int charge;
    cout << "Enter your phone charge %: ";
    cin >> charge;
    if (charge >= 95)
    {
        cout << "[****]" << endl;
    }
    else if (charge >= 75)
    {
        cout << "[***_]" << endl;
    }
    else if (charge >= 50)
    {
        cout << "[**__]" << endl;
    }
    else if (charge >= 25)
    {
        cout << "[*___]" << endl;
    }
    else
    {
        cout << "[____]" << endl;
    }

    cout << endl << "PROGRAM 4" << endl;

    int color;
    cout << "1. Red" << endl;
    cout << "2. Orange" << endl;
    cout << "3. Yellow" << endl;
    cout << "4. Green" << endl;
    cout << "5. Blue" << endl;
    cout << "Select a color: ";
    cin >> color;
    if ( color <= 5 && color >= 1)
    {
        cout << "Good choice!" << endl;
    }
    else
    {
        cout << "Invalid choice!" << endl;
    }

    cout << endl << "PROGRAM 5" << endl;

    int number;
    cout << "Enter a number between 1 and 10: ";
    cin >> number;
    if (number < 1 || number > 10)
    {
        cout << "Invalid choice!" << endl;
    }
    else
    {
        cout << "Valid choice!" << endl;
    }
    return 0;
}
