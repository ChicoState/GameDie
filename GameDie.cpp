#include <iostream>
#include <cstdlib>
#include <time.h>
#include "GameDie.h"
using namespace std;

//class constructor that seeds the random number generator
GameDie::GameDie()
{
  
}

//generate a random number between 1-6 (inclusive) and display it


int GameDie::roll()
{
    
    srand(time(NULL));    
    int random_num = rand()%6+1;

    return random_num;

}
