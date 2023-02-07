#include "GameDie.h"
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iostream>
using namespace std;
// class constructor that seeds the random number generator
GameDie::GameDie()
{
    srand(time(NULL));
    for (int i = 0; i < SIDES; i++)
        counter[i] = 0;
}
//  Overload constructor for alternate-sized die
GameDie::GameDie(unsigned int n)
{
    int sides = n;

    if (n == 0)
    {
        sides = 6;
    }
    srand(time(NULL));
    for (int i = 0; i < sides; i++)
        counter[i] = 0;
}

// generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
    int roll = rand() % SIDES;
    counter[roll]++;
    disributionArray.push_back(roll + 1);
    return roll + 1;
}
vector<int> GameDie::get_distribution()
{
    return disributionArray;
}