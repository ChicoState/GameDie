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

GameDie::GameDie(unsigned number)
{
    srand(time(NULL));
    SIDES = number;
    for(int i=0; i<SIDES; i++)
      counter[i] = 0;
}



vector<int> GameDie::get_distribution()
{
    vector <int> v;
    for(int i = 0 ;i< SIDES; i++)
    {
        v.push_back(roll());
    }
    
    return v;
}
//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
    int roll = rand() % SIDES;
    counter[roll]++;
    return roll + 1;
}
