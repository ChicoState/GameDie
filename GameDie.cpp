#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
#include "GameDie.h"
using namespace std;
//class constructor that seeds the random number generator
GameDie::GameDie()
{
   srand (time(NULL));
}

//generate a random number between 1-6 (inclusive) and display it
void GameDie::roll()
{
   int r;
   r = rand() % 6 + 1;
   cout<<"Random number is "<<r<<endl;
}
