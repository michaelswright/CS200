#ifndef _RECIPE_HPP
#define _RECIPE_HPP
#include <string>
#include "Ingredient.hpp"
using namespace std;

class Recipe
{
private:
    string m_name;
    string m_instructions;
    string m_source;
    Ingredient m_ingredients[20];
    int m_totalIngredients;
    const int MAX_INGREDIENTS;

public:
    Recipe();
    void AddIngredient(string name, float amount, string unit);
    void Save(string filename);
    void SetName(string name);
    string GetName();
    void SetInstructions(string name);
    string GetInstructions();
    void SetSource(string name);
    string GetSource();
    void Display();
};

#endif