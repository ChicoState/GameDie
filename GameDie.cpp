#include "GameDie.h"
#include <cstdlib>
#include <ctime>

using std::vector;

//class constructor that seeds the random number generator
GameDie::GameDie()
{
    srand(time(NULL));
    counter = vector<int> (0, SIDES);
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
    int roll = rand() % SIDES;
    counter[roll]++;
    return roll + 1;
}

vector<int> GameDie::get_distribution() {
    return counter;
} 