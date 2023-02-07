#include "GameDie.h"
#include <cstdlib>
#include <ctime>
#include <vector>

//Overlaod the constructor

GameDie::GameDie(int sides){
    if(sides==0)
        SIDES=6;
    SIDES=sides;
}

//class constructor that seeds the random number generator
GameDie::GameDie()
{
    srand(time(NULL));
    for(int i=0; i<SIDES; i++)
      counter.at(i) = 0;
   
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
    int roll = rand() % SIDES;
    counter.at(roll)++;

    return roll + 1;
}
