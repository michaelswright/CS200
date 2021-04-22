#ifndef _CARD_HPP
#define _CARD_HPP
#include <string>
using namespace std;

class Card
{
private:
    string rank;
    char suit;

public:
    void SetRank(string newRank);
    string GetRank();
    void SetSuit(char newSuit);
    char GetSuit();
    void Display();
};

#endif