#include "GameDie.h"
#include <cstdlib>
#include <ctime>

//class constructor that seeds the random number generator
GameDie::GameDie()
{
    srand(time(NULL));
    counter.resize(6);
    SIDES = 6;
    for(int i=0; i<6; i++)
      counter[i] = 0;
}

//overloaded constructor GameDie::GameDie(unsigned int) so that die can be created with any positive number of faces.
GameDie::GameDie(unsigned v) {
    srand(time(NULL));
    SIDES = v;
    counter.resize(v);
    for(int i=0; i<v; i++)
      counter[i] = 0;
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
    int roll = rand() % SIDES;
    counter[roll]++;
    return roll + 1;
}
