
#include <iostream>
#include <string>
using namespace std;

void Program1()
{
    for (int i = 0; i <= 20; i++)
    {
        cout << i << " ";
    }
}

void Program2()
{
    for (int i = 1; i <= 128; i *= 2)
    {
        cout << i << " ";
    }
}

void Program3()
{
    int sum = 0;
    int n;
    cout << "Enter a value for n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
        cout << "Sum: " << sum << endl;
    }
}

// Don't modify main
int main()
{
    while ( true )
    {
        cout << "Run which program? (1-3): ";
        int choice;
        cin >> choice;

        cout << endl << endl;
        cout << "------------------------------" << endl;

        if      ( choice == 1 ) { Program1(); }
        else if ( choice == 2 ) { Program2(); }
        else if ( choice == 3 ) { Program3(); }

        cout << endl << endl;
        cout << "------------------------------" << endl;
    }

    return 0;
}
