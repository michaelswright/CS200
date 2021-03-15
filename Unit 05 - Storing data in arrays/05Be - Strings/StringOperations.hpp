#include <string>
using namespace std;

// string& means "pass this string by reference";
// it allows us to modify the string in the function
// and also the original string back in main.

// size_t size() const;
// http://www.cplusplus.com/reference/string/string/size/
void GetSize(string str)
{
    cout << "The size of the string is ";
    cout << str.size();
    cout << endl;
}

// char& operator[] (size_t pos);
// http://www.cplusplus.com/reference/string/string/operator[]/
void GetLetter(string str)
{
    int index;
    cout << "Enter an index: ";
    cin >> index;
    cin.ignore();

    cout << "Character #" << index << " is ";
    cout << str[index];
    cout << endl;
}

// size_t find (const string& str, size_t pos = 0) const;
// http://www.cplusplus.com/reference/string/string/find/
void Find(string str)
{
    string findme;
    cout << "Enter a string to find: ";
    getline(cin, findme);

    int foundPosition = str.find(findme);

    if (foundPosition == string::npos)
    {
        cout << "String not found" << endl;
    }
    else
    {
        cout << "String found at position " << foundPosition << endl;
    }
}

// Use the Find function
void Contains(string str)
{
    string findme;
    cout << "Enter a string to find: ";
    getline(cin, findme);

    int foundPosition = str.find(findme);

    if (foundPosition == string::npos)
    {
        cout << "string not found" << endl;
    }
    else
    {
        cout << "string found" << endl;
    }
}

// string substr (size_t pos = 0, size_t len = npos) const;
// http://www.cplusplus.com/reference/string/string/substr/
void GetSubstring(string &str)
{
    int position;
    cout << "Enter the starting position: ";
    cin >> position;

    int length;
    cout << "Enter the amount of characters to grab: ";
    cin >> length;
    cin.ignore();

    cout << "Substring is \"" << str.substr(position, length) << "\"" << endl;
}

// int compare (const string& str) const;
// http://www.cplusplus.com/reference/string/string/compare/
void GetOrder(string &str)
{
    string first;
    cout << "Enter first string: ";
    getline(cin, first);

    string second;
    cout << "Enter string to compare with: ";
    getline(cin, second);

    int result = first.compare(second);

    if (result < 0)
    {
        cout << "\"" << first << "\"" << endl
             << "is less than" << endl
             << "\"" << second << "\"" << endl;
    }
    else if (result == 0)
    {
        cout << "\"" << first << "\"" << endl
             << "is the same as" << endl
             << "\"" << second << "\"" << endl;
    }
    else if (result > 0) // could use "else"
    {
        cout << "\"" << first << "\"" << endl
             << "is greater than" << endl
             << "\"" << second << "\"" << endl;
    }
}

// string operator+ (const string& lhs, const string& rhs);
// http://www.cplusplus.com/reference/string/string/operator+/
void Combine(string &str)
{
    string second;
    cout << "Enter a string to add to the end: ";
    getline(cin, second);

    str = str + second;

    cout << endl
         << "String is now \"" << str << "\"" << endl;
}

// string& insert (size_t pos, const string& str);
// http://www.cplusplus.com/reference/string/string/insert/
void Insert(string &str)
{
    int pos;
    cout << "Enter a position to insert at: ";
    cin >> pos;
    cin.ignore();

    string insertString;
    cout << "Enter a string to insert: ";
    getline(cin, insertString);

    str = str.insert(pos, insertString);
    // Use the insert function to insert the insertString into str,
    // assign it as the new value of str.

    cout << endl
         << "String is now \"" << str << "\"" << endl;
}

// string& erase (size_t pos = 0, size_t len = npos);
// http://www.cplusplus.com/reference/string/string/erase/
void Remove(string &str)
{
    int pos;
    cout << "Enter a position to remove from: ";
    cin >> pos;

    int length;
    cout << "Enter amount of characters to remove: ";
    cin >> length;
    cin.ignore();

    str = str.erase(pos, length);
    cout << endl
         << "String is now \"" << str << "\"" << endl;
}

// string& replace (size_t pos,  size_t len,  const string& str);
// http://www.cplusplus.com/reference/string/string/replace/
void Replace(string &str)
{
    int pos;
    cout << "Enter a position to begin replace: ";
    cin >> pos;

    int length;
    cout << "Enter amount of characters to replace: ";
    cin >> length;
    cin.ignore();

    string insertString;
    cout << "Enter string to put: ";
    getline(cin, insertString);

    str = str.replace(pos, length, insertString);
    // Use the replace function to replace a portion of str,
    // assign it as the new value of str.

    cout << endl
         << "String is now \"" << str << "\"" << endl;
}

// Use the Find and the Replace function together
void AdvancedReplace(string &str)
{
    string replaceme;
    cout << "String to replace: ";
    getline(cin, replaceme);

    string insertString;
    cout << "Enter string to put: ";
    getline(cin, insertString);

    // 1. Use the find function to find the position where the "replaceme" string shows up.
    int positionOfReplaceMe = str.find(replaceme);
    if (string::npos)
    {
        cout << "Can't find substring to replace!" << endl;
        return;
    }
    str = str.replace(positionOfReplaceMe, replaceme.size(), insertString);

    cout << "String is now \"" << str << "\"" << endl;
}
