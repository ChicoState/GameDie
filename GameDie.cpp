#include "GameDie.h"
#include <vector>
#include <cstdlib>
#include <ctime>

//class constructor that seeds the random number generator
GameDie::GameDie()
{
    srand(time(NULL));
    counter.resize(SIDES);

    for(int i=0; i<SIDES; i++)
      counter[i] = 0;
}

//overloaded constructor
GameDie::GameDie(unsigned int num)
{
    if( num == 0 )
    {
        counter.resize(SIDES);
    }
    else{
        counter.resize(num);
    }
    for(int i=0; i<SIDES; i++)
    {
        counter[i] = 0;
    }

}

//generate a random number between 1-n where n is the counter size
// (inclusive) and return it
int GameDie::roll()
{
    int roll = rand() % counter.size();
    counter[roll]++;
    return roll + 1;
}

// return the count of how many times each face has been rolled, as a vector
// where each face's count is at index face-1 (i.e. Face 1 is at index 0)
vector <int> GameDie::get_distribution(){
    return counter;
}
