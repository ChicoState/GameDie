#include <cstdlib>
#include <time.h>
//class constructor that seeds the random number generator
GameDie::GameDie()
{
 srand(time(NULL));
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
 std::cout<<(rand()%20+4)<<std::endl;
}
