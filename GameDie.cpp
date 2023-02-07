#include "GameDie.h"
#include <cstdlib>
#include <ctime>
#include <vector>

//class constructor that seeds the random number generator
GameDie::GameDie()
{
    SIDES=6;
    srand(time(NULL));
    for(int i=0; i<SIDES; i++)
      counter[i] = 0;
}

GameDie::GameDie(unsigned int no)
{
 if(no==0)
 {
    SIDES=6;
 }
 else
 {
    SIDES=no;
 }
}

vector<int> GameDie::get_distribution()
{
   roll.resize(SIDES);
   for(int i=0;i<roll.size();++i)
   {
       int j = roll();
       if(i==j)
       {
           roll[i-1]=roll[i-1]+1;
       }
   }
   return roll;
}
//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
    int roll = rand() % SIDES;
    counter[roll]++;
    return roll + 1;
}
