#include "GameDie.h"

//class constructor that seeds the random number generator
GameDie::GameDie()
{
	num = 0;
	srand( time( NULL ) );  //  using the time seed from srand explanation
}

//generate a random number between 1-6 (inclusive) and display it
void GameDie::roll()
{
	num = rand()%6;
	cout<<num<<endl;
	return;
}


