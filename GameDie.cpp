#include "GameDie.h"
#include <cstdlib>
#include <ctime>

//class constructor that seeds the random number generator
GameDie::GameDie()
{
    currentFaces = 6;
    srand(time(NULL));
    for(int i=0; i<currentFaces; i++)
      counter.push_back(0);
}

GameDie::GameDie(unsigned int cf) {
    srand(time(NULL));
    currentFaces = cf;
    srand(time(NULL));
    for(int i=0; i<currentFaces; i++)
      counter.push_back(0);
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
    int roll = rand() % currentFaces;
    counter[roll]++;
    return roll + 1;
}
