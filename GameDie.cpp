#include <cstdlib>
#include <time.h>
#include "GameDie.h"
#include <iostream>

using namespace std;

//class constructor that seeds the random number generator
GameDie::GameDie()
{
	srand(time(NULL));
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
  cout<<"Enter number of sides greater than or equal to 4 and less than 21"<<endl;
  int sides;
  cin>>sides;
	int i=(rand()%sides) + 1;
	return i;
}
