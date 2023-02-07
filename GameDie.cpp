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

// get distribution
GameDie::get_distribution(){
    vector<int> res_vec(SIDES, 0);

    for (int i = 0; i < SIDES; i++) {
      res_vec[i] = counter[i];
    }
    return res_vec;
}
