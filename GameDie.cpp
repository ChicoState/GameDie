#include <cstdlib>
#include <iostream>
#include <ctime>
#include "GameDie.h"

using namespace std;

//class constructor that seeds the random number generator
GameDie::GameDie()
{
}

//generate a random number between 1-6 (inclusive) and return it
int GameDie::roll()
{
  srand(time(NULL));
  int n;
  cout << "Enter the value of n" << endl;
  cin >> n;
  int random_num;
  if(n >=4 && n <=20)
  {
    random_num = rand() % (n)+1;
    cout << "Random Number being generated: " << random_num << endl;
  }
  else
  {
    cerr << "Please give the correct value of n, which should be between 4 and 20" << endl;
  }
  return random_num;
}
