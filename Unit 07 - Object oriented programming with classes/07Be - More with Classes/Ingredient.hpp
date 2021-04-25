#ifndef _INGREDIENT_HPP
#define _INGREDIENT_HPP
#include <string>
using namespace std;

class Ingredient
{
private:
    string m_name;
    string m_unit;
    float m_amount;

public:
    void Setup(string name, float amount, string unit);
    string GetName();
    string GetUnit();
    float GetAmount();
    void Display();
};

#endif