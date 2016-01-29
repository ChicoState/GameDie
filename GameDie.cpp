#include <cstdlib>
#include <iostream>
#include <ctime>
#include"GameDie.h"
//class constructor that seeds the random number generator
GameDie::GameDie()
{
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
        srand(time(NULL));
        std::cout << (rand() % 6 + 1) <<std::endl;
}

