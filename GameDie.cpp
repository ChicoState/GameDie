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
<<<<<<< HEAD
    for (int i = 0; i < SIDES; i++)
        counter[i] = 0;
=======
    for(int i=0; i<FACES; i++)
      counter[i] = 0;
>>>>>>> 6874c1fb4404664abbf2f823d682d3829168f9d4
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
    int roll = rand() % FACES;
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