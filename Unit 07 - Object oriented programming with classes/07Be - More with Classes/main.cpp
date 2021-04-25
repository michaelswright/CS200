#include <iostream>
using namespace std;

#include "Recipe.hpp"
#include "Ingredient.hpp"

int main()
{
    Recipe recipe;

    // Setup default
    recipe.SetName("Butter");
    recipe.SetSource("old family recipe");
    recipe.SetInstructions("Melt butter. Enjoy.");
    recipe.AddIngredient("Butter", 1, "stick");
    recipe.AddIngredient("Butter", 2, "sticks");
    recipe.AddIngredient("Butter", 3, "sticks");
    cout << "RECIPE EDITOR" << endl
         << endl;
    cout << "Editing recipe:" << endl
         << endl;
    recipe.Display();
    cout << endl;
    bool done = false;
    while (!done)
    {
        cout << "1. Set name" << endl;
        cout << "2. Set instructions" << endl;
        cout << "3. Set source" << endl;
        cout << "4. Add ingredient" << endl;
        cout << "5. Save" << endl;
        cout << "6. Quit" << endl
             << endl;
        int choice;
        cin >> choice;

        if (choice == 1)
        {
            cout << endl
                 << "SET NAME" << endl
                 << "----------------------------------" << endl;
            string temp;
            cout << "Enter recipe name: ";
            cin.ignore();
            getline(cin, temp);

            recipe.SetName(temp);
        }
        else if (choice == 2)
        {
            cout << endl
                 << "SET INSTRUCTIONS" << endl
                 << "----------------------------------" << endl;
            cout << "Enter instructions: ";
            string temp;
            cin.ignore();
            getline(cin, temp);

            recipe.SetInstructions(temp);
        }
        else if (choice == 3)
        {
            cout << endl
                 << "SET SOURCE" << endl
                 << "----------------------------------" << endl;
            cout << "Enter source: ";
            string temp;
            cin.ignore();
            getline(cin, temp);

            recipe.SetSource(temp);
        }
        else if (choice == 4)
        {
            cout << endl
                 << "ADD INGREDIENT" << endl
                 << "----------------------------------" << endl;
            cout << "Enter ingredient name: ";
            string temp1;
            cin.ignore();
            getline(cin, temp1);
            cout << endl;
            cout << "Enter unit of measurement: ";
            string temp2;
            getline(cin, temp2);
            cout << endl;
            cout << "Enter amount: ";
            float temp3;
            cin >> temp3;
            recipe.AddIngredient(temp1, temp3, temp2);
        }
        else if (choice == 5)
        {
            cout << endl
                 << "SAVE" << endl
                 << "----------------------------------" << endl;
            cout << "Enter a filename to save it under (include .txt at the end): ";
            string temp;
            cin.ignore();
            getline(cin, temp);
            recipe.Save(temp);
        }
        else if (choice == 6)
        {
            cout << endl
                 << "QUIT" << endl
                 << "----------------------------------" << endl;
            cout << "Goodbye!";
            done = true;
        }
    }

    return 0;
}