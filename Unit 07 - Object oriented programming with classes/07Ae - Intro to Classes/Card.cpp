#include "Card.hpp"
#include <string>
#include <iostream>
using namespace std;

void Card::SetRank(string newRank)
{
    rank = newRank;
}

string Card::GetRank()
{
    return rank;
}

void Card::SetSuit(char newSuit)
{
    suit = newSuit;
}

char Card::GetSuit()
{
    return suit;
}

void Card::Display()
{
    cout << rank << " of " << suit << endl;
}