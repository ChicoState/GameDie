#include <cstdlib>
#include "GameDie.h"
#include <time.h>

//class constructor that seeds the random number generator
GameDie::GameDie()
{
    srand(time(NULL));
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
    int r = rand() % 6 + 1;
    std::cout<<r<<std::endl;
}

int main()
{
    GameDie gd = GameDie();
    gd.roll();
}
