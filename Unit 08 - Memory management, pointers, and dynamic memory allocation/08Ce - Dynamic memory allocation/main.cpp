#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arraySize = 0;

    cout << "Enter array size: ";
    cin >> arraySize;
    cin.ignore();

    string *students = new string[arraySize];

    cout << endl
         << "INITIALIZE STUDENTS" << endl;
    // Get user to enter all the students
    for (int i = 0; i < arraySize; i++)
    {
        cout << "Enter name for student " << i << ": ";
        string name;
        getline(cin, name);
        students[i] = name;
    }

    cout << endl
         << "STUDENT LIST" << endl;
    // Write all the students out to the screen
    for (int i = 0; i < arraySize; i++)
    {
        cout << i << ". ";
        cout << students[i];
    }

    delete[] students;

    return 0;
}