#include <iostream>
#include "Question.hpp"
using namespace std;

void Question::SetQuestion(string question)
{
    m_question = question;
}
void Question::DisplayQuestion()
{
    cout << endl
         << "QUESTION" << endl;
    cout << m_question << endl
         << endl;
}
