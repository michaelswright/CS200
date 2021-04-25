#include "TrueFalseQuestion.hpp"
#include <iostream>
#include "Question.hpp"
using namespace std;

void TrueFalseQuestion::SetAnswer(bool answer)
{
    m_answer = answer;
}
bool TrueFalseQuestion::AskQuestion()
{
    int answer;
    bool b_answer;
    DisplayQuestion();
    cout << "0. false" << endl
         << "1. true" << endl
         << "Your answer: ";
    cin.ignore();
    cin >> answer;
    if (answer == 0)
    {
        b_answer = false;
    }
    else
    {
        b_answer = true;
    }
    if (b_answer == m_answer)
    {
        cout << "Correct!" << endl;
        return true
    }
    else
    {
        cout << "Wrong!" << endl;
        return false;
    }
}