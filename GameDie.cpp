#include <cstdlib>

using namespace std;

//class constructor that seeds the random number generator
GameDie::GameDie()
{
	number = 0;
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
	number = rand() % 6 + 1;
	cout<<"random number  = "<<number<<endl;
}
