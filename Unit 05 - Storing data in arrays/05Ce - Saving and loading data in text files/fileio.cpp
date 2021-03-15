#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void Program1()
{
    cout << endl
         << "------------------------------------------" << endl;
    cout << "TO DO LIST" << endl;

    ofstream output("todo.txt");

    string userInput;
    int counter = 0;

    bool done = false;
    cin.ignore();
    while (!done)
    {
        counter++;
        cout << "Enter to do item #" << counter << " or STOP to end: ";
        getline(cin, userInput);

        if (userInput == "STOP")
        {
            break;
        }

        output << counter << ". " << userInput << endl;
    }

    cout << endl
         << "Saved to todo.txt" << endl
         << endl;
}

void Program2()
{
    cout << endl
         << "------------------------------------------" << endl;
    cout << "VOTING BOOTH" << endl;

    // Setup voting options
    const int MAX_CHOICES = 5;
    string voteName[MAX_CHOICES] = {"Samosas", "Tacos", "Onigiri", "Pizza", "QUIT"};
    int voteCount[MAX_CHOICES] = {0, 0, 0, 0, 0};

    int userInput;

    bool done = false;
    while (!done)
    {
        // Menu
        cout << "OPTIONS:" << endl;
        for (int i = 0; i < MAX_CHOICES; i++)
        {
            cout << i << ". " << voteName[i] << endl;
        }

        cout << endl
             << "Your vote: ";
        cin >> userInput;

        // Validate user input
        while (userInput < 0 || userInput >= MAX_CHOICES)
        {
            cout << "Invalid selection, try again: ";
            cin >> userInput;
        }

        // Check for quit
        if (voteName[userInput] == "QUIT")
        {
            break;
        }

        voteCount[userInput]++;
    }

    // Create an output file stream object, open "votes.csv".
    ofstream output("votes.csv");

    // Output the header
    output << "OPTION, VOTES" << endl;

    // Output the vote results
    for (int i = 0; i < MAX_CHOICES - 1; i++)
    {
        output << voteName[i] << "," << voteCount[i] << endl;
    }

    cout << "RESULTS SAVED TO votes.csv" << endl
         << endl;
}

void Program3()
{
    cout << endl
         << "------------------------------------------" << endl;
    cout << "READING WITH >>" << endl;

    string buffer;
    int counter = 0;

    // Create an input file stream object, open "todo.txt".
    ifstream input("todo.txt");

    // Use a while loop to load in one item at a time with >>
    // Use cout to display each item and the counter values.
    while (input >> buffer)
    {
        cout << counter << ": " << buffer << endl;
        counter++;
    }

    cout << endl
         << endl;
}

void Program4()
{
    cout << endl
         << "------------------------------------------" << endl;
    cout << "READING WITH GETLINE" << endl;

    string buffer;
    int counter = 0;

    // Create an input file stream object, open "todo.txt".
    ifstream input("todo.txt");

    // Use a while loop to load in one item at a time with getline
    // Use cout to display each item and the counter values.
    while (getline(input, buffer))
    {
        cout << counter << ": " << buffer << endl;
        counter++;
    }
    cout << endl
         << endl;
}

void Program5()
{
    cout << endl
         << "------------------------------------------" << endl;
    cout << "READ AND WRITE" << endl;

    // Setup with default values
    float bankBalance = 0;
    int accountNumber = rand() % 100000;

    // Create input file stream object here, load "bank.txt"
    ifstream input("bank.txt");
    // If loading doesn't fail, load in the bankBalance and accountNumber.
    if ( !input.fail() )
    {
        input >> bankBalance;
        input >> accountNumber;
    }
    // Close the input file.
    input.close();
    int userInput;

    // Begin program loop
    bool done = false;
    while (!done)
    {
        cout << endl
             << "MAIN MENU" << endl;
        cout << "Account #: " << accountNumber << endl;
        cout << "Balance:  $" << bankBalance << endl
             << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Save and quit" << endl;
        cout << endl
             << ">> ";

        cin >> userInput;

        // Deposit
        if (userInput == 1)
        {
            float amount;
            cout << "Deposit how much? ";
            cin >> amount;

            if (amount <= 0)
            {
                cout << "Cannot deposit a negative/zero amount!" << endl;
            }
            else
            {
                bankBalance += amount;
            }
        }
        // Withdraw
        else if (userInput == 2)
        {
            float amount;
            cout << "Withdraw how much? ";
            cin >> amount;

            if (amount <= 0)
            {
                cout << "Cannot withdraw a negative amount!" << endl;
            }
            else if (amount > bankBalance)
            {
                cout << "Cannot withdraw more than you have!" << endl;
            }
            else
            {
                bankBalance -= amount;
            }
        }
        // Exit
        else if (userInput == 3)
        {
            done = true;
        }
    }

    // Create an input file stream object, open "bank.txt".
    ofstream output("bank.txt");
    // Output the bankBalance on one line and accountNumber on another.
    output << bankBalance << endl;
    output << accountNumber << endl;
    cout << endl
         << endl;
}

int main()
{
    bool done = false;

    srand(time(NULL));

    while (!done)
    {
        int choice;
        cout << "0. QUIT" << endl;
        cout << "1. Program 1: To Do List" << endl;
        cout << "2. Program 2: Voting" << endl;
        cout << "3. Program 3: Reading with >>" << endl;
        cout << "4. Program 4: Reading with getline" << endl;
        cout << "5. Program 5: ATM (Read and write)" << endl;
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
        case 4:
            Program4();
            break;
        case 5:
            Program5();
            break;
        }
    }

    return 0;
}
