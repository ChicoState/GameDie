#include <cstdlib>
#include "GameDie.h"
#include <time.h>

using namespace std;
//class constructor that seeds the random number generator
GameDie::GameDie()
{
  roll();
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{

srand (time(NULL));
int a= rand()%6 +1;
cout<<a<<endl;

}
