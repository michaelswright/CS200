// 08Be - Don't update this file

#include <string>
using namespace std;
#include "ProgramFunctions.hpp"

int main()
{
    bool done = false;
    while ( !done )
    {
        cout << "MAIN MENU" << endl;
        HLine( '#' );
        cout << "1. Exploring addresses" << endl;
        cout << "2. Dereferencing pointers" << endl;
        cout << "3. Pointers and classes" << endl;
        cout << endl;
        cout << "0. Exit" << endl;
        cout << endl;

        cout << ">> ";
        int choice;
        cin >> choice;

        if      ( choice == 0 ) { done = true; }
        else if ( choice == 1 ) { Program1_ExploringAddresses(); }
        else if ( choice == 2 ) { Program2_DereferencingPointers(); }
        else if ( choice == 3 ) { Program3_PointersAndClasses(); }
    }
}
