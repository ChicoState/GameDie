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

//Overloaded constructor so that die can be created with any number of faces
GameDie::GameDie(unsigned faces)
{
    if(faces == 0)
        SIDES = 6;
    else
        SIDES = faces;
        
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

//function that represents the number of rolls for each face of the die.
vector<int> GameDie::get_distribution()
{
    vector<int> count(SIDES);
    for(int i=0; i<SIDES; i++)
    {
        count[counter[i]];
    }
    return count;
}











