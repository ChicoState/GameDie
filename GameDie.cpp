#include <cstdlib>
#include<time.h>

using namespace std;

//class constructor that seeds the random number generator
GameDie::GameDie()
{
	srand(time(NULL));
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
	int randomNumber = 2;
	while(randomNumber==2 || randomNumber==3){
		randomNumber = rand() % 20 + 1;
	}

	cout<< randomNumber<<endl;
}


