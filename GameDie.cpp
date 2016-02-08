#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int value = 6;
//class constructor that seeds the random number generator
GameDie::GameDie()
{
	srand(time(NULL));
	value = 6;
}

GameDie::GameDie(int f)
{
	srand(time(NULL));
	value = f;
}

//generate a random number between 1-20 (inclusive) and return it
int GameDie::roll()
{
	return rand() % value + 1;
}
