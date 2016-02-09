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

//class parameterised constructor to instantiate sides of dice
GameDie::GameDie(int n)
{
  numberOfSides = n;
}


//generate and return a random number between 1-numberOfSides(inclusive)
int GameDie::roll()
{
 int diceValue = 0;
 //Return dice value if number of sides is between 4-20(inclusive), else 0
 if(numberOfSides >= 4 &&  numberOfSides <= 20)
 {
   std::uniform_int_distribution<int> distribution(1,numberOfSides);
   diceValue = distribution(generator);
 } 
 return diceValue;
}

