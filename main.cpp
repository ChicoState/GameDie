#include "GameDie.h"
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{

  GameDie gamedie;
  int rollgamedie = gamedie.roll();
  cout << "Randomly generated number is :- " << rollgamedie << endl;

  return 0;

} 
