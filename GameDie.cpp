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
        counter.push_back(0);
    }
}

GameDie::GameDie(unsigned custom_faces)
{
    unsigned faces = custom_faces == 0 ? SIDES : custom_faces;

    srand(time(NULL));
    for (int i = 0; i < faces; i++)
    {
        counter.push_back(0);
    }
}

// generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
    int roll = rand() % SIDES;
    counter[roll]++;
    return roll + 1;
}

vector<int> GameDie::get_distribution()
{
    vector<int> distribution;
    for (unsigned i = 0; i < counter.size(); i++)
    {
        distribution.push_back(counter[i]);
    }
    return distribution;
}
