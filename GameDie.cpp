#include "GameDie.h"
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;


GameDie::GameDie(unsigned int a)
{
    if(a != 0){
        SIDES= a;
        srand(time(NULL));
        for(int i=0; i<SIDES; i++)
        counter[i] = 0;
    }
    else{
        SIDES = 6;
    }
    
}

//class constructor that seeds the random number generator
GameDie::GameDie()
{
    SIDES = 6;
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

vector<int> GameDie::get_distribution(){
    vector<int> distr;
    
    for(int i = 0; i<SIDES; i++){
        distr.push_back(0);
    }
    int rolls = roll();
    for(int i = 0; i<SIDES; i++){
        
        distr[rolls-1] +=1;
    }

    return distr;

}
