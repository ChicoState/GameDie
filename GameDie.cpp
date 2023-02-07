#include "GameDie.h"
#include <cstdlib>
#include <ctime>

// class constructor that seeds the random number generator
GameDie::GameDie()
{
    srand(time(NULL));
    for (int i = 0; i < SIDES; i++)
        counter[i] = 0;
    for (int i = 0; i < FACES; i++)
        counter[i] = 0;
}

GameDie::GameDie(unsigned int a)
{
    if (a == 0)
    {
        a = 6;
    }
    srand(time(NULL));
    for (int i = 0; i < a; i++)
    {
        counter[i] = 0;
    }
}

// generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
    int roll = rand() % FACES;
    counter[roll]++;
    return roll + 1;
}
