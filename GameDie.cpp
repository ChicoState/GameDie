#include "GameDie.h"
#include <cstdlib>
#include <ctime>

//class constructor that seeds the random number generator
GameDie::GameDie()
{
    srand(time(NULL));
    for(int i=0; i<SIDES; i++)
      counter[i] = 0;
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
    int roll = rand() % SIDES;
    counter[roll]++;
    return roll + 1;
}

//getter function for retrieving roll distribution
std::vector<int> GameDie::get_distribution()
{
    std::vector<int> distro;

    for ( int i = 0; i< SIDES; i++) {
        distro.push_back(counter[i]);
    }
    return distro;
}
