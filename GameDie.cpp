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

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
   int r,t;
   cout<<"Enter the maximum number to be rolled"<<endl;
   cin>>t;
   r = rand() % 20 + 1;
   cout<<"Random number is "<<r<<endl;
}
