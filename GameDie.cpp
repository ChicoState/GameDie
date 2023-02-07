#include "GameDie.h"
#include <cstdlib>
#include <ctime>
#include<vector>

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

//Get the distribution of rolls made for each face of the die.
vector<int> GameDie::get_distribution() 
{
    vector<int> distribution;

    for (int i = 0; i<FACES; i++) {
        distribution.add(counter[i]);
    }
}