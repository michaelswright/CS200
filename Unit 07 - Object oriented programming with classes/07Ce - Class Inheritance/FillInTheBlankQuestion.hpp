#ifndef _FITB_HPP
#define _FITB_HPP
#include "Question.hpp"

class FillInTheBlankQuestion : public Question
{
public:
    void SetAnswer(string answer);
    bool AskQuestion();

private:
    string m_answer;
};
#endif
