#include <cstdlib>
#include <time.h>

//class constructor that seeds the random number generator
GameDie::GameDie()
{
	srand(time(NULL));	//Initialize random seed.
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
	int rollDice;
	rollDice = rand()%6+1;	//Genrate secret number between 1 and 6
	return rollDice; 
}
