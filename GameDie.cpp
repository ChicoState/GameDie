#include "GameDie.h"
#include <cstdlib>
#include <ctime>

//class constructor that seeds the random number generator
GameDie::GameDie()
{
    faces = 6;

    srand(time(NULL));

    for (int i = 0; i < faces; i++)
        counter.push_back(0);
}

//overloaded class constructor that allows for an alternate-sized die.
GameDie::GameDie(unsigned int newFaces)
{
    faces = newFaces;
    if (faces == 0) faces = 6;

    srand(time(NULL));

    for (int i = 0; i < faces; i++)
        counter.push_back(0);
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
    int roll = rand() % faces;

    counter[roll]++;
    return roll + 1;
}
