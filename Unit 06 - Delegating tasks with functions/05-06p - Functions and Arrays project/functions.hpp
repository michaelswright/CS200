#ifndef _FUNCTIONS_HPP
#define _FUNCTIONS_HPP

#include <string>       // string data type
using namespace std;

void    SetupInventory( string names[], float prices[], int size );
void    DisplayInventory( const string names[], const float prices[], int size );
void    DisplayMenu();
int     GetChoice( int min, int max );
float   PercentToDecimal( float percent );
void    DisplayCart( const string names[], const float prices[], const int cart[], int cartCount );
float   CalculateTotalPrice( const float prices[], const int cart[], int cartCount );
float   PricePlusTax( float price, float tax );
float   CountChange( int quarters, int dimes, int nickels, int pennies );
float   AbsoluteValue( float value );

float   GetRandomPrice();
string  GetRandomProductName();

#endif
