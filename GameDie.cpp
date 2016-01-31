#include <cstdlib>
#include "GameDie.h"

//class constructor that seeds the random number generator
GameDie::GameDie()
{
  srand(time(NULL));
}

//Random number is generated using rand function
int GameDie::roll()
{
  number = rand() % 6 + 1;
  std::cout << "The random number is: " << number << std::endl;
  return 0;
}
