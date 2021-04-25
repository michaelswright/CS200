#ifndef _MC_HPP
#define _MC_HPP
#include "Question.hpp"

class MultipleChoiceQuestion : public Question
{
public:
    void SetAnswer(string answers[4], int correctIndex);
    bool AskQuestion();

protected:
    string m_answers;
    int m_correctIndex;
};
#endif