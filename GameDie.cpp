#include "GameDie.h"
#include <cstdlib>
#include <ctime>

//class constructor that seeds the random number generator
GameDie::GameDie()
{
    srand(time(NULL));
    for(int i=0; i<SIDES; i++)
      counter[i] = 0;
}

GameDie::GameDie(unsigned int num)
{
   if(num = 0)
   SIDES = 6;

   else
    SIDES = num;
}
//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
    int roll = rand() % SIDES;
    counter[roll]++;
    return roll + 1;
}

vector<int> GameDie::get_distribution()
{
    vector<int> V[SIDES] = {0};

    for(int i=0; i< SIDES; i++)
    {
        V[roll+1] = 1;                   //since the iterations in vector starts from zero
    }

    return V;
}
