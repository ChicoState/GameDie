#ifndef GAMEDIE_H
#define GAMEDIE_H

#include <vector>
using namespace std;

class GameDie
{
  public:
   GameDie();
   GameDie(int n);
   int roll();
   vector<int> get_distribution();
  private:
   int sides = 6;
   int *counter;
};

#endif
