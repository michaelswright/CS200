#include "Ingredient.hpp"
#include <string>
#include <iostream>
using namespace std;

void Ingredient::Setup(string name, float amount, string unit)
{
    m_name = name;
    m_amount = amount;
    m_unit = unit;
}

void Ingredient::Display()
{
    cout << m_amount << " " << m_unit << " of " << m_name << endl;
}

string Ingredient::GetName()
{
    return m_name;
}

string Ingredient::GetUnit()
{
    return m_unit;
}

float Ingredient::GetAmount()
{
    return m_amount;
}