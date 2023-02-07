#include "GameDie.h"
#include <cstdlib>
#include <ctime>
#include <vector>


//class constructor that seeds the random number generator
GameDie::GameDie()
{
    srand(time(NULL));
    for(int i=0; i<FACES; i++)
      counter[i] = 0;
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
    int roll = rand() % FACES;
    counter[roll]++;
    return roll + 1;
}

vector<int> GameDie::get_distribution()
{
    vector<int> distrVector;
    for(int i=0;i<no_of_faces;i++) {
        int dieNo = roll();
        distrVector[i] = dieNo;
    }
     return distrVector;
}


GameDie::GameDie(unsigned int faceCount)
{
    if(no_of_faces==0) {
        no_of_faces = 6;
    } else {
        no_of_faces = faceCount;
    }
}
