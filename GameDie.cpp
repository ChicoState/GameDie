#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include "GameDie.h"
using namespace std;

//class constructor that seeds the random number generator
GameDie::GameDie()
{
	srand(time(0));
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{


	int randNum = 1 + (rand()%6); 
	return randNum;
}
