#include <cstdlib>
#include <iostream>
#include <time.h>

#include "GameDie.h"
//class constructor that seeds the random number generator
GameDie::GameDie()
{
   srand(time(NULL));
}

//generate a random number between 1-20 (inclusive) and return it
void GameDie::roll()
{
  int getValue;
  std::cout << "Enter number to instantiation between 4 to 20" <<std::endl;
  std::cin  >> getValue; 
  int randomNumber = rand() % getValue + 1;
  std::cout << "Result of Die rolled :" << randomNumber << std::endl;
}
