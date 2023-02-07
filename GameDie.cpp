#include "GameDie.h"
#include <cstdlib>
#include <ctime>

//class constructor that seeds the random number generator
GameDie::GameDie()
{
   
    srand(time(NULL));
    for(int i=0; i<SIDES; i++)
    {
    disCounter.push_back(0);
    }
   
}
// constructor that the die can be created with any positive number of faces
    GameDie::GameDie(unsigned int val){
        if (val == 0)
        {
            GameDie();
        }
        else if (val < 0)
        {
            std::cout << "number of sides must be 0 or greater" << std::endl;
        }
        else if (val > 0)
        {
            for (int i = 0; i < val; i++)
            {
                disCounter.push_back(0);
            }
        }
    }

    //generate a random number between 1-6 (inclusive) and return it
    int GameDie::roll()
{
    int roll = rand() % disCounter.size() - 1;
    disCounter[roll]++;
    return roll + 1;
}
