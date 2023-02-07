#include "GameDie.h"
#include <cstdlib>
#include <ctime>

// class constructor that seeds the random number generator
GameDie::GameDie()
{
    srand(time(NULL));
    for (int i = 0; i < FACES; i++)
        counter[i] = 0;
}

// overloaded class constructor that seeds the random number generator for custom no. of faces
GameDie::GameDie(int n)
{
    custom_FACES = n;
    cf_enabled = true;
    srand(time(NULL));
    for (int i = 0; i < custom_FACES; i++)
        counter[i] = 0;
}
// generate a random number between 1-6 (inclusive) or 1-custom_Faces and return it
int GameDie::roll()
{
    int roll;
    if (cf_enabled)
    {
        roll = rand() % custom_FACES;
    }
    else
    {
        roll = rand() % FACES;
    }
    counter[roll]++;
    return roll + 1;
}
