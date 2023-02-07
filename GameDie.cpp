#include "GameDie.h"
#include <cstdlib>
#include <ctime>

//class constructor that seeds the random number generator
GameDie::GameDie()
{
    srand(time(NULL));
    counter.resize(6);
    for(int i=0; i<SIDES; i++)
      counter[i] = 0;
}

GameDie::GameDie(unsigned faces)
{
    srand(time(NULL));
    counter.resize(6);
    if(faces!=0)
    {
        SIDES=faces;
        counter.resize(faces);
    }
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

//returns the the number of rolls for each face of the die.
vector<int> GameDie::get_distribution()
{
    vector<int> distribution(SIDES);
    for(int i=0;i<SIDES;i++)
    {
        distribution[i]=counter[i];
    }
    return distribution;
}