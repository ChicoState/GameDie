#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
//class constructor that seeds the random number generator
GameDie::GameDie()
{
	srand(time(NULL));
}

//generate a random number between 1-6 (inclusive) and display it
void GameDie::roll()
{
	cout << "Random number is: " << rand() % 6 + 1 << endl;
}
