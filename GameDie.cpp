#include <iostream>
#include <cstdlib>
#include <iostream>
#include <ctime>
#include "GameDie.h"
using namespace std;

int num;
//class constructor that seeds the random number generator
GameDie::GameDie()
{
	srand( time( NULL ) );  //  using the time seed from srand explanation
}

//generate a random number between 1-6 (inclusive) and display it
void GameDie::roll()
{
	num = rand()%6;
	return;
}

int main(){
	GameDie gamedie;
	gamedie.roll();
	cout<<num<<endl;
	return 1;
}
