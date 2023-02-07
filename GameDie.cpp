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

//constructor that created a die with the specified number of faces 
GameDie::GameDie(unsigned int n)
{
    unsigned x = n;
    if (x == 0)
    {
        SIDES = 6;
    }
    else
    {
        SIDES = x;
    }

}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
    int roll = rand() % FACES;
    counter[roll]++;
    return roll + 1;
}

//member function for keeping track of no. of times a face has appeared
vector GameDie::get_distribution()
{
    vector<int> rolls;

    for(int i=0; i<SIDES; i++)
    {
        rolls.at(i) = counter[i+1];
    }
    
    return rolls;
}