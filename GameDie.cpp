#include "GameDie.h"
#include <cstdlib>
#include <ctime>

//class constructor that seeds the random number generator
GameDie::GameDie()
{
    srand(time(NULL));
    for(int i=0; i<FACES; i++)
      counter[i] = 0;
}

// Overload the default constructor to accept any number of faces
GameDie::GameDie(unsigned nFACES) {
    FACES = nFACES;
    for(int i=0; i<FACES; i++)
      counter[i] = 0;
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
    int roll = rand() % FACES;
    counter[roll]++;
    return roll + 1;
}

vector<unsigned> GameDie::get_distribution() {
    vector<unsigned> ret;
    ret.push_back(GameDie::roll());
    return ret;
}