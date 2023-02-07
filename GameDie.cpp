#include "GameDie.h"
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

//class constructor that seeds the random number generator
GameDie::GameDie()
{
    srand(time(NULL));
    for(int i=0; i<sides; i++)
      counter[i] = 0;
}

// parameterized class constructor that takes number for die faces
GameDie::GameDie(int n)
{
    if( n <= 0)
        n = 6;
    sides = n;
    counter = new int(sides);
    srand(time(NULL));
    for(int i=0; i<sides; i++)
      counter[i] = 0;
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
    int roll = rand() % sides;
    counter[roll]++;
    return roll + 1;
}

vector<int> GameDie::get_distribution()
{
    vector<int> dist(counter, counter + sides);
    
    return dist;
}