#include <iostream>
#include <cstdlib>
#include "GameDie.h"

//class constructor that seeds the random number generator
GameDie::GameDie()
{

}

//generate a random number between 1-6 (inclusive) and display it
void GameDie::roll()
{
  srand(time(NULL));
  int r=rand()%6+1;
  printf("The random number geneated is:%d\n",&r);
}
