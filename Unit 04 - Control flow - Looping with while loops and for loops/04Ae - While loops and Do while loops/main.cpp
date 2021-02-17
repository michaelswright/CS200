#include <iostream>
#include <string>
using namespace std;

void Program1()
{
    int count = 0;
    while(count <= 20)
    {
        cout << count << " ";
        count++;
    }
}

void Program2()
{
    int count = 1;
    while(count <= 128)
    {
        cout << count << " ";
        count = count * 2;
    }
}

void Program3()
{
    bool done = false;
    int choice;
    while (!done)
    {
        cout << "Choose an option:" << endl;
        cout << "1. Favorite food" << endl;
        cout << "2. Favorite color" << endl;
        cout << "3. Quit" << endl;
        cout << "Choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
            {
                cout << "Pizza" << endl;
            }
            break;
            case 2:
            {
                cout << "Green" << endl;
            }
            break;2
            case 3:
            {
                done = true;
            }
        }
    }

}

void Program4()
{
    bool done = false;
    int number;
    while(done == false)
    {
        cout << "Guess a number between 1 & 10: ";
        cin >> number;
        if (number < 8)
        {
            cout << "Too low!" << endl;
            cout << endl;
        }
        else if (number > 8)
        {
            cout << "Too high!" << endl;
            cout << endl;
        }
        else
        {
            cout << "That's right" << endl;
            cout << endl;
            done = true;
        }
    }
    cout << "GAME OVER" << endl;
}

void Program5()
{
    int choice;
    cout << "Please enter a number between 1 and 5: ";
    cin >> choice;
    while(choice < 1 || choice > 5)
    {
        cout << "Invalid entry, try again: ";
        cin >> choice;
    }
    cout << "Thank you.";

}

void Program6()
{
    int sum = 0;
    int counter = 1;
    int n;
    cout << "Enter a value for n: ";
    cout << endl;
    cin >> n;
    while (counter <= n)
    {
        sum += counter;
        counter++;
        cout << "Sum: " << sum << endl;
    }
}

// Don't modify main
int main()
{
    while ( true )
    {
        cout << "Run which program? (1-6): ";
        int choice;
        cin >> choice;

        cout << endl << endl;
        cout << "------------------------------" << endl;

        if      ( choice == 1 ) { Program1(); }
        else if ( choice == 2 ) { Program2(); }
        else if ( choice == 3 ) { Program3(); }
        else if ( choice == 4 ) { Program4(); }
        else if ( choice == 5 ) { Program5(); }
        else if ( choice == 6 ) { Program6(); }

        cout << endl << endl;
        cout << "------------------------------" << endl;
    }

    return 0;
}
