#include <iostream>
using namespace std;

void FillInTheBlankQuestion::SetAnswer(string answer)
{
    m_answer = answer;
}

bool FillInTheBlankQuestion::AskQuestion()
{
    DisplayQuestion();
    string answer;
    cout << "Your answer: ";
    cin.ignore();
    getline(cin, answer);
    if (answer == m_answer)
    {
        cout << "Correct!" << endl;
        return true;
    }
    else
    {
        cout << "Wrong!" << endl;
        return false;
    }
}