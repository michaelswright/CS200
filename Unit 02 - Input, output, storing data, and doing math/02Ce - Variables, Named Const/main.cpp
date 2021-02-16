
// 03Ce Variables by Michael Wright
#include <iostream>
using namespace std;

int main()
////{
    const float CUPS_BUTTER = 1;
    const float CUPS_WHITE_SUG = 1;
    const float CUPS_PACKED_BROWN_SUG = 1;
    const float EGGS = 2;
    const float TEASPOON_VANILLA_EXTRACT = 2;
    const float TEASPOON_BAKING_SODA = 1;
    const float TEASPOONS_HOT_WATER = 2;
    const float TEASPOONS_SALT = 0.5;
    const float CUPS_ALL_PUR_FLOWER = 3;
    const float CUPS_SEMI_SWEET_CHOC_CHIPS = 2;
    const float CUPS_CHOPPED_WALNUT = 1;
    float batches;


    cout << "Chocolate Chip Recipe" << endl;
    cout << "Please enter a batch amount: ";
    cin >> batches;
    cout << "From https://www.allrecipes.com/recipe/10813/best-chocolate-chip-cookies/" << endl;
    cout << endl;

    cout << "INGREDIENTS" << endl;
    cout << "----------------------------------" << endl;
    cout << CUPS_BUTTER * batches << " cup(s) butter, softened" << endl;
    cout << CUPS_WHITE_SUG * batches << " cup(s) white sugar" << endl;
    cout << CUPS_PACKED_BROWN_SUG * batches << " cup(s) packed brown sugar" << endl;
    cout << EGGS * batches << " egg(s)" << endl;
    cout << TEASPOON_VANILLA_EXTRACT * batches << " teaspoon(s) vanilla extract" << endl;
    cout << TEASPOON_BAKING_SODA * batches << " teaspoon(s) baking soda" << endl;
    cout << TEASPOONS_HOT_WATER * batches << " teaspoon(s) hot water" << endl;
    cout << TEASPOONS_SALT * batches << " teaspoon(s) salt" << endl;
    cout << CUPS_ALL_PUR_FLOWER * batches << " cup(s) all-purpose flour" << endl;
    cout << CUPS_SEMI_SWEET_CHOC_CHIPS * batches << " cup(s) semisweet chocolate chips" << endl;
    cout << CUPS_CHOPPED_WALNUT * batches << " cup(s) chopped walnuts" << endl;
    cout << "----------------------------------" << endl;
    cout << endl;
    cout << endl;
    cout << "DIRECTIONS" << endl;
    cout << "1. Preheat oven to 350 degrees F (175 degrees C)." << endl;
    cout << endl;
    cout << "2. Cream together the butter, white sugar, and brown sugar until smooth. Beat in the eggs one at a time, then stir in the vanilla. Dissolve baking soda in hot water. Add to batter along with salt. Stir in flour, chocolate chips, and nuts. Drop by large spoonfuls onto ungreased pans." << endl;
    cout << endl;
    cout << "3. Bake for about 10 minutes in the preheated oven, or until edges are nicely browned." << endl;

    return 0;
}
