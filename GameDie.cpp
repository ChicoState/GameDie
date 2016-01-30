#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
//class constructor that seeds the random number generator
GameDie::GameDie()
{
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
    srand(static_cast<unsigned int>(time(NULL)%1000));
    int score=(rand() %6)+1;
    return score;
}
