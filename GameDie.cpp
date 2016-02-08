#include <cstdlib>
#include"GameDie.h"
//class constructor that seeds the random number generator
GameDie::GameDie()
{
   //srand(time(NULL));
}

GameDie::GameDie(int a)
{
   number=a;
}

//generate a random number between 1-20 (inclusive) and return it
int GameDie::roll(int a)
{
   int randomNumber;
   srand(time(NULL));
   randomNumber=rand()%a+1;
   return randomNumber;
}
