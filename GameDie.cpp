#include <cstdlib>
#include <time.h>
//class constructor that seeds the random number generator
GameDie::GameDie(int sides)
{
  no_sides=sides;
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{

  srand (time(NULL));
  return (rand() % no_sides) + 1;
}
