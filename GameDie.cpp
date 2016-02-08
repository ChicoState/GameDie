#include <cstdlib>
#include <iostream>
#include <ctime>
#include"GameDie.h"
//class constructor that seeds the random number generator
GameDie::GameDie()
{
}

/*GameDie::GameDie(int a)
{
    roll(int l);
}*/
//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll(int l)
{
        srand(time(NULL));
        int result;
        if(l>4)
        result =  rand()%l+1;
        else
        result =  rand()%20+1;
        //int result = (rand() %20 +1);
        std::cout << result <<std::endl;
        return (result);
}

