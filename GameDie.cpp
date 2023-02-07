#include "GameDie.h"
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iostream>

//class constructor that seeds the random number generator
GameDie::GameDie()
{
    srand(time(NULL));
    for(int i=0; i<FACES; i++)
      counter[i] = 0;
}

//Overloaded contructor
GameDie::GameDie(int sides)
{
  srand(time(NULL));
    for(int i=0; i<sides; i++)
      counter[i] = 0;
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
    int roll = rand() % FACES;
    counter[roll]++;
    dist[roll - 1]++;
    return roll + 1;
}

vector<int> GameDie::get_distribution()
{
  return dist;
}
