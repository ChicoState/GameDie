#include <cstdlib>
#include <iostream>
#include <time.h>

#include "GameDie.h"
//class constructor that seeds the random number generator
GameDie::GameDie()
{
   srand(time(NULL));
}

//generate a random number between 1-6 (inclusive) and return it
void GameDie::roll()
{
   int randomNumber = rand() % 6 + 1;
   std::cout << randomNumber << std::endl;
}
