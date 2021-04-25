#include "MultipleChoiceQuestion.hpp"
#include <iostream>
#include "Question.hpp"
using namespace std;

void MultipleChoiceQuestion::SetAnswers(string answers[4], int correctIndex)
{
    m_correctIndex = correctIndex;
    for (int i = 0; i < 4; i++)
    {
        m_answers[i] = answers[i];
    }
}
bool MultipleChoiceQuestion::AskQuestion()
{
    int answer;
    DisplayQuestion();
    for (int i = 0; i < 4; i++)
    {
        cout << i << ". " << m_answers[i] << endl;
    }
    cout << "Your answer: ";
    cin.ignore();
    cin >> answer;

    if (answer == m_correctIndex)
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