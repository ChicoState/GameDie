#include "GameDie.h"
#include <cstdlib>
#include <ctime>

//class constructor that seeds the random number generator
/*
GameDie::GameDie()
{
    srand(time(NULL));
    for(int i=0; i<SIDES; i++)
      counter[i] = 0;
}*/



//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
    int roll = rand() % SIDES;
    counter[roll]++;

    return roll + 1;
}

//getting distribution----issue# 1
vector<int> GameDie::get_distribution()
{
   vector<int> v;
   for(int i=0;i<10;i++)
   {
    v.append(roll());
   }

   return v;
}
