#include "GameDie.h"
#include <cstdlib>
#include <ctime>
#include <vector>

std::vector<int> GameDie::get_distribution(){
    std::vector<int> v;
    int len=std::end(counter)-std::begin(counter);
    for(int i=0;i<len;i++){
        v.push_back(counter[i]);
    }
    return v;
}

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
