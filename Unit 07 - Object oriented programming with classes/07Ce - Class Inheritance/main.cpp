#include "Question.hpp"
#include "TrueFalseQuestion.hpp"
#include "MultipleChoiceQuestion.hpp"
#include "FillInTheBlankQuestion.hpp"

#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    int totalQuestions = 1;

    FillInTheBlankQuestion question1;
    question1.SetQuestion("What is the best programming language?");
    question1.SetAnswer("C++");

    TrueFalseQuestion question2;
    question2.SetQuestion("Pineapple belongs on pizza.");
    question2.SetAnswer(true);

    MultipleChoiceQuestion question3;
    question3.SetQuestion("What was the best video game of 2019?");
    string answers[] = {"Control", "The Outer Wilds", "Death Stranding", "Sekiro"};
    question3.SetAnswers(answers, 2);

    if (question1.AskQuestion() == true)
    {
        score += 1;
    }
    if (question2.AskQuestion() == true)
    {
        score += 1;
    }
    if (question3.AskQuestion() == true)
    {
        score += 1;
    }

    totalQuestions = 3;
    cout << "RESULTS" << endl
         << score << "correct out of " << totalQuestions;
    return 0;
}
