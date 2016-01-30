#include <cstdlib>
#include <iostream>
#include <ctime>
#include "GameDie.h"

using namespace std;

//class constructor that seeds the random number generator
GameDie::GameDie()
{
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
  srand(time(NULL));
  int random_num = rand() % 6+1;
  cout << "Random Number being generated: " << random_num << endl;

  return random_num;
}
