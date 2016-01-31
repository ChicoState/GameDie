#include <iostream>
#include <cstdlib>
#include "GameDie.h"

//class constructor that seeds the random number generator
GameDie::GameDie()
{
  srand(time(NULL));
}

//generate a random number between 1-6 (inclusive) and display it
int GameDie::roll()
{
  number = rand() % 6 + 1;
  std::cout << "The random number is: " << number << std::endl;
  return 0;
}
