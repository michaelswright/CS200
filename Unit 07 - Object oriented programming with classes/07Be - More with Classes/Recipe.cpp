#include "Recipe.hpp"
#include "Ingredient.hpp"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

Recipe::Recipe()
    : MAX_INGREDIENTS(20)
{
    m_totalIngredients = 0;
}

void Recipe::AddIngredient(string name, float amount, string unit)
{
    if (m_totalIngredients == MAX_INGREDIENTS)
    {
        cout << "Error: Maximum Ingredients has been reached" << endl;
    }
    else
    {
        m_ingredients[m_totalIngredients].Setup(name, amount, unit);
        m_totalIngredients++;
    }
}

void Recipe::Display()
{
    cout << "- " << m_name << " -" << endl;
    cout << m_source << endl
         << endl;
    cout << "-- INGREDIENTS --" << endl;
    for (int i = 0; i < m_totalIngredients; i++)
    {
        m_ingredients[i].Display();
    }
    cout << "-- INSTRUCTIONS --" << endl;
    cout << m_instructions << endl;
}

void Recipe::Save(string filename)
{
    ofstream output;
    output.open(filename);
    output << "RECIPE_BEGIN" << endl;
    output << "TITLE" << endl
           << m_name << endl;
    output << "SOURCE" << endl
           << m_source << endl;
    output << "INSTRUCTIONS" << endl
           << m_instructions << endl;
    for (int i = 0; i < m_totalIngredients; i++)
    {
        output << "INGREDIENT_BEGIN" << endl
               << "INGREDIENT_NAME" << endl;
        output << m_ingredients[i].GetName() << endl;
        output << "INGREDIENT_AMOUNT" << endl
               << m_ingredients[i].GetAmount() << endl;
        output << "INGREDIENT_UNIT" << endl
               << m_ingredients[i].GetUnit() << endl;
        output << "INGREDIENT_END" << endl;
    }
}

void Recipe::SetName(string name)
{
    m_name = name;
}

string Recipe::GetName()
{
    return m_name;
}
void Recipe::SetInstructions(string instructions)
{
    m_instructions = instructions;
}

string Recipe::GetInstructions()
{
    return m_instructions;
}
void Recipe::SetSource(string source)
{
    m_source = source;
}

string Recipe::GetSource()
{
    return m_source;
}
