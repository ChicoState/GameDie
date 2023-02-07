#include "GameDie.h"
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iostream>
using namespace std;

//class constructor that seeds the random number generator
GameDie::GameDie()
{
    srand(time(NULL));
    for(int i=0; i<SIDES; i++)
        counter.push_back(0);
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
    int roll = rand() % FACES;
    counter[roll]++;
    return roll + 1;
}

//solves issue #43
//Creates a overloaded constructor for alternate-sized die
GameDie::GameDie(unsigned int noOfSides){
    srand(time(NULL));
    SIDES = noOfSides;
    for(int i=0; i<SIDES; i++)
        counter.push_back(0);
}

//function to get distribution of the face values.
//@param noOfTimes It denotes how many times user wants to roll the dice
vector<int> GameDie::get_distribution(unsigned int noOfTimes){
    vector<int> output;
    for(int i=0; i<noOfTimes; i++){
        int ans = roll();
    }

    return this->counter;
}
