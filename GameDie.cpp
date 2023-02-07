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

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
    int roll = rand() % FACES;
    counter[roll]++;
    return roll + 1;
}

//returns the rolled dice faces as a distribution in a vector (i.e. 0, 1, 2, 0, 0, 0 is 1 roll for 2, 2 rolls for 3)
vector<int> GameDie::get_distribution()
{
   return counter;
} 
