#ifndef _FUNCTIONS_HPP
#define _FUNCTIONS_HPP

#include <string>
using namespace std;

void DisplayMainMenu( int petCount );

int GetChoice( int min, int max );

void InitializePets( string pets[], int maxPets, int& petCount );

void DisplayPets( const string pets[], int petCount );

void AddPet( string pets[], int maxPets, int& petCount );

#endif
