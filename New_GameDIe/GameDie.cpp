#include <iostream>
#include <cstdlib>
#include <time.h>
#include "GameDie.h"
using namespace std;

//class constructor that seeds the random number generator
GameDie::GameDie()
{
  
}

//generate a random number between 1-20 (inclusive) and display it


void GameDie::roll()
{
    
    srand(time(NULL)); 
    GameDie gamedie;
    int rollgamedie = gamedie.roll(20);   
    //int random_num = rand()%6+1;
    
    for(random_num=1; random_num <= 20; random_num++)
{   
     cout << "Randomly generated number is :- " << rollgamedie << endl;
}

    return 0;

}
