#include <iostream>
#include "Recipe.hpp"
#include "Ingredient.hpp"
#include "Cookbook.hpp"
using namespace std;
int main()
{
     Cookbook cookbook;
     cookbook.LoadRecipes("recipes.txt");
     cookbook.SetTitle("STUDENTNAME's Cookbook");
     bool done = false;
     while (!done)
     {
          int choice;
          cout << "Which recipe would you like to view?" << endl;
          cookbook.DisplayRecipeList();
          cout << "Or -1 to quit." << endl
               << endl
               << ">>";
          cin.ignore();
          cin >> choice;

          if (choice == -1)
          {
               done = true;
          }
          else
          {
               cookbook.DisplayRecipe(choice);
          }
     }
}