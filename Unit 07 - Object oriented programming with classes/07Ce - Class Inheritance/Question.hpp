#ifndef _QUESTION_HPP
#define _QUESTION_HPP

#include <string>
using namespace std;
class Question
{
public:
    void SetQuestion(string Question);
    void DisplayQuestion();

protected:
    string m_question;
};
#endif