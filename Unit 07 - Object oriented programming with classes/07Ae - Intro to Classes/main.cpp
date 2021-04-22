#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Die.hpp"
#include "Card.hpp"
using namespace std;

void Program1()
{
     cout << endl
          << "DICE" << endl;
     Die die1;
     cout << die1.Roll()
          << endl;
     cout << die1.Roll()
          << endl;
     cout << die1.Roll()
          << endl;
     Die die2;
     cout << die2.Roll()
          << endl;
     cout << die2.Roll()
          << endl;
     cout << die2.Roll()
          << endl;
}

void Program2()
{
     cout << endl
          << "CARDS" << endl;
     Card card1;
     card1.SetRank("3");
     card1.SetSuit('A');
     Card card2;
     card2.SetRank("4");
     card2.SetSuit('H');
     card1.Display();
     card2.Display();
}

// You don't need to modify main()
int main()
{
     srand(time(NULL));
     bool done = false;

     while (!done)
     {
          cout << endl;
          cout << "MAIN MENU" << endl;
          cout << "-------------------" << endl;
          cout << "1. Dice" << endl;
          cout << "2. Cards" << endl;
          cout << "0. Quit" << endl;

          int choice;
          cin >> choice;

          if (choice == 1)
          {
               Program1();
          }
          else if (choice == 2)
          {
               Program2();
          }
          else if (choice == 0)
          {
               done = true;
          }
     }

     return 0;
}