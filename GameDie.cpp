#include "GameDie.h"
#include <cstdlib>
#include <ctime>
#include <vector>

const int DEFAULT_SIDES = 6;

//class constructor that seeds the random number generator
GameDie::GameDie() : GameDie(DEFAULT_SIDES) {}

// Overloaded constructor to allow creating a die with any number of faces
GameDie::GameDie(unsigned int sides)
{
    if (sides == 0) {
        sides = DEFAULT_SIDES;
    }
    SIDES = sides;
    srand(time(NULL));
    for (int i = 0; i < SIDES; i++) {
        counter[i] = 0;
    }
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
    int roll = rand() % SIDES;
    counter[roll]++;
    return roll + 1;
}

std::vector<int> GameDie::get_distribution() const
{
    std::vector<int> distribution(SIDES);
    for (int i = 0; i < SIDES; i++) {
        distribution[i] = counter[i];
    }
    return distribution;
}