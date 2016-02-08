#include <iostream>
#include <cstdlib>
#include <time.h>
#include "GameDie.h"

//class constructor that seeds the random number generator
GameDie::GameDie()
{
    srand(time(NULL));
    getnum = rand() % 20 + 4;
}

//generate a random number between 1-6 (inclusive) and display it
int GameDie::roll()
{
    getroll = rand() % getnum + 1;
    return getroll;
}
