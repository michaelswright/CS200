#include "Cookbook.hpp"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

Cookbook::Cookbook()
{
    m_totalRecipes = 0;
}

void Cookbook::SetTitle(string title)
{
    m_title = title;
}

string Cookbook::GetTitle()
{
    return m_title;
}

void Cookbook::DisplayRecipeList()
{
    for (int i = 0; i < m_totalRecipes; i++)
    {
        cout << i << ". " << m_recipes[i].GetName() << endl;
    }
}

void Cookbook::DisplayRecipe(int index)
{

    if (index < 0 || index > m_totalRecipes || index == m_totalRecipes)
    {
        cout << "Invalid Index!" << endl;
    }
    else
    {
        m_recipes[index].Display();
    }
}

void Cookbook::LoadRecipes(string filename)
{
    string buffer;
    string recipeTitle;
    string recipeSource;
    string recipeInstructions;
    string ingredientUnit;
    string ingredientName;
    float ingredientAmount;

    ifstream input;
    if (input.fail())
    {
        cout << "ERROR: Could not open file\"" << filename << "\"!" << endl;
        return;
    }
    input.open(filename);
    while (getline(input, buffer))
    {
        if (buffer == "TITLE")
        {
            getline(input, recipeTitle);
        }
        else if (buffer == "SOURCE")
        {
            getline(input, recipeSource);
        }
        else if (buffer == "INSTRUCTIONS")
        {
            getline(input, recipeInstructions);
        }
        else if (buffer == "INGREDIENT_UNIT")
        {
            getline(input, ingredientUnit);
        }
        else if (buffer == "INGREDIENT_NAME")
        {
            getline(input, ingredientName);
        }
        else if (buffer == "INGREDIENT_AMOUNT")
        {
            input >> ingredientAmount;
            input.ignore();
        }
        else if (buffer == "INGREDIENT_END")
        {
            m_recipes[m_totalRecipes].AddIngredient(ingredientName, ingredientAmount, ingredientUnit);
        }
        else if (buffer == "RECIPE_END")
        {
            m_recipes[m_totalRecipes].SetName(recipeTitle);
            m_recipes[m_totalRecipes].SetInstructions(recipeInstructions);
            m_recipes[m_totalRecipes].SetSource(recipeSource);
            m_totalRecipes++;
        }
    }
}