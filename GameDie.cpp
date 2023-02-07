#include "GameDie.h"
#include <cstdlib>
#include <ctime>

//default class constructor that seeds the random number generator
GameDie::GameDie() : FACES(6)
{
 srand(time(NULL));
 counter.resize(FACES, 0);
}

//overloaded class constructor
GameDie::GameDie(unsigned int faces)
{
 if(faces == 0)
 FACES = 6;
 else
 FACES = faces;
 srand(time(NULL));
 counter.resize(FACES, 0);
}

//generate a random number between 1-FACES (inclusive) and return it
int GameDie::roll()
{
 int roll = rand() % FACES;
 counter[roll]++;
 return roll + 1;
}

//public member function that returns a vector representing the number of rolls for each face of the die
std::vector<int> GameDie::get_distribution()
{
 return counter;
}

