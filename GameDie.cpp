#include "GameDie.h"
#include <cstdlib>
#include <ctime>

//class constructor that seeds the random number generator
GameDie::GameDie()
{
    SIDES = 6;

    for (int i = 0; i < SIDES; i++) {
        counter.push_back(0);
    }

    srand(time(NULL));
    for(int i=0; i<SIDES; i++)
      counter.at(i) = 0;
}

//class constructor that allows any positive n-sided die and seeds the random 
//number generator
GameDie::GameDie(unsigned int n)
{
    if (n != 0) {
        SIDES = n;
    } else {
        SIDES = 6;
    }

    for (int i = 0; i < SIDES; i++) {
        counter.push_back(0);
    }

    srand(time(NULL));
    for(int i=0; i<SIDES; i++)
      counter.at(i) = 0;
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
    int roll = rand() % SIDES;
    counter.at(roll)++;
    return roll + 1;
}
