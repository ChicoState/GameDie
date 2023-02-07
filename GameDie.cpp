#include "GameDie.h"
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;
//class constructor that seeds the random number generator
GameDie::GameDie()
{
    srand(time(NULL));
    for(int i=0; i<FACES; i++)
      counter[i] = 0;
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
    int roll = rand() % FACES;
    counter[roll]++;
    return roll + 1;
}

vector<int> GameDie::get_distribution()
{
    vec1.resize(num);
    for (int i=0; i<vec1.size(); ++i)
    {
        if(i==roll())
        {
            vec1.at(i-1)+=1;
        }
    }
    return vec1;
}

GameDie::GameDie(unsigned int a)
{
    GameDie g;
    if(a==0)
    {
        num = FACES;
        GameDie();
        
    }
    else if(a>0)
    {
        num = a;
        srand(time(NULL));
        for(int i=0; i<a; i++)
            counter[i] = 0;
        
    }
}
