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

GameDie::GameDie(unsigned int val)
{
    if (val > 0)
    {
        for (int i = 0; i < val; i++)
        {
            counter[i] = 0;
        }
    }
    else
    {
        if (val == 0)
        {
            for (int i = 0; i < 6; i++)
            {
                counter[i] = 0;
            }
        }
        else
        {
            cout << "Enter a positive number of sides!!!" << endl;
        }
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
    vector<int> roll_sides_v;
    int roll_value = roll();

    for (int i = 0; i < 6; i++)
    {
        if (i == roll_value - 1)
        {
            roll_sides_v.push_back(1);
        }
        else
        {
            roll_sides_v.push_back(0);
        }
    }

    return roll_sides_v;
}