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
  int new_number;
  number = rand() % 20 + 4;
  new_number = rand() % number + 1;
  std::cout << "The random number is: " << new_number << std::endl;
  return 0;
}
