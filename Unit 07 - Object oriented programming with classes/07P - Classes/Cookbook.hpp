#ifndef _COOKBOOK_HPP
#define _COOKBOOK_HPP
#include <string>
#include "Recipe.hpp"
using namespace std;

class Cookbook
{
private:
    string m_title;
    Recipe m_recipes[10];
    int m_totalRecipes;

public:
    Cookbook();
    void SetTitle(string title);
    string GetTitle();
    void DisplayRecipeList();
    void DisplayRecipe(int index);
    void LoadRecipes(string filename);
};

#endif