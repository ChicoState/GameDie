#include <iostream>
#include <cstdlib>
#include <time.h>
#include "GameDie.h"

//class constructor that seeds the random number generator
GameDie::GameDie()
{
    srand(time(NULL));
}

//generate a random number between 1-6 (inclusive) and display it
int GameDie::roll()
{
    getnum = rand() % 6 + 1;
    return getnum;
}
