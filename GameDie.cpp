//I have successfully cloned and pushed
#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <time.h>
using std::cout;
using std::string;
//class constructor that seeds the random number generator
GameDie::GameDie()
{
roll();
}

//generate a random number between 1-6 (inclusive) and display it
void GameDie::roll()
{

int pivotIndex;
std::default_random_engine kashi;
std::random_device aj;
std::uniform_int_distribution<int> rand(1,6);
kashi.seed(aj());
pivotIndex=rand(kashi);
std::cout<<"This is the random number between 1 to 6 : " <<pivotIndex<<std::endl;

}
