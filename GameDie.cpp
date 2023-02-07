#include "GameDie.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
using namespace std;
// class constructor that seeds the random number generator
GameDie::GameDie()
{
    srand(time(NULL));
    for (int i = 0; i < SIDES; i++)
    {
        counter[i] = 0;
        distribution.push_back(0);
    }
}

// generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
    int roll = rand() % SIDES;
    counter[roll]++;
    distribution[roll]++;
    return roll + 1;
}

vector<int> GameDie::get_distribution()
{
    return distribution;
}