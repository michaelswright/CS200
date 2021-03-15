#include <iostream>
#include <string>
using namespace std;

#include "StringOperations.hpp"

int main()
{
    string text = "We can dance if we want to \nWe can leave your friends behind\n'Cause your friends don't dance and if they don't dance\nWell, they're no friends of mine\n\nSay, we can go where we want to\nA place where they will never find\nAnd we can act like we come from out of this world\nLeave the real one far behind";
    bool done = false;
    int choice;

    while (!done)
    {
        cout << "--------------------------------------------------------" << endl;
        cout << text << endl;
        cout << "--------------------------------------------------------" << endl;
        cout << "INFO               MODIFY              PROGRAM" << endl;
        cout << "1. Size            7.  Combine         12. Quit" << endl;
        cout << "2. Letter          8.  Insert" << endl;
        cout << "3. Find            9.  Remove" << endl;
        cout << "4. Contains        10. Replace #" << endl;
        cout << "5. Substr          11. Replace Str" << endl;
        cout << "6. Order" << endl;
        cout << "--------------------------------------------------------" << endl;
        cout << ">> ";
        cin >> choice;
        cin.ignore();
        cout << endl;

        switch (choice)
        {
        case 1:
            GetSize(text);
            break;
        case 2:
            GetLetter(text);
            break;
        case 3:
            Find(text);
            break;
        case 4:
            Contains(text);
            break;
        case 5:
            GetSubstring(text);
            break;
        case 6:
            GetOrder(text);
            break;

        case 7:
            Combine(text);
            break;
        case 8:
            Insert(text);
            break;
        case 9:
            Remove(text);
            break;
        case 10:
            Replace(text);
            break;
        case 11:
            AdvancedReplace(text);
            break;

        case 12:
            done = true;
            break;
        }

        cout << "Press ENTER to continue" << endl;
        cin.get();
    }

    return 0;
}
