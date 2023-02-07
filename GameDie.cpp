#include "GameDie.h"
#include <cstdlib>
#include <ctime>

//class constructor that seeds the random number generator
GameDie::GameDie()
{
    SIDES = 6;

    for (int i = 0; i < FACES; i++) {
        counter.push_back(0);
    }

    srand(time(NULL));
    for(int i=0; i<FACES; i++)
      counter.at(i) = 0;
}

//class constructor that allows any positive n-sided die and seeds the random 
//number generator
GameDie::GameDie(unsigned int n)
{
    if (n != 0) {
        FACES = n;
    } else {
        FACES = 6;
    }

    for (int i = 0; i < FACES; i++) {
        counter.push_back(0);
    }

    srand(time(NULL));
    for(int i=0; i<FACES; i++)
      counter.at(i) = 0;
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
    int roll = rand() % FACES;
    counter.at(roll)++;

    return roll + 1;
}

vector<int> GameDie::get_distribution()
{
    return counter;
}
