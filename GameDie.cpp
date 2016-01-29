#include <iostream>
#include <cstdlib>
#include "GameDie.h"
#include <random>
using namespace std;

std::default_random_engine generator;
//class constructor that seeds the random number generator


GameDie::GameDie()
{
  generator.seed(time(NULL));
}


//generate a random number between 1-6 (inclusive) and display it
int GameDie::roll()
{
 int diceValue = 0;
 std::uniform_int_distribution<int> distribution(1,6);
 diceValue = distribution(generator);
 return diceValue;
}

