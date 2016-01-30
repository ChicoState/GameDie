#include <cstdlib>
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */



//class constructor that seeds the random number generator
GameDie::GameDie()
{
    srand(time(NULL));     //seed the random number generator globally
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
    int num = rand()%6;      //using rand() to generate random number between 1 and 6 inclusive
    return num;
}
