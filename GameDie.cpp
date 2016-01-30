#include <cstdlib>
#include <time.h>
//class constructor that seeds the random number generator
GameDie::GameDie()
{
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{

  srand (time(NULL));
  return (rand() % 6) + 1;
}
