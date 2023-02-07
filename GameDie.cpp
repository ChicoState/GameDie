#include "GameDie.h"
#include <cstdlib>
#include <ctime>

//class constructor that seeds the random number generator
GameDie::GameDie()
{
    srand(time(NULL));
    for(int i=0; i<FACES; i++)
      counter[i] = 0;
    changedFaces = 0;
}

//constructor that takes in custom number of faces for a die.
GameDie::GameDie(unsigned int faces)
{
    if(faces == 0)
        faces = 6;
    
    srand(time(NULL));
    for(int i=0; i<faces; i++)
      counter[i] = 0;
    
    changedFaces = faces;
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
    int roll;
    if(changedFaces == 0)
        roll = rand() % FACES;
    else
        roll = rand() % changedFaces;

    counter[roll]++;
    return roll + 1;
}
