#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//class constructor that seeds the random number generator
GameDie::GameDie()
{
	srand(time(NULL));     //seeding the random number generator 
}

//generate a random number between 4-20 (inclusive) and return it
int GameDie::roll()
{
	int num = (rand() % (20 + 1 - 4)) + 4;      //using rand() to generate random number
    return num;
}
