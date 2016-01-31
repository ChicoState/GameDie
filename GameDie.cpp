#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>
using namespace std;
//class constructor that seeds the random number generator
GameDie::GameDie()
{
  srand(time(NULL));
}

//generate a random number between 1-6 (inclusive) and display it
int GameDie::roll()
{
  return rand()%6+1;
}
