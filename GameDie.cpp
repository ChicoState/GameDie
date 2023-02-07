#include "GameDie.h"
#include <cstdlib>
#include <ctime>

//class constructor that seeds the random number generator
GameDie::GameDie()
{
    srand(time(NULL));
    for(int i=0; i<SIDES; i++)
      counter[i] = 0;
}

GameDie::GameDie(unsigned int faces){
    if(faces==0)
        SIDES=6;
    else
        SIDES=faces;

}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
    int roll = rand() % SIDES;
    counter[roll]++;
    //get_distribution(roll+1);
    return roll + 1;
}


vector<int> GameDie::get_distribution(int roll)
{
    vector<int> result;
    for(int i=0;i<SIDES;i++){
        if(i==roll-1){
            result[i]=1;
        }
        else{
            result[i]=0;
        }
    }
    return result;

}