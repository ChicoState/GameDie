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

//overloaded constructor
GameDie::GameDie(unsigned int SIDES)
{
    srand(time(NULL));
    for(int i=0; i<SIDES; i++)
      counter[i] = 0;
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
    int roll = rand() % SIDES;
    counter[roll]++;
    return roll + 1;
}

if(SIDES == 0)
{
    GameDie(6);
}

else
{
    GameDie(SIDES);
}


vector<int> GameDie::get_distribution()
{
    if(int roll() == 0)
    {
        for(int i = 0; i < vector.size(); i++)
        {
            v[i] = 0;
        }
    }
    else
    {
        for(int i = 0; i < vector.size(); i++) 
        {
            v[i] = int roll()-1;
        }

    }
}