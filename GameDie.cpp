#include "GameDie.h"
#include <cstdlib>
#include <ctime>

//class constructor that seeds the random number generator
GameDie::GameDie()
{
    srand(time(NULL));
    for(int i=0; i<FACES; i++)
      counter[i] = 0;
}

//overloaded constructor for custom-sided die
GameDie::GameDie(int sides)
{
    srand(time(NULL));

    //default to 6 if 0 provided
    if ( sides == 0 )
        sides = FACES;
        
    for(int i=0; i<sides; i++)
      counter[i] = 0;
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
    int roll = rand() % FACES;
    counter[roll]++;
    return roll + 1;
}

//getter function for retrieving roll distribution
std::vector<int> GameDie::get_distribution()
{
    std::vector<int> distro;

    for ( int i = 0; i< FACES; i++) {
        distro.push_back(counter[i]);
    }
    return distro;
}
