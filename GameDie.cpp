#include "GameDie.h"
#include <cstdlib>
#include <ctime>
#include <vector>

//class constructor that seeds the random number generator
GameDie::GameDie()
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

std::vector<int> GameDie::get_distribution() const
{
    std::vector<int> distribution(SIDES);
    for (int i=0; i<SIDES; i++)
      distribution[i] = counter[i];
    return distribution;
}