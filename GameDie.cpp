#include "GameDie.h"
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

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

vector<int> GameDie::get_distribution()
{
    int n = sizeof(counter) / sizeof(counter[0]);
    vector<int> dist(counter, counter + n);
    
    return dist;
}