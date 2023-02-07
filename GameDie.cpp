#include "GameDie.h"
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std; // change 1 - adding this namespace
vector<int>Die_count; // change 1 - vector has been created for get_distribution function

//class constructor that seeds the random number generator
GameDie::GameDie()
{
    srand(time(NULL));
    for(int i=0; i<FACES; i++)
      counter[i] = 0;
      //initializing the vector elements to zeros initially
      for (int i = 0; i < Die_count.size()-1; i++)
        Die_count[i]=0;
      
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
    int roll = rand() % FACES;
    counter[roll]++;
    return roll + 1;
}

//change 1 - public member function that returns the count of a face in the die
vector<int>GameDie::get_distribution()
{
    int die_num= roll();
    Die_count[die_num-1]=+1;
    return Die_count;
    
}
