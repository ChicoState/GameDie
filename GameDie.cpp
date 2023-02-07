#include "GameDie.h"
#include <cstdlib>
#include <ctime>

// class constructor that seeds the random number generator
GameDie::GameDie()
{
    srand(time(NULL));
    for (int i = 0; i < FACES; i++)
        counter[i] = 0;
}

// overloaded class constructor that seeds the random number generator for custom no. of faces
GameDie::GameDie(int n)
{
    custom_FACES = n;
    cf_enabled = true;
    srand(time(NULL));
    for (int i = 0; i < custom_FACES; i++)
        counter[i] = 0;
}
// generate a random number between 1-6 (inclusive) or 1-custom_Faces and return it
int GameDie::roll()
{
    int roll = rand() % FACES;
    if (cf_enabled)
    {
        roll = rand() % custom_FACES;
    }
    counter[roll]++;
    return roll + 1;
}

// returns a vector, count of all faces rolled on the die
vector<int> GameDie::get_distribution()
{
    vector<int> vectdies;
    int die_faces = FACES;
    if (cf_enabled)
    {
        die_faces = custom_FACES;
    }
    for (int i = 0; i < die_faces; i++)
        vectdies[i] = counter[i];
    return vectdies;
}